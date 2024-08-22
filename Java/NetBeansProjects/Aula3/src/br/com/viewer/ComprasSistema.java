/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package br.com.viewer;

import br.com.controle.SistemaDeCompra;
import javax.swing.JOptionPane;

/**
 *
 * @author juan.fiuza
 */
public class ComprasSistema {

    public static void main(String[] args) {
        int cont;
        SistemaDeCompra c = new SistemaDeCompra();
        for (cont = 0; cont < 5; cont++) {
            c.setPreco(Double.valueOf(JOptionPane.showInputDialog("Digite o valor")));
        }
        JOptionPane.showMessageDialog(null, "Maior numero: " + c.getMaior());
        JOptionPane.showMessageDialog(null, "Soma: " + c.getSoma());
    }
}
/* Faça um programa que receba como dados de entrada o valor de 5 compras e mostre como resultado: 
a> a soma de todas as compras b> a maior compra efetuada*/

/* Faça programa que receba como dados de entrada 2 notas de 10 alunos e mostre como resultado: 
a> qual foi a maior media da turma b> Qual foi a menor media da turma c> qual foi a media da turma */
