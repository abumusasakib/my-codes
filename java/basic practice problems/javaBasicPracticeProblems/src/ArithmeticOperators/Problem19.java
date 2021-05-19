package ArithmeticOperators;

import java.util.Scanner;

public class Problem19 
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        int currentYear, age, birthYear;
        
        System.out.print("Enter current year: ");
        currentYear = scan.nextInt();
        System.out.print("Enter age: ");
        age = scan.nextInt();
        
        birthYear = currentYear - age;
        
        System.out.println("");
        System.out.println("Birth year: "+birthYear);        
    }
}
