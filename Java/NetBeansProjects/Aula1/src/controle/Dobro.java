/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package controle;

import javax.swing.JOptionPane;

/**
 *
 * @author juan.fiuza
 */
public class Dobro {
    public static void main(String[] args) {
        int v1;
        //System.out.println("Digite um número: ");
       //JOptionPane.showMessageDialog(null, "O Gustavo é nazista.");
       v1=Integer.valueOf(JOptionPane.showInputDialog("Digite um valor: "));
       JOptionPane.showMessageDialog(null, "O dobro é "+v1*2);
    // Faça um programa que receba como dados de entrada duas notas de um aluno e mostre como resultado a media obtida por esse aluno
    
    }
}
