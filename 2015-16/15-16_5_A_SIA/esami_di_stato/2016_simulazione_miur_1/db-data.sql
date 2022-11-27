USE sim1_es_stato_2016_miur;

DELETE FROM collezione;
INSERT INTO collezione(codice, nome, stagione, anno)
VALUES
  (1, 'Camicie d''autore', 'Primavera/Estate', 2016),
  (2, 'Camicie d''autore', 'Autunno/Inverno', 2016),
  (3, 'Hawaii', 'Primavera/Estate', 2016),
  (4, 'Norge', 'Autunno/Inverno', 2016);
  
DELETE FROM colore;
INSERT INTO colore (codice, nome, tessuto)
VALUES
  (1, 'Sky 354', 'cotone egiziano, trama popeline, doppio ritorto in trama e ordito'),
  (2, 'Moma', 'cotone egiziano, tessuto twill spigato, doppio ritorto in trama e ordito'),
  (3, 'Manchester', 'tessuto trama oxford, super compact'),
  (4, 'Stampati', 'cotone egiziano, tessuto trama popeline stampato, doppio ritorto in trama e ordito');
  
DELETE FROM modello;
INSERT INTO modello(codice, prezzo, nome, genere, collezione)
VALUES
  (1, 119.99, 'Gabbiano', 'M', 1),
  (2, 99.99, 'Ninfea', 'F', 1),
  (3, 129.99, 'Stella alpina', 'M', 2),
  (4, 159.99, 'Edelweiss', 'F', 2),
  (5, 59.99, 'Arcobaleno', 'M', 3);

DELETE FROM dipendente;  
INSERT INTO dipendente(codice, nome, cognome)
VALUES
  (1, 'Pinco', 'Pallino'),
  (2, 'John', 'Doe'),
  (3, 'Sancho', 'Panza');

DELETE FROM negozio;
INSERT INTO negozio(codice, denominazione, apertura, telefono)
VALUES
    (1, 'Gamma Showroom', '2015-05-09', '+39 02 123456'),
    (2, 'Boutique Gamma', '2016-01-21', '+33 01 987654'),
    (3, 'Taller Gamma', '2015-10-12', '+34 91 456789');

DELETE FROM indirizzo; 
INSERT INTO indirizzo(negozio, nazione, localita,
    cap, via)
VALUES
    (1, 'Italia', 'Milano', 'I-20121', 'Via Montenapoleone 100/A'),
    (2, 'Francia', 'Parigi', 'F-75008', 'Rue du Faubourg Saint Honore'' 300/B'),
    (3, 'Spagna', 'Madrid', 'E-28016', 'Calle Serrano 200/C');

DELETE FROM lavora;
INSERT INTO lavora (dipendente, negozio, inizio, fine, qualifica)
VALUES
  (1, 1, '2015-05-09', NULL, 'commesso'),
  (2, 2, '2016-01-21', NULL, 'commesso'),
  (3, 3, '2015-10-12', NULL, 'commesso');

DELETE FROM abito;
INSERT INTO abito (codice, taglia, colore, modello)
VALUES
  ( 1, 48, 1, 1),
  ( 2, 48, 1, 1),
  ( 3, 48, 2, 1),
  ( 4, 48, 3, 1),
  ( 5, 48, 4, 1),
  ( 6, 44, 1, 2),
  ( 7, 44, 2, 2),
  ( 8, 44, 3, 2),
  ( 9, 44, 4, 2),
  (10, 44, 5, 2),
  (11, 48, 1, 3),
  (12, 48, 1, 3),
  (13, 48, 2, 3),
  (14, 48, 3, 3),
  (15, 48, 4, 3),
  (16, 44, 1, 4),
  (17, 44, 2, 4),
  (18, 44, 3, 4),
  (19, 44, 4, 4),
  (20, 44, 5, 4),
  
  (21, 48, 1, 1),
  (22, 48, 1, 1),
  (23, 48, 2, 1),
  (24, 48, 3, 1),
  (25, 48, 4, 1),
  (26, 44, 1, 2),
  (27, 44, 2, 2),
  (28, 44, 3, 2),
  (29, 44, 4, 2),
  (30, 44, 5, 2),
  (31, 48, 1, 3),
  (32, 48, 1, 3),
  (33, 48, 2, 3),
  (34, 48, 3, 3),
  (35, 48, 4, 3),
  (36, 44, 1, 4),
  (37, 44, 2, 4),
  (38, 44, 3, 4),
  (39, 44, 4, 4),
  (40, 44, 5, 4),
  
  (41, 48, 1, 1),
  (42, 48, 1, 1),
  (43, 48, 2, 1),
  (44, 48, 3, 1),
  (45, 48, 4, 1),
  (46, 44, 1, 2),
  (47, 44, 2, 2),
  (48, 44, 3, 2),
  (49, 44, 4, 2),
  (50, 44, 5, 2),
  (51, 48, 1, 3),
  (52, 48, 1, 3),
  (53, 48, 2, 3),
  (54, 48, 3, 3),
  (55, 48, 4, 3),
  (56, 44, 1, 4),
  (57, 44, 2, 4),
  (58, 44, 3, 4),
  (59, 44, 4, 4),
  (60, 44, 5, 4);

DELETE FROM vendita;  
INSERT INTO vendita (abito, dipendente, data, prezzo)
VALUES
  ( 1, 1, CURDATE(), 119.99),
  ( 5, 1, CURDATE(), 119.99),
  (10, 1, CURDATE(), 99.99),
  (15, 1, CURDATE(), 129.99),
  (20, 1, CURDATE(), 159.99),
  
  (21, 2, CURDATE(), 119.99),
  (25, 2, CURDATE(), 119.99),
  (30, 2, CURDATE(), 99.99),
  (35, 2, CURDATE(), 129.99),
  (40, 2, CURDATE(), 159.99),
  
  (41, 3, CURDATE(), 119.99),
  (45, 3, CURDATE(), 119.99),
  (50, 3, CURDATE(), 99.99),
  (55, 3, CURDATE(), 129.99),
  (60, 3, CURDATE(), 159.99);
  
DELETE FROM esposizione;
INSERT INTO esposizione (abito, negozio, arrivo)
VALUES
  ( 1, 1, '2016-01-01'),
  ( 2, 1, '2016-01-02'),
  ( 3, 1, '2016-01-03'),
  ( 4, 1, '2016-01-04'),
  ( 5, 1, '2016-01-05');
