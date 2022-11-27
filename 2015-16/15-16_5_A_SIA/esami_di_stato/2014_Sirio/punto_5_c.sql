USE es_stato_2014;
SELECT
    Denominazione,
    COUNT(Matricola) AS NumeroStudenti
FROM
    Azienda,
    Tutor,
    Tirocinio,
    Studente,
    Classe,
    AnnoScolastico
WHERE
    Azienda.PI = Tutor.PI AND
    Tutor.CF = Tirocinio.Tutor AND
    Tirocinio.Studente = Studente.Matricola AND
    Studente.Classe = Classe.ID AND
    Classe.AnnoS = AnnoScolastico.ID AND
    AnnoScolastico.Sigla = "2013/2014"
GROUP BY AnnoScolastico.ID;