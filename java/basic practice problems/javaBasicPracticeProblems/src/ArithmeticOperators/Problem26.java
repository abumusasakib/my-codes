package ArithmeticOperators;

public class Problem26 
{
    public static void main(String[] args) 
    {
        double numerator, denominator, fraction;
        double numBase = 1, numPow = 2, denomSqrt = 2, s = 0;
        
        
        for(int i = 1; i <= 5; i++)
        {
            numerator = Math.pow(numBase, numPow);
            denominator = Math.sqrt(denomSqrt);
            fraction = numerator / denominator;
            s = s + fraction;
            numBase++;
            numPow++;
            denomSqrt++;
        }
        
        System.out.println("The value of s is: "+s);
    }
}
