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
import model.GeneralMember;
import model.Member;

/**
 * FXML Controller class
 *
 * @author sakib
 */
public class GeneralMemberMessageScene_g1Controller implements Initializable {

    @FXML
    private TableView<Member> memberTableView;
    @FXML
    private TableColumn<Member, String> memberidColumn;
    @FXML
    private TableColumn<Member, String> membernameColumn;
    @FXML
    private TextArea messageTextArea;

    /**
     * Initializes the controller class.
     */
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        //initialize table

        //set up the columns in the table
        memberidColumn.setCellValueFactory(new PropertyValueFactory<Member, String>("id"));
        membernameColumn.setCellValueFactory(new PropertyValueFactory<Member, String>("name"));
        

        //load  data from text file
        memberTableView.setItems(getMessage());
    }    

    @FXML
    private void sendButtonOnAction(ActionEvent event) throws IOException {
        
        GeneralMember g = new GeneralMember();
        String message = messageTextArea.getText();
        g.sendMessage(memberTableView, message);
        
    }

    @FXML
    private void backButtonOnAction(ActionEvent event) throws IOException {
         Parent scene2Parent = FXMLLoader.load(getClass().getResource("generalMemberHomeScene.fxml"));
         Scene scene2 = new Scene(scene2Parent);
         Stage window = (Stage)((Node)event.getSource()).getScene().getWindow();
        
         window.setScene(scene2);
         window.show();
    }

    private ObservableList<Member> getMessage() {
        ObservableList<Member> messageList = FXCollections.observableArrayList();

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

                    messageList.add(new Member(tokens[0], tokens[1]));
                }
            }
        } catch (IOException ex) {
            System.out.println(ex);
        } finally {
            sc.close();

        }

        return messageList;
    }
    
}
