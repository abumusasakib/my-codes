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
import java.util.Scanner;
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
import javafx.scene.control.Button;
import javafx.scene.control.TableColumn;
import javafx.scene.control.TableView;
import javafx.scene.control.cell.PropertyValueFactory;
import javafx.stage.Stage;
import model.LeaveRequest;
import model.Record;

/**
 * FXML Controller class
 *
 * @author sakib
 */
public class FinanceCommitteeFinancialRecordViewChartController implements Initializable {

   
    @FXML
    private TableView<Record> tableView;
    @FXML
    private TableColumn<Record, String> dateColumn;
    @FXML
    private TableColumn<Record, String> descriptionColumn;
    @FXML
    private TableColumn<Record, String> expensesColumn;
 
    private ObservableList<Record> record;
    
    /**
     * Initializes the controller class.
     */
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        //initialize table

        //set up the columns in the table
        dateColumn.setCellValueFactory(new PropertyValueFactory<Record, String>("date"));
        descriptionColumn.setCellValueFactory(new PropertyValueFactory<Record, String>("description"));
        expensesColumn.setCellValueFactory(new PropertyValueFactory<Record, String>("expenses"));

        //load  data from text file
        ObservableList<Record> record = getRecord();
        tableView.setItems(record);
        
    }    

 
  

    @FXML
    private void viewChartsButtonOnAction(ActionEvent event) throws IOException 
    {
           Parent scene2Parent = FXMLLoader.load(getClass().getResource("FinanceCommitteeViewChartScene.fxml"));
        Scene scene2 = new Scene(scene2Parent);
        Stage window = (Stage)((Node)event.getSource()).getScene().getWindow();
        
        window.setScene(scene2);
        window.show();
        
    }

    @FXML
    private void backButtonOnAction(ActionEvent event) throws IOException {
        
         Parent scene2Parent = FXMLLoader.load(getClass().getResource("financeCommitteeFinancialRecord.fxml"));
         Scene scene2 = new Scene(scene2Parent);
         Stage window = (Stage)((Node)event.getSource()).getScene().getWindow();
        
         window.setScene(scene2);
         window.show();
         
         
    }

    private ObservableList<Record> getRecord() {
        Alert a = new Alert(Alert.AlertType.INFORMATION);
        ObservableList<Record> recordList = FXCollections.observableArrayList();

        File f = null;

        Scanner sc = null;
        String str;
        String[] tokens;
        try {
            f = new File("fcRecords.txt");
            sc = new Scanner(f);
            if (f.exists()) {

                while (sc.hasNextLine()) {
                    str = sc.nextLine();
                    tokens = str.split(",");

                    recordList.add(new Record(tokens[0], tokens[1], tokens[2]));
                }
            }
        } catch (IOException ex) {
            System.out.println(ex);
        } finally {
            sc.close();

        }

        return recordList;
    }

    
}
