USE es_stato_2014;
SELECT
    Denominazione,
    Studente.Cognome,
    Tutor.Cognome,
    Referente.Cognome,
    Tirocinio.Descrizione,
    Tirocinio.Inizio,
    Tirocinio.Fine,
    Valutazione,
    Attivita.Descrizione,
    Attivita.Strumenti,
    AnnoScolastico.Sigla,
    Classe.AnnoCorso,
    Classe.Sezione,
	Specializzazione
FROM
    Azienda,
    Tutor,
    Tirocinio,
    Studente,
    Classe,
    AnnoScolastico,
    Referente,
    Attivita
WHERE
    Azienda.PI = Tutor.PI AND
    Tutor.CF = Tirocinio.Tutor AND
    Tirocinio.Studente = Studente.Matricola AND
    Studente.Classe = Classe.ID AND
    Classe.AnnoS = AnnoScolastico.ID AND
    Tirocinio.ID = Attivita.Tirocinio AND
    Classe.Referente = Referente.Matricola;