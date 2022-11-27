-- a)	il volume totale di vendite di
-- un determinato punto vendita in un
-- dato periodo di tempo
USE sim1_es_stato_2016_miur;
SELECT
    SUM(prezzo) AS 'Volume totale vendite',
    denominazione AS 'Punto vendita'
FROM
    abito AS a,
    vendita AS v,
    dipendente AS d,
    lavora AS l,
    negozio AS n
WHERE
    -- Condizioni di JOIN
    a.codice = v.abito AND
    v.dipendente = d.codice AND
    d.codice = l.dipendente AND
    l.negozio = n.codice AND
    -- Condizioni sul negozio
    n.denominazione = 'Gamma Showroom' AND
    -- Condizioni sul periodo di vendita
    v.data BETWEEN '2016-01-01'
                AND '2016-06-01' AND
    -- Condizioni aggiuntive sul dipendente
    l.inizio <= '2016-01-01' AND
    ((l.fine   >= '2016-06-01') OR (l.fine IS NULL))
GROUP BY n.codice;