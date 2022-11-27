create Database if not exists es_2013;
USE es_2013;

create table if not exists categoria(
id_categoria int primary key,
descrizione varchar(255) not null unique);

create table if not exists merce(
id_merce int primary key,
descrizione varchar(255),
categoria int references categoria (id_categoria));

insert into categoria values
        (1, 'generi alimentari'),
        (2,'strumentazione elettronica');
insert into merce values
        (1,'biscotti',1),
        (2,'carne',1),
        (3,'pomodori',1),
        (4,'tablet',2),
        (5,'bomba atomica',2);

-- (generi alimentari, strumentazione elettronica, farmaci, abbigliamento, …)