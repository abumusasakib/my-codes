#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    //fill 2d array of size 5*3 with random numbers from 30 to 50
	int staticArray[5][3];

	srand(time(0));

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            staticArray[i][j] = (rand() % (50 - 30 + 1)) + 30; // random numbers from 30 to 50
        }
    }

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << staticArray[i][j] << "\t"; // \t is tab space (3 spaces)
        }
        cout << endl;
    }
}
