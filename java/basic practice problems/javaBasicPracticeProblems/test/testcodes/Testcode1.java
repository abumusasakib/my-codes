package testcodes;

import java.util.Random;

public class Testcode1 
{
    public static void main(String[] args) {
        
        //Scanner sc = new Scanner(System.in);
        Random r = new Random();
        
        int arr[] = new int[20];
       
        int e=0,od=0;
        
        System.out.print("All number : ");
        for(int i=0;i<20;i++)
        {
            arr[i] = r.nextInt(10);
            System.out.print(arr[i]+" ");
            
        }
        
        System.out.println("");
       
        for(int i=0;i<20;i++)
        {
            if(arr[i]%2 == 0)
            {
                e++;
            }
            else
            {
                od++;
            }
        }
        int even[] = new int[e];
        int odd[] = new int[od];
        
        int j = 0, k = 0;
        for(int i=0;i<20;i++)
        {
          if(arr[i]%2 == 0)
            {
               even[j] = arr[i];
               j++;
            }
            else
            {
               odd[k] = arr[i];
               k++;
            }
  
        }
       
        System.out.print("even : ");
        for(int i=0;i<e;i++)
        {   
            System.out.print(even[i]+" ");  
        }
        
        System.out.print("\nOdd : ");
        for(int i=0;i<od;i++)
        {
            System.out.print(odd[i]+" ");
        }
        
        System.out.println("");
        
    }
    
    
}
