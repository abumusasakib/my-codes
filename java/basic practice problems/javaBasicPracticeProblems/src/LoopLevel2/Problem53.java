package LoopLevel2;

public class Problem53 
{
    public static void main(String[] args)
    {
        int sum = 0;
        
        for(int i = 1; i <= 99; i+=2)
        {
            sum = sum + i;
        }
        
        System.out.println("The sum is: "+sum);
    }    
}
