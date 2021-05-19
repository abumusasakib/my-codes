package ArithmeticOperators;

import java.util.Scanner;

public class Problem20
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        int n;
        System.out.print("Enter a 6-digit number: ");
        n = scan.nextInt();
        
        int revNum = 0, lastDigit;
        if(n >= 100000 && n < 999999)
        {
            for(int i = 1; i <= 6; i++)
            {
                lastDigit = n % 10;
                revNum = revNum * 10 + lastDigit;
                n = n / 10;
            }
            
            System.out.println("The reversed number is: "+revNum);
        }
        else
        {
            System.out.println("Not a 6-digit number");
        }
    }
}
