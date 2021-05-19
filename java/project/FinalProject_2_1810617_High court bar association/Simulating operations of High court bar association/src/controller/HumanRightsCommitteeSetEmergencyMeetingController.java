/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package controller;

import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.fxml.Initializable;
import javafx.scene.Node;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.RadioButton;
import javafx.scene.control.TextField;
import javafx.scene.control.ToggleGroup;
import javafx.stage.Stage;

/**
 * FXML Controller class
 *
 * @author sakib
 */
public class HumanRightsCommitteeSetEmergencyMeetingController implements Initializable {

    @FXML
    private TextField meetingDateTextField;
    @FXML
    private TextField meetingTimeTextField;
    @FXML
    private RadioButton onlineMeetingRadioButton;
    @FXML
    private RadioButton offlineMeetingRadioButton;
    @FXML
    private TextField meetingLinkTextField;
    @FXML
    private TextField meetingLocationTextField;
    @FXML
    private ToggleGroup tg;

    /**
     * Initializes the controller class.
     */
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        ToggleGroup tg = new ToggleGroup();
        onlineMeetingRadioButton.setToggleGroup(tg);
        offlineMeetingRadioButton.setToggleGroup(tg);
    }    

    @FXML
    private void saveButtonOnAction(ActionEvent event) throws IOException {
        File f =  null;
        
        FileWriter  fw = null;
        
        String str = null;
        
        //unchecked exception
        
        
        try
        {
            f = new File("MeetingInfo.txt");
        
        if(f.exists())
        {
            fw = new FileWriter(f,true); //APPEND MODE
        }
        else
        {
            fw = new FileWriter(f); //file creating
        }
        
        //file created
        
        if(onlineMeetingRadioButton.isSelected())
        {
            str = meetingDateTextField.getText()+","+"Online Meeting"+","+meetingTimeTextField.getText()+","
                       +meetingLocationTextField.getText()+","+meetingLinkTextField.getText()+","+"Human Rights and Legal Aid Committee"+"\n";
        }
        else
        {
            str = meetingDateTextField.getText()+","+"Offline Meeting"+","+meetingTimeTextField.getText()+","
                       +meetingLocationTextField.getText()+","+meetingLinkTextField.getText()+","+"Human Rights and Legal Aid Committee"+"\n";
        }
        
        
       
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

    @FXML
    private void backButtonOnAction(ActionEvent event) throws IOException 
    {
          Parent scene2Parent = FXMLLoader.load(getClass().getResource("humanRightsCommitteeHomeScene.fxml"));
         Scene scene2 = new Scene(scene2Parent);
         Stage window = (Stage)((Node)event.getSource()).getScene().getWindow();
        
         window.setScene(scene2);
         window.show();
    }
    
}
