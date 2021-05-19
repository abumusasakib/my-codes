package LoopLevel2;

public class Problem55
{
    public static void main(String[] args)
    {
        int sum = 0;
        
        for(int i = 1; i <= 100; i++)
        {
            if(i % 2 != 0)
            {
                sum = sum + i;
            }
            else
            {
                sum = sum - i;
            }
            
        }
        
        System.out.println("The sum is: "+sum);
    }    
}
