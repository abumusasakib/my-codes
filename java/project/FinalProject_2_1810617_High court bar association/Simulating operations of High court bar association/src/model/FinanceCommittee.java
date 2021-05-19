/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package model;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;
import javafx.scene.control.TableView;
import javafx.scene.control.TextArea;

/**
 *
 * @author sakib
 */
public class FinanceCommittee {
    
    private String name, address, phoneNo, message;
    private float salary;

    
    
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

    public void addSalaryToTableAndDatabase(TableView<Salary> salaryTableView, String name, String salary, String bonus) 
    {
        Salary salary1 = new Salary(name,
                                       salary,
                                      bonus
                                    );
        salaryTableView.getItems().add(salary1);
        
        
        
        File f = null;
        FileWriter fw = null;
        try {
            f = new File("salary.txt");
            //fw = new FileWriter(f);
            if(f.exists()) fw = new FileWriter(f,true);
            else fw = new FileWriter(f);
           
            fw.write(
            	name+","+salary+","+bonus+"\n"
            );           
  
        } catch (IOException ex) {
            //Logger.getLogger(MainFXMLController.class.getName()).log(Level.SEVERE, null, ex);
        } finally {
            try {
                if(fw != null) fw.close();
            } catch (IOException ex) {
                //Logger.getLogger(MainFXMLController.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
        
        
    }
    
    
    
}
