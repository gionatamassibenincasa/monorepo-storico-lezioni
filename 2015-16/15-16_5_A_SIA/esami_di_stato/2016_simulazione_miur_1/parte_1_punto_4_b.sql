-- b)	l’elenco dei capi presenti in un punto
-- vendita ad una precisa data (a scopo di
-- inventario) con la descrizione dei modelli
-- a cui appartengono.
USE sim1_es_stato_2016_miur;

SELECT
    a.codice, taglia, c.nome,
    m.nome, m.genere, co.nome
FROM
    colore AS c,
    abito AS a,
    esposizione AS e,
    negozio AS n,
    modello AS m,
    collezione AS co
WHERE
    n.denominazione = 'Gamma Showroom' AND
    e.arrivo <= '2016-04-09' AND
    (e.partenza > '2016-04-09' OR
        e.partenza IS NULL) AND
    c.codice = a.colore AND
    a.codice = e.abito AND
    e.negozio = n.codice AND
    a.modello = m.codice AND
    m.collezione = co.codice;