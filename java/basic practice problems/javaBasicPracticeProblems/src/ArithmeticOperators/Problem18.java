package ArithmeticOperators;

import java.util.Scanner;

public class Problem18
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        int hours;
        System.out.print("Enter hours: ");
        hours = scan.nextInt();
        
        
        int weeks, days;
        int remFromWeeks, remFromDays;
        int eachWeek = 7, eachDay = 24;
        
        days = hours / eachDay;
        remFromDays = hours % eachDay;
        
        weeks = days / eachWeek;
        remFromWeeks = days % eachWeek;
        
        System.out.println("From weeks, days and hours form: " +weeks+" weeks, "+remFromWeeks+" days and "+remFromDays+" hours");
    }
}
