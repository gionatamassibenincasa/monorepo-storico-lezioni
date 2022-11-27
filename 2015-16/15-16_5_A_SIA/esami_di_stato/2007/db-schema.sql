CREATE DATABASE IF NOT EXISTS
es_2007;

USE es_2007;

DROP TABLE IF EXISTS medico;

CREATE TABLE IF NOT EXISTS
medico (
  cf CHAR(16) PRIMARY KEY,
  nome VARCHAR(50),
  cognome VARCHAR(50),
  num_albo INTEGER,
  specializzazione ENUM (
            'di base',
            'anestesista',
            'cardiologo',
            'dentista')
);

DROP TABLE IF EXISTS paziente;

CREATE TABLE IF NOT EXISTS
paziente (
  cf CHAR(16) PRIMARY KEY,
  nome VARCHAR(50),
  cognome VARCHAR(50)
);

DROP TABLE IF EXISTS fascia_oraria;

CREATE TABLE IF NOT EXISTS
fascia_oraria (
    id INTEGER PRIMARY KEY,
    giorno_settimana ENUM (
        'Lun',
        'Mar',
        'Mer',
        'Gio',
        'Ven'),
    inizio TIME,
    fine TIME
);

DROP TABLE IF EXISTS disponibilita;

CREATE TABLE IF NOT EXISTS
disponibilita (
    medico CHAR(16) REFERENCES medico(cf),
    orario INTEGER REFERENCES fascia_oraria(id),
    PRIMARY KEY(medico, orario)
);

DROP TABLE IF EXISTS tipo_prestazione;

CREATE TABLE IF NOT EXISTS
tipo_prestazione (
    id INTEGER PRIMARY KEY,
    nome VARCHAR(50),
    costo REAL,
    tempo_medio INTEGER DEFAULT 15
);

DROP TABLE IF EXISTS prestazione;

CREATE TABLE IF NOT EXISTS
prestazione (
    id INTEGER PRIMARY KEY,
    medico CHAR(16) REFERENCES medico(cf),
    paziente CHAR(16) REFERENCES paziente(cf),
    tipo_prestazione INTEGER REFERENCES tipo_prestazione(id),
    data DATE,
    ora_prenotazione TIME,
    ora_inizio TIME,
    ora_fine TIME DEFAULT NULL,
    costo REAL,
    effettuata BIT,
    UNIQUE (medico, paziente, tipo_prestazione, data)
);


DROP TABLE IF EXISTS abilitazione;

CREATE TABLE IF NOT EXISTS
abilitazione (
    medico CHAR(16) REFERENCES medico(cf),
    tipo_prestazione INTEGER REFERENCES tipo_prestazione(id),
    PRIMARY KEY (medico, tipo_prestazione)
);

---
--- QUERY
---

-- 1.
-- elenco giornaliero delle visite prenotate
-- per ogni singolo medico

DROP VIEW IF EXISTS query_1;

CREATE VIEW IF NOT EXISTS query_1 AS
select
    medico.nome AS nome_medico,
    medico.cognome AS cognome_medico,
    prestazione.data AS data,
    prestazione.ora_prenotazione AS ora_prenotazione,
    paziente.cognome AS cognome_paziente,
    tipo_prestazione.nome AS nome
from 
    medico,
    prestazione,
    paziente,
    tipo_prestazione
where 
    medico.cf = prestazione.medico and
    paziente.cf = prestazione.paziente and
    prestazione.tipo_prestazione = tipo_prestazione.id and
    prestazione.effettuata = 0
order by
    prestazione.data,
    medico.cognome,
    medico.nome;

-- 2.
-- elenco giornaliero delle visite prenotate e non effettuate

DROP VIEW IF EXISTS query_2;
CREATE VIEW IF NOT EXISTS query_2 AS
select
    medico.nome AS nome_medico,
    medico.cognome AS cognome_medico,
    prestazione.data AS data,
    prestazione.ora_prenotazione AS ora_prenotazione,
    paziente.cognome AS cognome_paziente,
    tipo_prestazione.nome AS prestazione
from (
        (
            (medico join prestazione)
                join paziente
        )
                    join tipo_prestazione
    )
where (
    (medico.cf = prestazione.medico) and
    (paziente.cf = prestazione.paziente) and
    (prestazione.tipo_prestazione = tipo_prestazione.id) and
    (prestazione.effettuata = 0) and
    (prestazione.`data` <= curdate())
    and (prestazione.ora_prenotazione <= curtime())
)
order by
    prestazione.data,
    medico.cognome,
    medico.nome;

-- 3.
-- elenco settimanale contenente gli appuntamenti di ciascun
-- medico suddivisi per giorno e per ora

DROP VIEW IF EXISTS query_3;
CREATE VIEW IF NOT EXISTS query_3 AS
select week(pr.data,0) AS settimana,
    (case dayofweek(pr.data)
        when 1 then 'Lun'
        when 2 then 'Mar'
        when 3 then 'Mer'
        when 4 then 'Gio'
        when 5 then 'Ven'
        when 6 then 'Sab'
        when 7 then 'Dom'
    end) AS giorno,
    pr.data AS data,
    m.cognome AS cognome_medico,
    m.nome AS nome_medico,
    t.nome AS nome,
    pz.cognome AS cognome
from (
        (
            (medico m join prestazione pr)
                join paziente pz
        )
                    join tipo_prestazione t
    ) 
where 
    (m.cf = pr.medico) and
    (pz.cf = pr.paziente) and
    (t.id = pr.tipo_prestazione)
order by
    week(pr.data,0),
    dayofweek(pr.data),
    pr.data,
    m.cognome,
    m.nome;

-- 4.
-- elenco cronologico delle visite usufruite da ciascun paziente

DROP VIEW IF EXISTS query_4;
CREATE VIEW query_4 AS
select
    pz.cognome AS cognome_paziente,
    pz.nome AS nome_paziente,
    week(pr.`data`,0) AS settimana,
    (case dayofweek(pr.`data`)
        when 1 then 'Lun'
        when 2 then 'Mar'
        when 3 then 'Mer'
        when 4 then 'Gio'
        when 5 then 'Ven'
        when 6 then 'Sab'
        when 7 then 'Dom'
    end) AS giorno,
    pr.data AS data,
    m.cognome AS cognome_medico,
    m.nome AS nome_medico,
    t.nome AS nome
from 
    (
        (
            (medico m join prestazione pr)
                join paziente pz
        ) join tipo_prestazione t
    )
where (
    (m.cf = pr.medico) and
    (pz.cf = pr.paziente) and
    (t.id = pr.tipo_prestazione) and
    (pr.effettuata = 1))
order by
    pz.cognome,
    pz.nome,
    week(pr.data,0),
    pr.data,
    m.cognome,
    m.nome;
