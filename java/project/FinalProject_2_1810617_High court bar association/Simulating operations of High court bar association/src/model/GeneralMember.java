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
import javafx.scene.control.TextArea;
import javafx.scene.control.TextField;
import javafx.scene.control.cell.PropertyValueFactory;

/**
 *
 * @author sakib
 */
public class GeneralMember extends User{
    private String name, address, phoneNo, message;
    private float fund;

    public static void getFollowUp(TextField tokenTextBox) {
        File f = null;

        Scanner sc = null;
        String str;
        String[] tokens;
        try {
            f = new File("employee.txt");
            sc = new Scanner(f);
            if (f.exists()) {

                while (sc.hasNextLine()) {
                    str = sc.nextLine();
                    tokens = str.split(",");

                   if(tokens[2] == tokenTextBox.getText())
                   {
                        Alert a = new Alert(Alert.AlertType.INFORMATION);
                        
                        a.setTitle("Status");
                        a.setHeaderText("Complain found");
                        a.setContentText("Complain has been found successfully");
                        a.showAndWait();
                   }
                }
            }
        } catch (IOException ex) {
            System.out.println(ex);
        } finally {
            sc.close();

        }
    }

    public static void participateMeeting(TextField meetingDateTextField, TextField meetingTypeTextField, TextField meetingTimeTextField, TextField meetingLocationTextField, TextField meetingLinkTextField, TextField setByTextField) {
        File f = null;
        Scanner sc  = null;
        
        String str; String[] tokens = null;
        
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
                  
                 
                    
                    
                }
                
                 meetingDateTextField.setText(tokens[0]);
                 meetingTypeTextField.setText(tokens[1]);
                 meetingTimeTextField.setText(tokens[2]);
                 meetingLocationTextField.setText(tokens[3]);
                 meetingLinkTextField.setText(tokens[4]);
                 setByTextField.setText(tokens[5]);
                 
                
                
                
                
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

    public static void provideFunds(TableView<Fund> fundsTableView) throws IOException {
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

     

    
    
  private static ObservableList<Member> getMember() {
        ObservableList<Member> memberList = FXCollections.observableArrayList();

        File f = null;

        Scanner sc = null;
        String str;
        String[] tokens;
        try {
            f = new File("gmInfo.txt");
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

    public static void accessInfo(TableColumn<Member, String> memberidTableColumn, TableColumn<Member, String> membernameTableColumn, TableView<Member> memberTableColumn) {
        //initialize table

        //set up the columns in the table
        memberidTableColumn.setCellValueFactory(new PropertyValueFactory<Member, String>("id"));
        membernameTableColumn.setCellValueFactory(new PropertyValueFactory<Member, String>("name"));

        //load  data from text file
        memberTableColumn.setItems(getMember());
    }
    

    public static void sendMessage(String str, TableView<Member> memberTableView, TextArea messageTextArea) throws IOException {
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
        
        str = memberTableView.getSelectionModel().getSelectedItem().toString()+","+messageTextArea.getText()+"\n";
        
       
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
