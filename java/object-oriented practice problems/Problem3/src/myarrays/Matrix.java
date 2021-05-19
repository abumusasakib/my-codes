package myarrays;


public class Matrix 
{
    private OneDArray[][] arrays;
    
    public Matrix(int r, int c)
    {
        arrays = new OneDArray[r][c];
        
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                arrays[i][j].setArray();
            }
        }
    }

    public Matrix(int r, int c, int length, int upperLimit) 
    {
        arrays = new OneDArray[r][c];
        
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                arrays[i][j].setArray(length);
                length++;
            }
        }
        
    }

    public void showMatrix() 
    {
        for(int i = 0; i < arrays.length; i++)
        {
            for(int j = 0; j < arrays[i].length; j++)
            {
                if(i == 0)
                {
                    System.out.println("First Matrix: ");

                }
                if(i == 1)
                {
                    System.out.println("Second Matrix: ");
                }
                
                arrays[i][j].showArray();
                System.out.print("\t");
                if(j == arrays[i].length)
                {
                    System.out.println("");
                }
                
            }
        }
    }

    public Matrix merge(Matrix m2) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
}
