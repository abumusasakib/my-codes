package problem1;

import java.util.Scanner;

class Complex 
{
    private int real, img;
//add constructor and other necessary methods for input, output

    public Complex() 
    {
        real = img = 0;
    }
    
    public void setComplex()
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter real number: ");
        real = sc.nextInt();
        System.out.print("Enter imaginary number: ");
        img = sc.nextInt();
    }
    public void show(int lower, int upper)
    {
        if(real <= lower && img >= upper)
        {
            if(img > 0)
            {
                System.out.println(real+"+"+img+"i");
            }
            else
            {
                System.out.println(real+"-"+img+"i");
            }
            
        }
    }
} //represents complex number in the form of “real +/- img i” e.g: 2+3i

class ComplexArray 
{
    private Complex[] data;
    
//write populate & show methods

    public ComplexArray() 
    {
        data = null;
    }

    public Complex[] getData() 
    {
        return data;
    }
    
    public Complex getData(int i) 
    {
        return data[i];
    }
    
    public void augment(int n)
    {
        if(data == null)
        {
            data = new Complex[n];
            
            for(int i = 0; i < n; i++)
            {
                data[i] = new Complex();
                data[i].setComplex();
            }
        }
        else
        {
            Complex[] temp = data;
            data = new Complex[n];
            
            for(int i = 0; i < data.length; i++)
            {
                data[i] = new Complex();
                
                if(i < temp.length)
                {
                    data[i] = temp[i];
                }
                else
                {
                    data[i].setComplex();
                }
                
            }
        }
    }
    
}
//rewrite TEST class with full functioning code

public class Test 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.print("Enter the value of n: ");
        n = sc.nextInt();
//get values of n from user (no of Complex numbers)
        ComplexArray arr;
        arr = new ComplexArray();
//allocate necessary memory to arr
        int choice = 0;
        //Loop: as long as user wants[choice: 1 to populate, 2 to exit]
        while(choice != 2)
        {
            System.out.print("Enter 1 to populate and 2 to exit: ");
            choice = sc.nextInt();
            if(choice == 1)
            {
                arr.augment(n); // add/augment n complex numbers to arr
            }
        }
        int lower, upper;
        System.out.print("Enter lower bound: ");
        lower = sc.nextInt();
        System.out.print("Enter upper bound: ");
        upper = sc.nextInt();
//get values of lower & upper from user
        //Now display all the Complex numbers from arr whose real<=lower & img >= upper, using show(lower,upper) method of Complex class;
        for(int i = 0 ; i < arr.getData().length; i++)
        {
            arr.getData(i).show(lower, upper);
        }
    }
}
