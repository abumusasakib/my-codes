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
public class Expenditure {
    private String sector, expenditure, month, year;

    public Expenditure(String sector, String expenditure, String month, String year) {
        this.sector = sector;
        this.expenditure = expenditure;
        this.month = month;
        this.year = year;
    }

    public String getSector() {
        return sector;
    }

    public void setSector(String sector) {
        this.sector = sector;
    }

    public String getExpenditure() {
        return expenditure;
    }

    public void setExpenditure(String expenditure) {
        this.expenditure = expenditure;
    }

    public String getMonth() {
        return month;
    }

    public void setMonth(String month) {
        this.month = month;
    }

    public String getYear() {
        return year;
    }

    public void setYear(String year) {
        this.year = year;
    }

    @Override
    public String toString() {
        return "Expenditure{" + "sector=" + sector + ", expenditure=" + expenditure + ", month=" + month + ", year=" + year + '}';
    }
    
    
}
