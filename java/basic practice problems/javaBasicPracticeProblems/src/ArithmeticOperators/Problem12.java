package ArithmeticOperators;

import java.util.Scanner;

public class Problem12 
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        
        double C, F, K;
        System.out.print("Enter temperature in degree Fahrenheit: ");
        F = scan.nextDouble();
        
        C = ((double)5 / 9) * (F-32);
        K = C + 273.15;
        
        System.out.println("");
        System.out.println("Temperature in Celsius: "+C+" degree Celsius");
        System.out.println("Temperature in Kelvin: "+K+" degree Kelvin");
        
    }
}
