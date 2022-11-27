SELECT Nome, Cognome, 5 AS AnnoDiCorso, Sezione, Sigla, Specializzazione
FROM
	Tirocinio, Studente, Classe, AnnoScolastico
WHERE
	AnnoCorso = 5 AND
	Tirocinio.Studente = Studente.Matricola AND
	Studente.Classe = Classe.ID AND
	Classe.AnnoS = AnnoScolastico.ID