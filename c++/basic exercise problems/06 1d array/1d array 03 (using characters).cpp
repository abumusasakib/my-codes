#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int i;
    char firstCharacter, secondCharacter;

    cout << "Enter the first character: ";
    cin >> firstCharacter;

    cout << "Enter the second character: ";
    cin >> secondCharacter;

    char randomArray[25];

    srand(time(0));

    if(firstCharacter >= secondCharacter)
    {
        for(i = 0; i < 25; i++)
        {
            randomArray[i] = (rand() % firstCharacter - secondCharacter + 1) + secondCharacter;
        }
    }
    else
    {
        for(i = 0; i < 25; i++)
        {
            randomArray[i] = (rand() % secondCharacter - firstCharacter + 1) + firstCharacter;
        }
    }


    cout << "The randomly generated character array between two characters is: " << endl;

    for(i = 0; i < 25; i++)
    {
        cout << randomArray[i] << " ";
    }
}
