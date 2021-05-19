package problems;

import java.util.Scanner;

public class Problem70
{
    public static void main(String[] args)
    {
        Scanner scan = new Scanner(System.in);
        
        int num1, num2, findNum, start, end;
        System.out.print("Enter 1st number: ");
        num1 = scan.nextInt();
        System.out.print("Enter 2nd number: ");
        num2 = scan.nextInt();
        
        if(num1 <= num2)
        {
            start = num1;
            end = num2;
        }
        else
        {
            start = num2;
            end = num1;
        }
        
        boolean isPrime = true;
        
        int i;
        for(i = start; i <= end; i++)
        {
            for(int j = 2; j <= i;j++)
            {
                if(i % j == 0)
                {
                    isPrime = false;
                }
            }
        }
        
        if(isPrime == true)
        {
            System.out.print(i+" ");
        }
        
        System.out.println("");
    }
    
}
