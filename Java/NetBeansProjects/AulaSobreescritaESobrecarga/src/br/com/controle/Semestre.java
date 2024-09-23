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

    public double media(double nota1, double nota2) {
        return (nota1+nota2)/2;
    }
    
    public String media(){
    
    double numero1=this.nota1;
    double numero2=this.nota1;
    return String.valueOf((nota1+nota2)/2);
    }
    
    
    
}
