/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package br.com.entidade;

import br.com.controle.Alunos;
import java.sql.PreparedStatement;

/**
 *
 * @author juan.fiuza
 */
public class ManterAluno extends DAO {
    public void inserir(Alunos a) throws Exception {
    try {
    abrirBanco();
    String query = "INSERT INTO alunos(codigo,nome,email)" + "values(null,?,?)";
    pst=(PreparedStatement) con.prepareStatement(query);
    pst.setString(1, a.getNome());
    pst.setString(2, a.getEmail());
    pst.execute();
    fecharBanco();
    }
    catch (Exception e){
        System.out.println("Erro" + e.getMessage());
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    }
    
}
