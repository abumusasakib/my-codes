#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if(marks >= 85 && marks <= 100)    //[85,100]
    {
        cout << "A" << endl;
    }
    else if(marks >= 80 && marks < 85) //[80,85)
    {
        cout << "A-" << endl;
    }
    else if(marks >= 75 && marks < 80) //[75,80)
    {
        cout << "B+" << endl;
    }
    else if(marks >= 70 && marks < 75) //[70, 75)
    {
        cout << "B" << endl;
    }
    else if(marks >= 65 && marks < 70) //[65, 70)
    {
        cout << "B-" << endl;
    }
    else if(marks >= 60 && marks < 65) //[60,65)
    {
        cout << "C+" << endl;
    }
    else if(marks >= 55 && marks < 60) //[55,60)
    {
        cout << "C" << endl;
    }
    else if(marks >= 50 && marks < 55) //[50,55)
    {
        cout << "C-" << endl;
    }
    else if(marks >= 45 && marks < 50) //[45,50)
    {
        cout << "D+" << endl;
    }
    else if(marks >= 40 && marks < 45) //[40,45)
    {
        cout << "D" << endl;
    }
    else                               //[0,40)
    {
        cout << "F";
    }
}
