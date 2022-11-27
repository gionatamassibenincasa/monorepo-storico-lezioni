CREATE DATABASE IF NOT EXISTS compagnia_aerea;

USE compagnia_aerea;

CREATE TABLE Aeroporto (
    Codice CHAR (3) PRIMARY KEY,
    Nome VARCHAR (255) NOT NULL,
    Citta VARCHAR (255) NOT NULL,
    Nazione VARCHAR (255) NOT NULL
);

CREATE TABLE Volo (
    Codice INT (5) PRIMARY KEY,
    Ora_partenza TIME NOT NULL,
    Ora_arrivo TIME NOT NULL,
    Luogo_partenza CHAR (3) REFERENCES Aeroporto(Codice),
    Luogo_arrivo CHAR (3) REFERENCES Aeroporto(Codice)
);

CREATE TABLE Personale(
    Matricola INT PRIMARY KEY,
    Cognome VARCHAR (255) NOT NULL,
    Nome VARCHAR (255) NOT NULL,
    Data_nascita DATE NOT NULL,
    Tipo ENUM('Pilota','Assistente') NOT NULL,
    Grado INT CHECK(Grado IS NULL AND Tipo='Assistente')
);

CREATE TABLE Aeromobile (
    Matricola INT PRIMARY KEY,
    Modello VARCHAR (10) NOT NULL,
    Marca VARCHAR (50) NOT NULL,
    Anno INT(4) NOT NULL
);

CREATE TABLE Viaggio(
    Volo CHAR(5) REFERENCES Volo(Codice),
    Data DATE ,
    Stato ENUM('Effettuato','Previsto','Soppresso'),
    Aeromobile INT REFERENCES Aeromobile(Matricola),
    PRIMARY KEY (Volo, Data)
);

CREATE TABLE Equipaggio (
    Volo CHAR(5),
    Data DATE,
    Personale INT REFERENCES Personale(Matricola),
    Ruolo ENUM('Comandante', 'Vicepilota', 'Assistente'),
    -- INDEX (Volo, Data),
    FOREIGN KEY (Volo, Data) REFERENCES Viaggio(Volo, Data)
)