/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package model;

import java.io.BufferedOutputStream;
import java.io.DataOutputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.FileWriter;
import java.io.IOException;
import javafx.scene.control.Alert;
import javafx.scene.control.TableView;
import javafx.scene.control.TextArea;

/**
 *
 * @author sakib
 */
public class Employee {
    private String name, address, phoneNo, message;
        private float fund;
        
    public static void fileComplaint(TableView<Member> memberTableView, TextArea complainTextArea) throws IOException {
        Alert a = new Alert(Alert.AlertType.INFORMATION);
        
        File f =  null;
        
        FileWriter  fw = null;
        
        //unchecked exception
        
        try
        {
            f = new File("empComplaintsSent.txt");
        
        if(f.exists())
        {
            fw = new FileWriter(f,true); //APPEND MODE
        }
        else
        {
            fw = new FileWriter(f); //file creating
        }
        
        //file created
        
        String str = memberTableView.getSelectionModel().getSelectedItem().toString() + "," + complainTextArea.getText() + "\n";
        fw.write(str); 

        a.setTitle("Complaint");
        a.setHeaderText("Send successfull");
        a.setContentText("Complaint has been sent successfully");
        a.showAndWait();
       
        
        
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
    
    
    public static void receiveSalary(float amount, String month, String transactionMethod, float bonus) {
        
        Alert a = new Alert(Alert.AlertType.INFORMATION);
        File f = null;
        FileOutputStream fos = null;
        BufferedOutputStream bos = null;
        DataOutputStream dos = null;
        
        try 
        {
            f = new File("moneyInfo.bin");
            if(f.exists())
            {
                fos = new FileOutputStream(f,true);
            }
            else
            {
                fos = new FileOutputStream(f);
            }
            
            bos = new BufferedOutputStream(fos);
            dos = new DataOutputStream(fos);
            
           
            dos.writeUTF(month);
            dos.writeFloat(amount);
            dos.writeFloat(bonus);
            dos.writeUTF(transactionMethod);
            
            
            
            a.setTitle("Transfer Money");
            a.setHeaderText("Transfer successfull");
            a.setContentText("Money has been transferred successfully");
            a.showAndWait();
        } 
        catch (IOException e) 
        {
            a.setTitle("Transfer Money");
            a.setHeaderText("Transfer failed");
            a.setContentText("Unable to transfer money");
            a.showAndWait(); 
        } 
        finally 
        {
            try 
            {
                if(dos != null) 
                {
                    dos.close();
                }
              
            } 
            catch (IOException ex) 
            {
                System.out.println(ex);
            }
        }
    }

    
    
    public static void getNotifiedAboutWorks(TableView<OngoingWork> ongoingWorksTableView) throws IOException {
        File f =  null;
        
        FileWriter  fw = null;
        
        //unchecked exception
        
        
        try
        {
            f = new File("empWorkStatus.txt");
        
        if(f.exists())
        {
            fw = new FileWriter(f,true); //APPEND MODE
        }
        else
        {
            fw = new FileWriter(f); //file ta creating
        }
        
        //file created
        
        String str = ongoingWorksTableView.getSelectionModel().getSelectedItem().toString() + "," + "(Done)" + "\n";
        
       
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
