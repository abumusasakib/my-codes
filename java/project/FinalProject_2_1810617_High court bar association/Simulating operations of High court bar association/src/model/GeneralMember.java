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
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.scene.control.Alert;
import javafx.scene.control.TableColumn;
import javafx.scene.control.TableView;
import javafx.scene.control.TextField;
import javafx.scene.control.cell.PropertyValueFactory;

/**
 *
 * @author sakib
 */
public class GeneralMember extends User{
    private String complaintToken, gmMessage, meetingDate, meetingType, meetingTime, meetingLocation, meetingLink, meetingSetBy;

    public void getFollowUp(String token) {
        
        Alert a = new Alert(Alert.AlertType.INFORMATION);
        
        complaintToken = token;
        a.setTitle("Status");
        a.setHeaderText("Complain");
        a.setContentText("Complain " + complaintToken +  " is going on");
        a.showAndWait();
  
    }

    public void participateMeeting(TextField meetingDateTextField, TextField meetingTypeTextField, TextField meetingTimeTextField, TextField meetingLocationTextField, TextField meetingLinkTextField, TextField setByTextField) {
        File f = null;
        Scanner sc  = null;
        
        String str; String[] tokens = null;
        
        try
        {
            f = new File("execComGmHrMeetingInfo.txt");
            
            sc = new Scanner(f);
            
            if(f.exists())
            {
                
                while(sc.hasNextLine())
                {
                   str = sc.nextLine();
                  
                    
                  tokens  = str.split(",");
                  
                 
                    
                    
                }
                meetingDate = tokens[0];
                meetingType = tokens[1];
                meetingTime = tokens[2];
                meetingLocation = tokens[3];
                meetingLink = tokens[4];
                meetingSetBy = tokens[5];
                
                 meetingDateTextField.setText(meetingDate);
                 meetingTypeTextField.setText(meetingType);
                 meetingTimeTextField.setText(meetingTime);
                 meetingLocationTextField.setText(meetingLocation);
                 meetingLinkTextField.setText(meetingLink);
                 setByTextField.setText(meetingSetBy);
                 
                
                
                
                
            }
            
            
             
            
            
            
        }
        catch(Exception e)
        {
            System.out.println("Exception  : "+e);
        }
        finally{
            sc.close();
        }
        
        
    }

    public void provideFunds(TableView<Fund> fundsTableView) throws IOException {
        Alert a = new Alert(Alert.AlertType.INFORMATION);
        
        File f =  null;
        
        FileWriter  fw = null;
        
        //unchecked exception
        
        try
        {
            f = new File("gmMoneySent.txt");
        
        if(f.exists())
        {
            fw = new FileWriter(f,true); //APPEND MODE
        }
        else
        {
            fw = new FileWriter(f); //file creating
        }
        
        //file created
        
        String str = fundsTableView.getSelectionModel().getSelectedItem().toString() + "," + "Money sent" + "\n";
        fw.write(str); 

        a.setTitle("Money");
        a.setHeaderText("Sent successfull");
        a.setContentText("Money has been sent successfully");
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

     

    
    
  private ObservableList<Member> getMember() {
        ObservableList<Member> memberList = FXCollections.observableArrayList();

        File f = null;

        Scanner sc = null;
        String str;
        String[] tokens;
        try {
            f = new File("empGmInfo.txt");
            sc = new Scanner(f);
            if (f.exists()) {

                while (sc.hasNextLine()) {
                    str = sc.nextLine();
                    tokens = str.split(",");

                    memberList.add(new Member(tokens[0], tokens[1]));
                }
            }
        } catch (IOException ex) {
            System.out.println(ex);
        } finally {
            sc.close();

        }

        return memberList;

        
    }

    public void accessInfo(TableColumn<Member, String> memberidTableColumn, TableColumn<Member, String> membernameTableColumn, TableView<Member> memberTableColumn) {
        //initialize table

        //set up the columns in the table
        memberidTableColumn.setCellValueFactory(new PropertyValueFactory<Member, String>("id"));
        membernameTableColumn.setCellValueFactory(new PropertyValueFactory<Member, String>("name"));

        //load  data from text file
        memberTableColumn.setItems(getMember());
    }
    

    public void sendMessage(TableView<Member> memberTableView, String message) throws IOException {
        gmMessage = message;
        String str="";
        Alert a = new Alert(Alert.AlertType.INFORMATION);
        File f =  null;
        
        FileWriter  fw = null;
        
        //unchecked exception
        
        
        try
        {
            f = new File("gmMessage.txt");
        
        if(f.exists())
        {
            fw = new FileWriter(f,true); //APPEND MODE
        }
        else
        {
            fw = new FileWriter(f); //file creating
        }
        
        //file created
        
        
        str = memberTableView.getSelectionModel().getSelectedItem().toString()+","+gmMessage+"\n";
        
       
        fw.write(str);
        
        
        a.setTitle("Message");
        a.setHeaderText("Send successfull");
        a.setContentText("Message has been sent successfully");
        a.showAndWait();
        
       
        }
        catch(IOException e)
        {
            System.out.println("Exception : "+e);
            a.setTitle("Message");
            a.setHeaderText("Send unsuccessfull");
            a.setContentText("Message has not been sent");
            a.showAndWait();
            
        }
        finally
        {
            fw.close();
        }
    }

    
    
    

    
    
}
