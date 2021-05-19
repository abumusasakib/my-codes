/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package controller;

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
import javafx.scene.chart.BarChart;
import javafx.scene.chart.CategoryAxis;
import javafx.scene.chart.NumberAxis;
import javafx.scene.chart.XYChart;
import javafx.scene.control.TableView;
import javafx.stage.Stage;
import model.Record;

/**
 * FXML Controller class
 *
 * @author abhik
 */
public class FinanceCommitteeViewChartSceneController implements Initializable {

    @FXML private BarChart<String, Number> barChart;
    
    @FXML
    private NumberAxis yAxis;
    @FXML
    private CategoryAxis xAxis;
    
    private TableView<Record> tableView;

    /**
     * Initializes the controller class.
     */
    @Override
    public void initialize(URL url, ResourceBundle rb) 
    {
        // TODO
        XYChart.Series<String,Number> series = new XYChart.Series<String,Number>();
       
        
        for(Record record : tableView.getItems())
        {
             series.getData().add(new XYChart.Data<String,Number>(record.getDate(),Integer.parseInt(record.getExpenses())));
        }
        
        System.out.println("Hello World!");
        
        series.setName("Date Wise Expenses");
        barChart.getData().add(series);
        
        
        
    }    

    @FXML
    private void backBtnOnClick(ActionEvent event) throws IOException 
    {
         Parent scene2Parent = FXMLLoader.load(getClass().getResource("financeCommitteeFinancialRecordUpdateRecordAndViewChart.fxml"));
        Scene scene2 = new Scene(scene2Parent);
        Stage window = (Stage)((Node)event.getSource()).getScene().getWindow();
        
        window.setScene(scene2);
        window.show();
    }

    void initData(TableView<Record> tableView) 
    {
        this.tableView = tableView;
    }
    
}
