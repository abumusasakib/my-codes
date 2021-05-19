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
public class Salary 
{
    private String name, salary, bonusAmount;

    public Salary(String name, String salary, String bonusAmount) {
        this.name = name;
        this.salary = salary;
        this.bonusAmount = bonusAmount;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getSalary() {
        return salary;
    }

    public void setSalary(String salary) {
        this.salary = salary;
    }

    public String getBonusAmount() {
        return bonusAmount;
    }

    public void setBonusAmount(String bonusAmount) {
        this.bonusAmount = bonusAmount;
    }

    @Override
    public String toString() {
        return "Salary{" + "name=" + name + ", salary=" + salary + ", bonusAmount=" + bonusAmount + '}';
    }
    
    
    
}
