CREATE TABLE Spesa (
	id INTEGER PRIMARY KEY AUTOINCREMENT,
	articolo TEXT UNIQUE NOT NULL,
	quantita INTEGER CHECK(quantita > 0)
);

INSERT INTO Spesa (articolo, quantita) VALUES
  ('Albicocche', 5)
, ('Banane', 3)
, ('Carote', 10)
, ('Datteri', 20);

CREATE TABLE Categoria (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    categoria TEXT UNIQUE
);

INSERT INTO Categoria (categoria) VALUES
  ('frutta')
, ('ortaggi');

ALTER TABLE Spesa ADD COLUMN
    categoria INTEGER
        DEFAULT 1
        REFERENCES Categoria(id);
        
UPDATE Spesa
SET categoria = 2
WHERE articolo = 'Carote';
        
SELECT *
FROM
    Spesa
    INNER JOIN Categoria
            ON (Spesa.categoria = Categoria.id);
            
SELECT articolo, Categoria.categoria, quantita
FROM
    Spesa
    INNER JOIN Categoria
            ON (Spesa.categoria = Categoria.id)
ORDER BY Categoria.categoria;
