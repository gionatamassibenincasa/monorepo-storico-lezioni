-- CREATE DATABASE e3;

USE e3;

CREATE TABLE IF NOT EXISTS users (
    username VARCHAR(20) PRIMARY KEY,
    password VARCHAR(20)
);

INSERT INTO users VALUES
    ('pippo', 'hello'),
    ('pluto', 'world');
