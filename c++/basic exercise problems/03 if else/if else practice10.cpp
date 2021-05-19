#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if(age < 3)                         //Less than 3 years
    {
        cout << "Infancy" << endl;
    }
    else if(age >= 3 && age < 12)       //Between [3,12) years
    {
        cout << "Childhood" << endl;
    }
    else if(age >= 12 && age < 20)      //Between [12,20) years
    {
        cout << "Adolescence" << endl;
    }
    else if(age >= 20 && age < 40)      //Between [20,40) years
    {
        cout << "Young adulthood" << endl;
    }
    else if(age >= 40 && age < 65)      //Between [40,65) years
    {
        cout << "Mature adulthood" << endl;
    }
    else                                //More than 65 years
    {
        cout << "Late adulthood" << endl;
    }
}
