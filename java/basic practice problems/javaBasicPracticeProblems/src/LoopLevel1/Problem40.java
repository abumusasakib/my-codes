package LoopLevel1;

public class Problem40 
{
    public static void main(String[] args) 
    {
        for(int i = 0; i <= 99; i++)
        {
            System.out.print(i);
            
            if(i != 99)
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
