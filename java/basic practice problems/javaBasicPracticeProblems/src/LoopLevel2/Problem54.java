package LoopLevel2;

public class Problem54
{
    public static void main(String[] args)
    {
        int sum = 0;
        
        for(int i = 5; i <= 100; i+=5)
        {
            sum = sum + i;
        }
        
        System.out.println("The sum is: "+sum);
    }    
}
