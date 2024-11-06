create database alunos;

use alunos;

create table turma1
(  
	id_aluno int unsigned not null auto_increment, 
    nome varchar(45) not null,
    primary key(id_aluno)
);

create table turma2
(  
	id_aluno int unsigned not null auto_increment, 
    nome varchar(45) not null,
    primary key(id_aluno)
);