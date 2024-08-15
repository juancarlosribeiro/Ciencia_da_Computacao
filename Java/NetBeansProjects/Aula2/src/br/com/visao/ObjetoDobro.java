/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package br.com.visao;

import br.com.controle.Dobro;
import javax.swing.JOptionPane;

public class ObjetoDobro {
    public static void main(String[] args) {
        Dobro d = new Dobro();
        d.setValor(Double.valueOf(JOptionPane.showInputDialog("Digite um numero")));
        JOptionPane.showMessageDialog(null, d.calcularDobro());
    }
}
//Faça um programa que receba como dados de entrada duas notas de um aluno e mostre como resultado se o aluno foi aprovado ou reprovado onde media menor que 7 reprovado maior ou igual a 7 aprovado