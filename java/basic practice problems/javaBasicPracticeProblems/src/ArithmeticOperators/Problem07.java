package ArithmeticOperators;

public class Problem07 
{
    public static void main(String[] args) 
    {
        int year, hours, minutes, seconds;
        int eachDay = 24, eachHour = 60, eachMinute = 60;
        
        year = 365;
        hours = year * eachDay;
        minutes = hours * eachHour;
        seconds = minutes * eachMinute;
        
        System.out.println("In a year, ");
        System.out.println("Number of seconds: "+seconds+" seconds");
        System.out.println("Number of minutes: "+minutes+" minutes");
        System.out.println("Number of hours: "+hours+" hours");
        
    }
}
