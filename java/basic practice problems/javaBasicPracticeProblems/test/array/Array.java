package array;

import java.util.Scanner;


public class Array 
{
    public static void main(String[] args) 
    {
    Scanner sc = new Scanner(System.in);
        
        int a1[] = {11,22,33};
    

    int a2[][] = new int[3][];
    
    
    for(int i=0;i<a2.length;i++)
    {
        System.out.println("How many cols for "+i+"th row?");
        int col = sc.nextInt();
        
       a2[i] = new int[col];
       
       for(int j=0;j<a2[i].length;j++)
       {
           a2[i][j] = sc.nextInt();
       }
       
       
    }
    
    
        System.out.println("printing a1 array.....");
    
        for(int i=0;i<a1.length;i++)
        {
            System.out.println(a1[i]+" ");
        }
        
        
        System.out.println("printing a2 array.....");
        
        for(int i=0;i<a2.length;i++)
        {
            for(int j=0;j<a2[i].length;j++)
            {
                System.out.print(a2[i][j]+" ");
            }
            System.out.println();
        }
    
    
    int a3[][][] = new int[3][][];
    
    a3[0] = a2;
    
        System.out.println("How many rows for second page? ");
        int row  = sc.nextInt();
        
     a3[1] = new int[row][];   //4
    
      a3[1][0] = a1;
      
      for(int i =1 ; i<a3[1].length;i++)
      {
          System.out.println("How many cols for "+i+"th row?");
          int col = sc.nextInt();
          
          a3[1][i] = new int[col];
      }
        
        
      
        System.out.println("How many rows for third page?");

        int r  = sc.nextInt(); //3
        
        a3[2] = new int[r][];
        
        for(int i=0;i<a3[2].length;i++)
        {
            System.out.println("How many cols for "+i+" th row?");
            int c=  sc.nextInt();
            
            a3[2][i] = new int[c];
            
            
            
            
            
        }
        
    }
    
}