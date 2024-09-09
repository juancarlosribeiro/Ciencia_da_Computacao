create database db_vendas_veiculos;
use db_vendas_veiculos;

create table cliente 
(

	id_cliente int unsigned not null auto_increment,
	cnh varchar(25) null, 
    tipo_cliente varchar(45) not null,
    check (tipo_cliente in ('Física', 'Jurídica')),
    cartao varchar(16),
    primary key(id_cliente)
);

create table funcionario
(
	id int unsigned not null auto_increment,
    nome_funcionario varchar(45) not null,
    salario double not null default '0',
    departamento varchar(45),
    primary key(id)
);

create table veiculo_venda
(
	id_venda int unsigned not null auto_increment,
    valor_venda double not null,
    data_venda date not null,
    cliente_id int unsigned not null,
    funcionario_id int unsigned not null,
    primary key(id_venda),
    constraint fk_cliente_id foreign key (cliente_id) references cliente (id_cliente),
	constraint fk_funcionario_id foreign key (funcionario_id) references funcionario (id)
);
create table veiculo(
	id_veiculo int unsigned not null auto_increment,
    placa varchar(7) not null,
    marca varchar(45) not null,
    modelo varchar(45) not null,
    valor double not null,
    ano int unsigned not null,
    venda_id int unsigned null,
    primary key(id_veiculo),
    constraint fk_veiculo_venda_id foreign key (venda_id) references veiculo_venda(id_venda)
);

# INSERE DADOS NA TABELA CLIENTE# 

insert into cliente ( nome, cnh, tipo_cliente , cartao )
values('William', '147852369', 'Física' , '1234567890123456'),
	('João' , '1466543322', 'Física' , '1234567890123458'),
	('Pedro', '148970664', 'Física' , '1234567890123457'),
	('Cleiton', '149999999', 'Física' , '1234567890123459'), 
	('Flavin', '1478678578', 'Física' , '1234567890123450');
    
    alter table cliente add nome varchar (45) not null;
    
    select * from cliente;

    