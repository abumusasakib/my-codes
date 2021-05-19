package mainpkg;

import java.util.Scanner;
import myarrays.Matrix;

public class MainClass {

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        Matrix m1, m2, m3;
        int r, c;
        System.out.print("How many rows? ");
        r = sc.nextInt();
        //r = no of rows for Matrix class object. r is a user input
        System.out.print("How many columns? ");
        c = sc.nextInt();
        //c = no of columns for Matrix class object. c is a user input 
        m1 = new Matrix(r, c); // m1 will have r rows & c cols
        //stores OneDArray objects in arrays[i][j] inside m1 object
        //ask user for length and values for each OneDArray
        //average value of each MyOneDArray is also calculated
        System.out.println("First Matrix: "); 
        m1.showMatrix(); //see RUN
        m2 = new Matrix(r, c, 2, 10); // m2 will have r rows & c cols
        //3rd parameter is the length of first OneDArray in m2,
        //which gets incremented by 1 for subsequent OneDArray objects in m2
        //4th parameter is the upper limit of random values to populate m2
        //average value of each OneDArray is also calculated
        System.out.println("Second Matrix: "); 
        m2.showMatrix();//see RUN
        //m3 = m1.merge(m2);
        //System.out.println("Merged Matrix: "); 
        //m3.showMatrix();//see RUN
    }

}
