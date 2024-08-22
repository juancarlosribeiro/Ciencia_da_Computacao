/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package br.com.controle;

/**
 *
 * @author juan.fiuza
 */
public class SistemaDeCompra {

    private double preco;
    private double maior;
    private double soma;

    public double getPreco() {
        return preco;
    }

    public void setPreco(double preco) {
        this.preco = preco;
        if (this.preco > this.maior) {
            this.maior = this.preco;
        }
        this.soma += this.preco;

    }

    public double getMaior() {
        return maior;
    }

    public double getSoma() {
        return soma;
    }


}
/* Faça um programa que receba como dados de entrada o valor de 5 compras e mostre como resultado: 
a> a soma de todas as compras b> a maior compra efetuada*/
