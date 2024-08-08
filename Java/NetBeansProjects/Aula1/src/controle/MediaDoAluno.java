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
public class MediaDoAluno {
    public static void main(String[] args) {
      // Faça um programa que receba como dados de entrada duas notas de um aluno e mostre como resultado a media obtida por esse aluno
      float med1,med2, res;
      med1=Float.valueOf( JOptionPane.showInputDialog("Digite a primeira nota: "));
      med2=Float.valueOf( JOptionPane.showInputDialog("Digite a segunda nota: "));
      res = (med1 + med2)/2;
      JOptionPane.showMessageDialog(null, "A média obtida é de "+res);

      
      
      
      
    }
    
}
