CREATE DATABASE IF NOT EXISTS taxi;

USE taxi;

CREATE TABLE IF NOT EXISTS Telefonista (
    Codice INT PRIMARY KEY,
    Cognome VARCHAR(255) NOT NULL,
    Nome VARCHAR(255) NOT NULL,
    Data_Nascita DATE NOT NULL);
    
CREATE TABLE IF NOT EXISTS Telefonata(
    Numero INT PRIMARY KEY,
    Ora_Ricezione TIMESTAMP DEFAULT NOW(),
    Tipo ENUM('Urgente', 'Programmata'));

CREATE TABLE IF NOT EXISTS Taxi(
    Codice INT PRIMARY KEY,
    Cognome VARCHAR(255) NOT NULL,
    Nome VARCHAR(255) NOT NULL,
    Disponibile BIT(1)); 
    
ALTER TABLE Telefonata
ADD Telefonista INTEGER REFERENCES Telefonista(Codice);

INSERT INTO Telefonista VALUES(
    1,
    'Brandoni',
    'Giovanna',
    '1997-09-14');
    
INSERT INTO Telefonata (
    Numero,
    Tipo,
    Telefonista) VALUES(
    1,
    'Urgente',
    1);