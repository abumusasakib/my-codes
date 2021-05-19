#include <iostream>
#include <cstdlib>

using namespace std;

class Array
{
private:
    int *valPtr;
    int size;
public:
    void setArray(string type, int range)
    {
        cout << "How many ints? ";
        cin >> size;

        valPtr = new int[size];

        for(int i = 0; i < size; i++)
        {
            valPtr[i] = rand() % range;
        }
    }
    void setArray(int sze, string type)
    {
        size = sze;

        valPtr = new int[size];

        cout << "Enter " << sze << " integers for the array: ";
        for(int i = 0; i < size; i++)
        {
            cin >> valPtr[i];
        }
    }
    friend ostream& operator<<(ostream& out, Array ar);
    friend Array operator+(Array a1, Array a2);
};

ostream& operator<<(ostream& out, Array ar)
{
    for(int i = 0; i < ar.size; i++)
    {
        out << ar.valPtr[i] << " ";
    }

    return out;
}

Array operator+(Array a1, Array a2)
{
    int newSize = a1.size + a2.size;
    Array a3;
    a3.valPtr = new int[newSize];
    a3.size = newSize;
    for(int i = 0; i < a1.size + a2.size; i++)
    {
        if(i < a1.size)
        {
            a3.valPtr[i] = a1.valPtr[i];
        }
        else
        {
            a3.valPtr[i] = a2.valPtr[i - a1.size];
        }
    }

    return a3;
}
int main()
{
    Array arr1, arr2, arr3;
    arr1.setArray("Random",10);

    arr2.setArray(3, "User input");

    cout<<"Array arr1:"<<arr1<<endl;

    cout<<"Array arr2:"<<arr2<<endl;
    cout<<"Array arr3:"<<(arr1+arr2)<<endl;

    return 0;
}
