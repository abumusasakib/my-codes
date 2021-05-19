#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int i, firstInteger, secondInteger;

    cout << "Enter the first integer: ";
    cin >> firstInteger;

    cout << "Enter the second integer: ";
    cin >> secondInteger;

    int randomArray[5];

    srand(time(0));



    if(firstInteger <= secondInteger)
    {
        for(i = 0; i < 5; i++)
        {
            randomArray[i] = (rand() % (secondInteger - firstInteger + 1)) + firstInteger;
        }
    }
    if(firstInteger > secondInteger)
    {
        for(i = 0; i < 5; i++)
        {
            randomArray[i] = (rand() % (firstInteger - secondInteger + 1)) + secondInteger;
        }
    }


    cout << "The randomly generated integer array between two numbers is: " << endl;

    for(i = 0; i < 5; i++)
    {
        cout << randomArray[i] << " ";
    }

}
