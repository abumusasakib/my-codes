package Array2D;

import java.util.Random;

public class Problem92
{
    public static void main(String[] args)
    {
        Random rand = new Random();
        
        System.out.println("Matrix A: ");
        int A[][] = new int[3][5];
        
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 5; j++)
            {
                A[i][j] = rand.nextInt(10);
                System.out.print(A[i][j]+" ");
            }
            System.out.println("");
        }
        System.out.println("");
        System.out.println("Transpose Matrix, AT: ");
        
        int AT[][] = new int[5][3];
        
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                AT[i][j] = A[j][i];
                System.out.print(AT[i][j]+" ");
            }
            System.out.println("");
        }
    }
}
