package LoopLevel2;

public class Problem56
{
    public static void main(String[] args)
    {
        double sum = 0, term = 0;
        
        for(int i = 0; term <= 1024; i++)
        {
            term = Math.pow(2, i);
            sum = sum + term;
        }
        
        System.out.println("The sum is: "+sum);
    }       
}
