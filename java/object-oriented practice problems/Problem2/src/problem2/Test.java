package problem2;

import java.util.Random;
import java.util.Scanner;

class MyArray 
{
    private int[] intData;
// add necessary methods

    public void setMyArray() 
    {
        Scanner sc = new Scanner(System.in);
        Random rand = new Random();
        int n;
        System.out.print("Size of each MyArray object: ");
        n = sc.nextInt();

        intData = new int[n];

        for (int i = 0; i < n; i++) 
        {
            intData[i] = rand.nextInt();
        }
    }

    public void showMyArray() 
    {
        if (intData != null) 
        {
            for (int i = 0; i < intData.length; i++) 
            {
                System.out.print(intData[i] + " ");
            }
            System.out.println("");
        }

    }
}

class Matrix 
{
    private MyArray[][] arrayObjects;
// add necessary methods ( see main() )

    public Matrix() 
    {
        arrayObjects = null;
    }

    public void augment() 
    {
        Scanner sc = new Scanner(System.in);
        int rows, cols;
        System.out.print("Enter number of rows: ");
        rows = sc.nextInt();
        System.out.print("Enter number of columns: ");
        cols = sc.nextInt();

        if (arrayObjects == null) 
        {
            arrayObjects = new MyArray[rows][cols];
            for (int i = 0; i < rows; i++) 
            {
                for (int j = 0; j < cols; j++) 
                {
                    arrayObjects[i][j] = new MyArray();
                    arrayObjects[i][j].setMyArray();
                }
            }
        } 
        else 
        {
            if (rows > arrayObjects.length && cols > arrayObjects[0].length) 
            {
                MyArray[][] temp = arrayObjects;
                arrayObjects = new MyArray[rows][cols];

                for (int i = 0; i < arrayObjects.length; i++) 
                {
                    for (int j = 0; j < arrayObjects[i].length; j++) 
                    {
                        arrayObjects[i][j] = new MyArray();

                        if (i < temp.length && j < temp[i].length) 
                        {
                            arrayObjects[i][j] = temp[i][j];
                        } 
                        else 
                        {
                            arrayObjects[i][j].setMyArray();
                        }

                    }
                }
            }
            else
            {
                System.out.println("Unable to augment");
            }
        }
    }

    public void display() 
    {
        if (arrayObjects != null) 
        {
            for (int i = 0; i < arrayObjects.length; i++) {
                for (int j = 0; j < arrayObjects[i].length; j++) {
                    System.out.println("MyArray in i = " + i + " and j = " + j);
                    arrayObjects[i][j].showMyArray();
                }
            }
        }

    }
}

public class Test 
{

    public static void main(String args[]) 
    {
        Scanner sc = new Scanner(System.in);
        Matrix m = new Matrix();
        int choice = 0;
        while (choice != 2) 
        {
            System.out.print("Press 1 to augment or 2 to exit: ");
            choice = sc.nextInt();
            if (choice == 1) 
            {
                m.augment();
                // get values of # of rows & cols from user.
                // if m is empty, instantiate the 2D array. Now ask size of each
                // MyArray objects of the 2D and populate them with random integers.
                // if m already has some MyArray objects in it, and IFF rows &
                // cols are greater than the row & column no of m, then ask size
                // of each additional MyArray objects of the 2D and augment them
                // to m, populated with user input.

                m.display();
                // display the Matrix of MyArray objects
            }
        }
    }//end main()
}//end class
