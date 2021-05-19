/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package model;

import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;
import javafx.scene.control.Alert;
import javafx.scene.control.TableView;
import javafx.scene.control.TextArea;
import javafx.scene.control.TextField;

/**
 *
 * @author sakib
 */
public class ExecutiveCommittee {

    public static void setUpMeeting(String generatedString) {
        Alert a = new Alert(Alert.AlertType.INFORMATION);
        File f = null;
        FileWriter fw = null;
        try 
        {
            f = new File("MeetingInfo.txt");
            if(f.exists())
            {
                fw = new FileWriter(f,true);
            }
            else 
            {
                fw = new FileWriter(f);
            }
           
            fw.write(generatedString);
            
            a.setTitle("Meeting");
            a.setHeaderText("Creation successfull");
            a.setContentText("Meeting has been set successfully");
            a.showAndWait();
  
        } 
        catch (IOException e) 
        {
            a.setTitle("Meeting");
            a.setHeaderText("Creation failure");
            a.setContentText("There has been an error");
            a.showAndWait();
        } 
        finally 
        {
            try 
            {
                if(fw != null)
                {
                    fw.close();
                }
            } 
            catch (IOException e) 
            {
                System.out.println(e);
            }
        }
    }

    public static void participateInMeeting(TextField meetingDateTextField, TextField meetingTypeTextField, TextField meetingTimeTextField, TextField meetingLocationTextField, TextField meetingLinkTextField) {
        Alert a = new Alert(Alert.AlertType.INFORMATION);
        File f = null;
        Scanner sc  = null;
        
        String str; String[] tokens;
        
        try
        {
            f = new File("MeetingInfo.txt");
            
            sc = new Scanner(f);
            
            if(f.exists())
            {
                
                while(sc.hasNextLine())
                {
                  str = sc.nextLine();
                    
                  tokens  = str.split(",");
                  
                  meetingDateTextField.setText(tokens[0]);
                  meetingTypeTextField.setText(tokens[1]);
                  meetingTimeTextField.setText(tokens[2]);
                  meetingLocationTextField.setText(tokens[3]);
                  meetingLinkTextField.setText(tokens[4]);
                }
 
            }
            else
            {
                a.setTitle("Meeting");
                a.setHeaderText("Join failure");
                a.setContentText("File does not exist");
                a.showAndWait();
            }
            
             
            
            
            
        }
        catch(FileNotFoundException e)
        {
            System.out.println("Exception  : "+e);
        } 
        finally{
            sc.close();
        }
        
        
    }
    private String name, address, phoneNo, message; 
    public static void accessAndSendFiledComplaints(TableView<Complaint> complaintsTableView, TextField complaintPriorityTextField, TextArea commentsTextArea) throws IOException {
       Alert a = new Alert(Alert.AlertType.INFORMATION);
        
        File f =  null;
        
        FileWriter  fw = null;
        
        //unchecked exception
        
        try
        {
            f = new File("executiveCommiteeMemberSentComplaint.txt");
        
        if(f.exists())
        {
            fw = new FileWriter(f,true); //APPEND MODE
        }
        else
        {
            fw = new FileWriter(f); //file creating
        }
        
        //file created
        
        String str = complaintsTableView.getSelectionModel().getSelectedItem().toString() + "," + complaintPriorityTextField.getText() + ","+ commentsTextArea.getText() + "\n";
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
    
}  
