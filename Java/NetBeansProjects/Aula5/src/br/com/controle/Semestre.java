/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package br.com.controle;

/**
 *
 * @author juan.fiuza
 */
public class Semestre {
    private double nota1;
    private double nota2;

    public double getNota1() {
        return nota1;
    }

    public void setNota1(double nota1) {
        this.nota1 = nota1;
    }

    public double getNota2() {
        return nota2;
    }

    public void setNota2(double nota2) {
        this.nota2 = nota2;
    }

    public double resp_media(double n1,double n2){
    return (n1+n2)/2;
    }
    
}

/* Faça um programa que receba como entrada duas notas de varios alunos e mostre: 
A> Qual a maior média da turma e o nome do aluno com a maior média
B> Quantos alunos tiveram média  entre 6 e 8 
C> Qual foi a média da turma */







