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
import model.Expenditure;

/**
 * FXML Controller class
 *
 * @author sakib
 */
public class FinanceCommitteeExpenditureController implements Initializable {

    @FXML
    private TableView<Expenditure> expenditureTableView;
    @FXML
    private TableColumn<Expenditure, String> sectorTableColumn;
    @FXML
    private TableColumn<Expenditure, String> expenditureTableColumn;
    @FXML
    private TableColumn<Expenditure, String> monthTableColumn;
    @FXML
    private TableColumn<Expenditure, String> yearTableColumn;
    @FXML
    private TextField yearTextField;
    @FXML
    private TextField monthTextField;
    @FXML
    private TextField expenditureTextField;
    @FXML
    private TextField sectorTextField;

    private String sector, expenditure, month, year;
    /**
     * Initializes the controller class.
     */
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        //initialize table

        //set up the columns in the table
        sectorTableColumn.setCellValueFactory(new PropertyValueFactory<Expenditure, String>("sector"));
        expenditureTableColumn.setCellValueFactory(new PropertyValueFactory<Expenditure, String>("expenditure"));
        monthTableColumn.setCellValueFactory(new PropertyValueFactory<Expenditure, String>("month"));
        yearTableColumn.setCellValueFactory(new PropertyValueFactory<Expenditure, String>("year"));

        //load  data from text file
        expenditureTableView.setItems(getExpenditure());
    }    

    private void viewBarChartOnAction(ActionEvent event) throws IOException 
    {
         Parent scene2Parent = FXMLLoader.load(getClass().getResource("executiveCommitteeHomeScene.fxml"));
         Scene scene2 = new Scene(scene2Parent);
         Stage window = (Stage)((Node)event.getSource()).getScene().getWindow();
        
         window.setScene(scene2);
         window.show();
    }

    private ObservableList<Expenditure> getExpenditure() {
        Alert a = new Alert(Alert.AlertType.INFORMATION);
        ObservableList<Expenditure> expenditureList = FXCollections.observableArrayList();
        expenditureList.add(new Expenditure(sector, expenditure, month, year));

        return expenditureList;
    }

    @FXML
    private void backButtonOnAction(ActionEvent event) throws IOException 
    {
         Parent scene2Parent = FXMLLoader.load(getClass().getResource("executiveCommitteeHomeScene.fxml"));
         Scene scene2 = new Scene(scene2Parent);
         Stage window = (Stage)((Node)event.getSource()).getScene().getWindow();
        
         window.setScene(scene2);
         window.show();
    }

    @FXML
    private void viewLineChartButtonOnAction(ActionEvent event) throws IOException 
    {
         Parent scene2Parent = FXMLLoader.load(getClass().getResource("financeCommitteeExpenditureLineChart.fxml"));
         Scene scene2 = new Scene(scene2Parent);
         Stage window = (Stage)((Node)event.getSource()).getScene().getWindow();
        
         window.setScene(scene2);
         window.show();
    }

    @FXML
    private void saveButtonOnAction(ActionEvent event) throws IOException {
        sector = sectorTextField.getText();
        expenditure = expenditureTextField.getText();
        month = monthTextField.getText();
        year = yearTextField.getText();
        
        File f =  null;
        
        FileWriter  fw = null;
        
        //unchecked exception
        
        
        try
        {
            f = new File("expenditure.txt");
        
        if(f.exists())
        {
            fw = new FileWriter(f,true); //APPEND MODE
        }
        else
        {
            fw = new FileWriter(f); //file creating
        }
        
        //file created
        
        String str = sector+","+expenditure+","+month+","+year+"\n";
        
       
        fw.write(str);
        
       
        
        }
        catch(Exception e)
        {
            System.out.println("Exception : "+e);
            
        }
        finally
        {
            fw.close();
        }
        
    }
    
}
