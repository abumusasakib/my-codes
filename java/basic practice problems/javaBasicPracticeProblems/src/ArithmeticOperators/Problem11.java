package ArithmeticOperators;

import java.util.Scanner;

public class Problem11 
{
    public static void main(String[] args) 
    {
        Scanner scan = new Scanner(System.in);
        
        double inMeter, inCm, inInch, inFeet;
        double eachM = 100, eachInch = 2.54, eachFeet = 12;
        
        System.out.println("Enter length in meter: ");
        inMeter = scan.nextDouble();
        
        inCm = inMeter * eachM;
        inInch = inCm / eachInch;
        inFeet = inInch / eachFeet;
        
        System.out.println("Converted to feet: "+inFeet+" feet");
    }
}
