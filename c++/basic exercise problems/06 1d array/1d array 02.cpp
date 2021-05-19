#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int i;
    float sum = 0, avg, smallest = 9999999999, largest = 0;
    int randomArray[100];

    srand(time(0));

    for(i = 0; i < 100; i++)
    {
        randomArray[i] = rand();
    }

    cout << "The randomly generated integer array is: " << endl;

    for(i = 0; i < 100; i++)
    {
        cout << randomArray[i] << " ";
    }

    for(i = 0; i < 100; i++)
    {
        if(randomArray[i] > largest)
        {
            largest = randomArray[i];
        }

        if(randomArray[i] < smallest)
        {
            smallest = randomArray[i];
        }

        sum += randomArray[i];
    }

    cout << endl;

    cout << "Sum of the random numbers = " << sum << endl;

    avg = sum / 100;
    cout << "Avg of the random numbers = " << avg << endl;

    cout << "Largest number = " << largest << endl;
    cout << "Smallest number = " << smallest << endl;
}
