#include <bits/stdc++.h>

using namespace std;

class ComplexNo
{
    int real, img;
public:
    void setComplexNo()
    {
        cout << "Enter real value: ";
        cin >> real;
        cout << "Enter imaginary value: ";
        cin >> img;
    }

    void showComplexNo()
    {
        if(img > 0)
        {
            cout << real << "+" << img << "i";
        }
        else
        {
            cout << real << "-" << img << "i";
        }
    }
};
class ComplexRow
{
    int noOfCNperRow;
    ComplexNo *CnPtr;
public:
    void getComplexNo()
    {
        for(int i = 0; i < noOfCNperRow; i++)
        {
            CnPtr[i].showComplexNo();
        }
    }
    int getNoOfCNperRow()
    {
        return noOfCNperRow;
    }
    void setNoOfCNperRow()
    {
        cout << "Number of complexNo: ";
        cin >> noOfCNperRow;
        CnPtr = new ComplexNo[noOfCNperRow];
    }
    ComplexRow mergeWith(ComplexRow c)
    {

    }
    friend void operator>>(istream& in, ComplexRow& cn);
// AND/OR declare friends, so that the given main() works
};

void operator>>(istream& in, ComplexRow& cn)
{
    cn.setNoOfCNperRow();

    for(int i = 0; i < cn.getNoOfCNperRow(); i++)
    {
        cn.CnPtr[i].setComplexNo();
    }
}

void showComplexRows(ComplexRow *cnRows, int row)
{
    for(int i = 0; i < row, i++)
    {
        cnRows[i].getComplexNo();
    }
}

istream& operator>>(istream& in, int& rows)
{
    in >> rows;
    return rows;
}
int main()
{
    int row, rowIndex1, rowIndex2, i;
    ComplexRow *cnRows;
    cout << "How many rows of complex nos? ";
    cin >> row;
    cnRows = new ComplexRow[row];
    for(i=0; i<row; i++)
        cin >> cnRows[i];
// ask no of complexNo in i-th row & populate them with ComplexNo objects;
    cout << "The matrix/2-D shape of complex numbers is: " << endl;
    showComplexRows(cnRows, row); //global function
    ComplexRow mergedRow;
    cout << "Enter indices of two rows (<row) to merge: ";
    cin >> rowIndex1 >> rowIndex2;
    mergedRow = cnRows[rowIndex1].mergeWith(cnRows[rowIndex2]);
    cout << "The MERGED rows of complex numbers is: "<< mergedRow << endl;
    int lower, upper;
//get values of lower & upper from user
// Now display all the Complex numbers from mergedRow,
// whose real<=lower & img>=upper
    return 0;
}
