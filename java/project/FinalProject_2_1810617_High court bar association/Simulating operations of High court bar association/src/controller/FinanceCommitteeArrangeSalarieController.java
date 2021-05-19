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
import javafx.collections.FXCollections;
import javafx.collections.ObservableList;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.fxml.Initializable;
import javafx.scene.Node;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.Alert;
import javafx.scene.control.TableColumn;
import javafx.scene.control.TableView;
import javafx.scene.control.TextField;
import javafx.scene.control.cell.PropertyValueFactory;
import javafx.stage.Stage;
import model.FinanceCommittee;
import model.Salary;

/**
 * FXML Controller class
 *
 * @author sakib
 */
public class FinanceCommitteeArrangeSalarieController implements Initializable {

    @FXML
    private TableColumn<Salary, String> salaryTableColumn;
    @FXML
    private TableColumn<Salary, String> employeeNameTableColumn;
    @FXML
    private TableColumn<Salary, String> bonusAmountTableColumn;
    @FXML
    private TableView<Salary> salaryTableView;
    @FXML
    private TextField salaryTextField;
    @FXML
    private TextField bonusTextField;
    @FXML
    private TextField nameTextField;
    
    private String name, salary, bonus;

    /**
     * Initializes the controller class.
     */
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        //initialize table

        //set up the columns in the table
        employeeNameTableColumn.setCellValueFactory(new PropertyValueFactory<Salary, String>("name"));
        salaryTableColumn.setCellValueFactory(new PropertyValueFactory<Salary, String>("salary"));
        bonusAmountTableColumn.setCellValueFactory(new PropertyValueFactory<Salary, String>("bonusAmount"));

        //load  data from text file
        salaryTableView.setItems(getSalary());
    }    

    @FXML
    private void backButtonOnAction(ActionEvent event) throws IOException 
    {
         Parent scene2Parent = FXMLLoader.load(getClass().getResource("financeCommitteeHomeScene.fxml"));
         Scene scene2 = new Scene(scene2Parent);
         Stage window = (Stage)((Node)event.getSource()).getScene().getWindow();
        
         window.setScene(scene2);
         window.show();
    }
    @FXML
    private void saveButtonOnAction(ActionEvent event) throws IOException {
        name = nameTextField.getText();
        salary = salaryTextField.getText();
        bonus = bonusTextField.getText();
        
        FinanceCommittee.arrangeSalary(name, salary, bonus);
     
        
    }

    private ObservableList<Salary> getSalary() {
        Alert a = new Alert(Alert.AlertType.INFORMATION);
        ObservableList<Salary> salaryList = FXCollections.observableArrayList();

        salaryList.add(new Salary(name, salary, bonus));

        return salaryList;
    }
    
}