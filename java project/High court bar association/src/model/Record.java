/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package model;

/**
 *
 * @author sakib
 */
public class Record {
    private String date, description, expenses;

    public Record(String date, String description, String expenses) {
        this.date = date;
        this.description = description;
        this.expenses = expenses;
    }

    public String getDate() {
        return date;
    }

    public void setDate(String date) {
        this.date = date;
    }

    public String getDescription() {
        return description;
    }

    public void setDescription(String description) {
        this.description = description;
    }

    public String getExpenses() {
        return expenses;
    }

    public void setExpenses(String expenses) {
        this.expenses = expenses;
    }

    @Override
    public String toString() {
        return date + "," + description + "," + expenses + "\n";
    }
    
    
}
