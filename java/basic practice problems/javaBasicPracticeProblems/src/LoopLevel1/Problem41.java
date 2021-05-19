package LoopLevel1;

public class Problem41
{
    public static void main(String[] args) 
    {
        for(int i = 42; i >= 17; i--)
        {
            System.out.print(i);
            
            if(i != 17)
            {
                System.out.print(",");
            }
            else
            {
                System.out.print("");
            }
        }
        
        System.out.println("");
    }    
}
