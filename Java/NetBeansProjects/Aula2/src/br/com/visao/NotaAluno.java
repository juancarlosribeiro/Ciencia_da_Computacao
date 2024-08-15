/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package br.com.visao;

import br.com.controle.MediaDoAluno;
import javax.swing.JOptionPane;


public class NotaAluno {
    public static void main(String[] args) {
        MediaDoAluno d = new MediaDoAluno();
        d.setNota1(Double.valueOf(JOptionPane.showInputDialog("Digite a primeira nota: ")));
        d.setNota2(Double.valueOf(JOptionPane.showInputDialog("Digite a segunda nota")));
        
        
        if(d.calcularNota() >= 7){
            JOptionPane.showMessageDialog(null, "Voce esta aprovado");
        }
        else{
            JOptionPane.showMessageDialog(null, "Voce esta reprovado");

            
        }
        
    }
    
}
