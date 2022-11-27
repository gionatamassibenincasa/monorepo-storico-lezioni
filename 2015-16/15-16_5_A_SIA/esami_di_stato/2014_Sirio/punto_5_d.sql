USE es_stato_2014;
SELECT
    AnnoCorso,
    Sezione,
    COUNT(Matricola) AS NumeroStudenti
FROM
    Tirocinio,
    Studente,
    Classe,
    AnnoScolastico
WHERE
    Tirocinio.Studente = Studente.Matricola AND
    Studente.Classe = Classe.ID AND
    Classe.AnnoS = AnnoScolastico.ID AND
    AnnoScolastico.Sigla = "2012/2013"
GROUP BY Classe.ID
ORDER BY NumeroStudenti DESC
LIMIT 1;