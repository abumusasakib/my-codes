package LoopLevel3;

public class Problem73
{
    public static void main(String[] args)
    {
        int sum = 0;
        
        for(int i = 1; i <= 100; i++)
        {
            if(i % 2 != 0)
            {
                sum = sum + (i*i);
            }
        }
        
        System.out.println("The sum is: "+sum);
    }
    
}
