/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package br.com.entidade;

import br.com.controle.Alunos;
import javax.swing.JOptionPane;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.util.ArrayList;
/**
 *
 * @author juan.fiuza
 */
public class ManterAluno extends DAO {
    public void inserir(Alunos a) throws Exception {
    try {
    abrirBanco();
    String query = "INSERT INTO aluno(codigo,nome,email)" + "values(null,?,?)";
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
    /**
     *
     * @return
     * @throws Exception
     */
    public ArrayList<Alunos> PesquisarTudo() throws Exception{
       ArrayList<Alunos> alunos = new ArrayList<Alunos>();
         try{
         abrirBanco();  
         String query = "select codigo, nome FROM alunos";
         pst = (PreparedStatement) con.prepareStatement(query);
         ResultSet tr = pst.executeQuery();
         Alunos a ;
         while (tr.next()){               
           a = new Alunos();
           a.setCodigo(tr.getInt("codigo"));
           a.setNome(tr.getString("nome"));
           alunos.add(a);
         } 
         fecharBanco();
       }catch (Exception e){
           System.out.println("Erro " + e.getMessage());
     } 
       return alunos;
     }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    }
    







    