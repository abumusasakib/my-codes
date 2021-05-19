package LoopLevel3;

public class Problem75 
{
    public static void main(String[] args)
    {
        double sum = 0;
        int power = 0;
        
        for(int i = 1; i <= 10; i++)
        {
            sum = sum + Math.pow(i, power);
            power--;
        }
        
        System.out.println("The sum is: "+sum);
    }    
    
}
