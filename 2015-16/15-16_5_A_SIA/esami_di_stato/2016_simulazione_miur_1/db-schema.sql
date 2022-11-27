CREATE DATABASE IF NOT EXISTS
sim1_es_stato_2016_miur;

USE sim1_es_stato_2016_miur;

CREATE TABLE IF NOT EXISTS
collezione (
    codice INT PRIMARY KEY,
    nome VARCHAR(255) NOT NULL,
    stagione VARCHAR(255) NOT NULL,
    anno INT NOT NULL CHECK
        (anno BETWEEN 2000 AND 2020)
);

CREATE TABLE IF NOT EXISTS
colore (
    codice INT PRIMARY KEY,
    nome VARCHAR(255) NOT NULL,
    tessuto VARCHAR(255) NOT NULL
);

CREATE TABLE IF NOT EXISTS
modello (
    codice INT PRIMARY KEY,
    prezzo DECIMAL(7,2) NOT NULL, -- ddddd.dd
    nome VARCHAR(255) NOT NULL,
    genere ENUM('M', 'F'),
    collezione INT
        REFERENCES collezione(codice)
);

CREATE TABLE IF NOT EXISTS
dipendente (
    codice INT PRIMARY KEY,
    -- codice_fiscale non e' utilizzabile
    -- in quanto occorre un codice per
    -- identifica un cittadino europeo
    -- e non solo italiano
    nome VARCHAR(255) NOT NULL,
    cognome VARCHAR(255) NOT NULL
);

CREATE TABLE IF NOT EXISTS
negozio (
    codice INT PRIMARY KEY,
    denominazione VARCHAR(255),
    apertura DATE,
    telefono VARCHAR(15)
);

CREATE TABLE IF NOT EXISTS
indirizzo (
    negozio INT PRIMARY KEY
        REFERENCES negozio(codice),
    nazione ENUM('Italia', 'Francia', 'Spagna'),
    localita VARCHAR(255),
    cap VARCHAR(7),
    via VARCHAR(255)
);

CREATE TABLE IF NOT EXISTS
lavora (
    dipendente INT REFERENCES
        dipendente(codice),
    negozio INT REFERENCES
        negozio(codice),
    inizio DATE,
    fine DATE NULL,
    qualifica ENUM('commesso', 'direttore'),
    PRIMARY KEY(dipendente, negozio, inizio)
);

CREATE TABLE IF NOT EXISTS
abito (
    codice INT PRIMARY KEY,
    taglia INT CHECK(taglia BETWEEN 38 AND 58),
    colore INT REFERENCES
        colore(codice),
    modello INT REFERENCES
        modello(codice)
);

CREATE TABLE IF NOT EXISTS
esposizione (
    abito INT REFERENCES
        abito(codice),
    negozio INT REFERENCES
        negozio(codice),
    arrivo DATE NOT NULL,
    partenza DATE NULL DEFAULT NULL,
    PRIMARY KEY(abito, negozio, arrivo)
);

CREATE TABLE IF NOT EXISTS
vendita (
    abito INT PRIMARY KEY
        REFERENCES abito(codice),
    dipendente INT REFERENCES
        dipendente(codice),
    data DATE NOT NULL,
    prezzo DECIMAL(7,2)
);
