package LoopLevel1;

public class Problem42 
{
    public static void main(String[] args) 
    {
        for(float i = 2.25f; i <= 4.00; i+=0.25f)
        {
            System.out.print(i);
            
            if(i != 4.00f)
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
