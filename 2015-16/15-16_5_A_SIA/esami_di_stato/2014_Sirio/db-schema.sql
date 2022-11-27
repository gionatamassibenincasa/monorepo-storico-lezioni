BEGIN;
CREATE DATABASE IF NOT EXISTS
es_stato_2014;

USE es_stato_2014;

-- Azienda(PI,
--         Denominazione,
--         RagSociale)
CREATE TABLE IF NOT EXISTS
Azienda (
    PI INT(11) PRIMARY KEY,
    Denominazione VARCHAR(50),
    RagioneSociale VARCHAR(6)
);
    
-- Tutor(CF, Nome, Cognome, PI)
CREATE TABLE IF NOT EXISTS
Tutor (
    CF VARCHAR(16) PRIMARY KEY,
    Nome VARCHAR(25),
    Cognome VARCHAR(25),
    -- Il tutor non puo' cambiare
    -- azienda
    PI INT(11) REFERENCES Azienda(PI)
);

-- AnnoScolastico(ID, Sigla, Inizio, Fine)
CREATE TABLE IF NOT EXISTS
AnnoScolastico (
    ID INT(2) PRIMARY KEY,
    Sigla VARCHAR(9),
    Inizio DATE DEFAULT NULL,
    Fine DATE DEFAULT NULL
);
    
-- Referente(Matricola, Nome, Cognome)
CREATE TABLE IF NOT EXISTS
Referente (
    Matricola INT(6) PRIMARY KEY,
    Nome VARCHAR(25),
    Cognome VARCHAR(25)
);

-- Classe(ID,
--        AnnoCorso,
--        Sezione,
--        Specializzazione,
--        ID_AS,
--        ID_Referente)
CREATE TABLE IF NOT EXISTS
Classe (
    ID INT PRIMARY KEY,
    AnnoCorso INT NOT NULL
        CHECK (AnnoCorso BETWEEN 1 AND 5),
    Sezione VARCHAR(1) NOT NULL,
    Specializzazione VARCHAR(10),
    AnnoS INT(2) REFERENCES 
        AnnoScolastico(ID),
    Referente INT(6) REFERENCES
        Referente(Matricola)
);

-- Studente(Matricola, Nome, Cognome,
--          ID_Classe)
CREATE TABLE IF NOT EXISTS
Studente (
    Matricola INT(6) PRIMARY KEY,
    Nome VARCHAR(25),
    Cognome VARCHAR(25),
    Classe INT REFERENCES 
        Classe(ID)
);

-- Tirocinio(ID, Descrizione, Argomento, Inizio, Fine, Valutazione,
--	   CF_Tutor, Matricola_Studente)
CREATE TABLE IF NOT EXISTS
Tirocinio (
    ID INT PRIMARY KEY,
    Descrizione VARCHAR(255),
    Argomento VARCHAR(255),
    Inizio DATE NOT NULL,
    Fine DATE,
    Valutazione INT,
    Tutor VARCHAR(16) NOT NULL REFERENCES
        Tutor(CF),
    Studente INT(6) NOT NULL REFERENCES
        Studente(Matricola),
    UNIQUE(Tutor, Studente, Inizio),
    CHECK (Valutazione BETWEEN 1 AND 10)
);
    
-- Attività(ID, Descrizione, Strumenti, Inizio, Fine, ID_Tirocinio)
CREATE TABLE IF NOT EXISTS
Attivita (
    ID INT PRIMARY KEY,
    Descrizione VARCHAR(255),
    Strumenti VARCHAR(255),
    Tirocinio INT NOT NULL REFERENCES
        Tirocinio(ID)
);
COMMIT;