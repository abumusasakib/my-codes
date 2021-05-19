package ArithmeticOperators;

public class Problem23 
{
    public static void main(String[] args) 
    {
        double denominator = 1, z = 2;
        
        for(int i = 2; i <= 6; i++)
        {
            denominator = denominator * i;
            z = z + (1 / denominator);
        }
        
        System.out.println("Z: "+z);
    }
}
