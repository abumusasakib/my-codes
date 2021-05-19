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
import javafx.scene.control.Alert;
import javafx.scene.control.TextField;
import javafx.stage.Stage;

/**
 * FXML Controller class
 *
 * @author sakib
 */
public class GeneralMemberInfoSingleViewScene2_g2Controller implements Initializable {

    @FXML
    private TextField memberidTextField;
    @FXML
    private TextField memberNameTextField;
    @FXML
    private TextField memberPhoneNumberTextField;
    @FXML
    private TextField memberEmailAddressTextField;

    private String id, name, email, phone;
    /**
     * Initializes the controller class.
     */
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        // TODO
    }    

    @FXML
    private void saveInformationButtonOnAction(ActionEvent event) {
        Alert a = new Alert(Alert.AlertType.INFORMATION);
        String str = "";
        str = str + id +","+ name + "," + email + "," + phone + "\n";
        
        File f = null;
        FileWriter fw = null;
        try {
            f = new File("singleInfomemberInfo.txt");
            if(f.exists()){
                fw = new FileWriter(f,true);
            }
            else{
                fw = new FileWriter(f);
            }
           
            fw.write(str);
            a.setTitle("Approval");
            a.setHeaderText("Accepted");
            a.setContentText("Approval has been accepted");
            a.showAndWait();
  
        } catch (IOException ex) {
            System.out.println(ex);
        } finally {
            try {
                if(fw != null){
                    fw.close();
                }
            } catch (IOException ex) {
                System.out.println(ex);
            }
        }
    }
    
    @FXML
    private void backButtonOnAction(ActionEvent event) throws IOException {
        Parent scene2Parent = FXMLLoader.load(getClass().getResource("generalMemberInfoScene1_g2.fxml"));
         Scene scene2 = new Scene(scene2Parent);
         Stage window = (Stage)((Node)event.getSource()).getScene().getWindow();
        
         window.setScene(scene2);
         window.show();
    }

    void initData(String id, String name, String email, String phone) {
        this.id = id;
        this.name = name;
        this.email = email;
        this.phone = phone;
        memberidTextField.setText(id);
        memberNameTextField.setText(name);
        memberPhoneNumberTextField.setText(phone);
        memberEmailAddressTextField.setText(email);
        
    }
}
