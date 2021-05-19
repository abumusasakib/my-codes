package LoopLevel2;

public class Problem57
{
    public static void main(String[] args)
    {
        int sum = 0, term = 1, commonDiff = 0;
        
        while(term < 56)
        {
            term = term + commonDiff;
            sum = sum + term;
            commonDiff++;
        }
        
        System.out.println("The sum is: "+sum);
    }          
}
