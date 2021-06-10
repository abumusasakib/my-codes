/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package controller;

import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.ComboBox;
import javafx.scene.control.PasswordField;
import javafx.scene.control.TextField;
import model.User;

/**
 * FXML Controller class
 *
 * @author sakib
 */
public class HomeSceneController implements Initializable {

    @FXML
    private PasswordField passwordTextField;
    @FXML
    private ComboBox userTypeComboBox;
    @FXML
    private TextField userNameTextField;

    /**
     * Initializes the controller class.
     */
    @Override
    public void initialize(URL url, ResourceBundle rb) 
    {
        userTypeComboBox.getItems().addAll("General Member", "Employee", "Executive Committee", "Finance Committee", "Human Rights and Legal Aid Committee");

        userTypeComboBox.setValue("Employee");
    }

    @FXML
    private void loginButtonOnAction(ActionEvent event) 
    {
        String username = userNameTextField.getText();
        String password = passwordTextField.getText();
        String usertype = userTypeComboBox.getValue().toString();
        
        User u = new User() {};
        u.login(username, password, usertype, event);
    }


}
