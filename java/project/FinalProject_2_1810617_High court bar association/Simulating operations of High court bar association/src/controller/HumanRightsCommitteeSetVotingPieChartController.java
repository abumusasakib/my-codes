/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package controller;

import java.io.File;
import java.net.URL;
import java.util.ResourceBundle;
import java.util.Scanner;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.chart.BarChart;
import javafx.scene.chart.CategoryAxis;
import javafx.scene.chart.NumberAxis;
import javafx.scene.chart.XYChart;

/**
 * FXML Controller class
 *
 * @author abhik
 */
public class HumanRightsCommitteeSetVotingPieChartController implements Initializable {

    @FXML
    private BarChart<String, Number> barChart;
    @FXML
    private NumberAxis xAxis;
    @FXML
    private CategoryAxis yAxis;

    /**
     * Initializes the controller class.
     */
    @Override
    public void initialize(URL url, ResourceBundle rb) 
    {
        // TODO
        
        XYChart.Series<String,Number> series = new XYChart.Series<String,Number>();
        
      
         
         File f = null;
        Scanner sc=null; String str; String[] tokens;
        try {
            f = new File("setVoting.txt");
            sc = new Scanner(f);
            if(f.exists()){
               
                while(sc.hasNextLine()){
                    str=sc.nextLine();
                    tokens = str.split(",");
                   series.getData().add(new XYChart.Data<String,Number>(tokens[0],Integer.parseInt(tokens[1])));
                    
                    
                }
            }
           
        } 
        catch (Exception ex) {
            
        } 
        finally {
            sc.close();
        }        
        
        
        
        
        series.setName("Opinion");
        barChart.getData().add(series);
    }    
        
        
    
    
    }    
    


