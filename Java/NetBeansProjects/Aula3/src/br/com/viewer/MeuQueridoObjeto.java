/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package br.com.viewer;

import br.com.controle.Semestre;
import javax.swing.JOptionPane;

/**
 *
 * @author juan.fiuza
 */
public class MeuQueridoObjeto {

    public static void main(String[] args) {
        int count = 0;
        Semestre s = new Semestre();
        for (count = 0; count < 3; count++) {

            s.setValor(Double.valueOf(JOptionPane.showInputDialog("Digite o valor: ")));
            JOptionPane.showMessageDialog(null, "Valor: " + s.getValor());
            JOptionPane.showMessageDialog(null, "Dobro: " + s.dobro());
        }

    }
}
/* Faça um programa que receba como dados de entrada o valor de 5 compras e mostre como resultado: 
a> a soma de todas as compras b> a maior compra efetuada*/
 