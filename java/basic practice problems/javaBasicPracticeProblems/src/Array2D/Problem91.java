package Array2D;

import java.util.Random;

public class Problem91
{
    public static void main(String[] args)
    {
        Random rand = new Random();
        int A[][] = new int[4][4];
        
        System.out.println("Matrix A: ");
        for(int i = 0; i < 4; i++)
        {
            for(int j = 0; j < 4; j++)
            {
                A[i][j] = rand.nextInt(10);
                System.out.print(A[i][j]+" ");
            }
            System.out.println("");
        }
        
        System.out.println("");
        System.out.println("Matrix B: ");
        
        int B[][] = new int[4][4];
        
        for(int i = 0; i < 4; i++)
        {
            for(int j = 0; j < 4; j++)
            {
                B[i][j] = rand.nextInt(10);
                System.out.print(B[i][j]+" ");
            }
            System.out.println("");
        }
        
        System.out.println("");
        System.out.println("Matrix C: ");
        
        int C[][] = new int[4][4];
         
        for(int i = 0; i < 4; i++)
        {
            for(int j = 0; j < 4; j++)
            {
                C[i][j] = A[i][j] + B[i][j];
                System.out.print(C[i][j]+" ");
            }
            System.out.println("");
        }
    }
}
