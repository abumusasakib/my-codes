package LoopLevel1;

public class Problem44
{
    public static void main(String[] args) 
    {
        for(int i = -42; i <= -8; i+=2)
        {
            System.out.print(i);
            
            if(i != -8)
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
