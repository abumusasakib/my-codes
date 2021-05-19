package LoopLevel1;

public class Problem43
{
    public static void main(String[] args) 
    {
        for(char i = 'a'; i <= 'z'; i++)
        {
            System.out.print(i);
            
            if(i != 'z')
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
