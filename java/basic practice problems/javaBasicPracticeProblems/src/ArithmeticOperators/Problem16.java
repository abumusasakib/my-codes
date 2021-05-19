package ArithmeticOperators;

import java.util.Scanner;

public class Problem16 
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        
        int days;        
        System.out.print("Enter days: ");
        days = scan.nextInt();
        
        int years, months;
        int remFromYears, remFromMonths;
        int eachYear = 365, eachMonth = 30;
        
        years = days / eachYear;
        remFromYears = days % eachYear;
        
        months = remFromYears / eachMonth;
        remFromMonths = remFromYears % eachMonth;
        
        System.out.println("");
        System.out.println("To years months days form: "+years+" years "+months+" months "+remFromMonths+" days");
    }
}
