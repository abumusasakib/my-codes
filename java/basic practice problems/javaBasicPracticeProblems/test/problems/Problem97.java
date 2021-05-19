package problems;

import java.util.Random;

public class Problem97
{
    public static void main(String[] args)
    {
        Random rand = new Random();
        int A[][] = new int[5][2];
        int sumEachColumn = 0, sumAllColumn = 0; 
        float avg = 0;
        
        System.out.println("Array A: ");
        for(int i = 0; i < 5; i++)
        {
            for(int j = 0; j < 2; j++)
            {
                A[i][j] = rand.nextInt(10);
                System.out.print(A[i][j]+" ");
            }
            System.out.println("");
        }
        
        for(int j = 0; j < 2; j++)
        {
            for(int i = 0; i < 5; i++)
            {
                sumEachColumn = sumEachColumn + A[i][j];
            }
            sumAllColumn = sumAllColumn + sumEachColumn;
        }
        
        avg = sumAllColumn / 2;
        System.out.println("The average of each column is: "+avg);
    }
}
