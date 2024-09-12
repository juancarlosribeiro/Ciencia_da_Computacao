/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package br.com.controle;

/**
 *
 * @author juan.fiuza
 */
public class ComprasControle {
    private double somaDiabo;
    private int entreNos;

    public double getSomaDiabo() {
        return somaDiabo;
    }

    public int getEntreNos() {
        return entreNos;
    }

    
    
    public void addComprinhas(double valor) {
        this.somaDiabo += valor;
        if (valor <= 700 && valor >= 500){
            this.entreNos+=1;
        }
    }
    
}