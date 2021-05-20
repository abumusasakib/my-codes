/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package controller;

import java.io.File;
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
import javafx.scene.control.TableColumn;
import javafx.scene.control.TableView;
import javafx.scene.control.TextArea;
import javafx.scene.control.cell.PropertyValueFactory;
import javafx.stage.Stage;
import model.Employee;
import model.Member;

/**
 * FXML Controller class
 *
 * @author sakib
 */
public class EmployeeComplainScene_g4Controller implements Initializable {

    @FXML
    private TableView<Member> memberTableView;
    @FXML
    private TableColumn<Member, String> memberidTableColumn;
    @FXML
    private TableColumn<Member, String> membernameTableColumn;
    @FXML
    private TextArea complainTextArea;

    /**
     * Initializes the controller class.
     */
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        //initialize table

        //set up the columns in the table
        memberidTableColumn.setCellValueFactory(new PropertyValueFactory<Member, String>("id"));
        membernameTableColumn.setCellValueFactory(new PropertyValueFactory<Member, String>("name"));

        //load  data from text file
        memberTableView.setItems(getEmpComplaints());
    }    

    @FXML
    private void sendComplaintButtonOnAction(ActionEvent event) throws IOException 
    {
        Employee e = new Employee();
        e.fileComplaint(memberTableView, complainTextArea);
        
    }

    @FXML
    private void backButtonOnAction(ActionEvent event) throws IOException 
    {
        Parent scene2Parent = FXMLLoader.load(getClass().getResource("employeeHomeScene.fxml"));
         Scene scene2 = new Scene(scene2Parent);
         Stage window = (Stage)((Node)event.getSource()).getScene().getWindow();
        
         window.setScene(scene2);
         window.show();
    }

    private ObservableList<Member> getEmpComplaints() {
        ObservableList<Member> empComplaintList = FXCollections.observableArrayList();

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

                    empComplaintList.add(new Member(tokens[0], tokens[1]));
                }
            }
        } catch (IOException ex) {
            System.out.println(ex);
        } finally {
            sc.close();

        }

        return empComplaintList;
    }
    }
