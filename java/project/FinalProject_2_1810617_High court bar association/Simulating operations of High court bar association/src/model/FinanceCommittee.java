/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package model;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import javafx.scene.control.TextArea;

/**
 *
 * @author sakib
 */
public class FinanceCommittee {
    
    private String name, address, phoneNo, message;
    private float salary;
    public static void arrangeSalary(String name, String salary, String bonus) throws IOException {
           File f =  null;
        
        FileWriter  fw = null;
        
        //unchecked exception
        
        
        try
        {
            f = new File("salary.txt");
        
        if(f.exists())
        {
            fw = new FileWriter(f,true); //APPEND MODE
        }
        else
        {
            fw = new FileWriter(f); //file creating
        }
        
        //file created
        
        String str = name+","+salary+","+bonus+"\n";
        
       
        fw.write(str);
        
       
        
        }
        catch(Exception e)
        {
            System.out.println("Exception : "+e);
            
        }
        finally
        {
            fw.close();
        }
    }

    public static void collectFunds(TextArea fundDetailsTextArea) throws IOException {
       File f =  null;
        
        FileWriter  fw = null;
        
        //unchecked exception
        
        
        try
        {
            f = new File("fundCollection.txt");
        
        if(f.exists())
        {
            fw = new FileWriter(f,true); //APPEND MODE
        }
        else
        {
            fw = new FileWriter(f); //file creating
        }
        
        //file created
        
        String str = fundDetailsTextArea.getText()+"\n";
        
       
        fw.write(str);
        
        
        }
        catch(IOException e)
        {
            System.out.println("Exception : "+e);
            
        }
        finally
        {
            fw.close();
        }
        
        
        
        
        
        
    }
    
    
    
}
