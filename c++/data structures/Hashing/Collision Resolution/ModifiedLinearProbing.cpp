#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int hashFunctionDivisionMethod(int data, int hashTableSize)
{
    int hashValue = (abs(data)) % hashTableSize;
    return hashValue;
}

void addValueModifiedLinearProbing(int hashTable[], int stateArray[], int data, int coprimeNum, int hashTableSize, float &loadFactor, int &noOfStoredValues, int &collisionCounter)
{
    int hashValue = hashFunctionDivisionMethod(data, hashTableSize);
    int noOfMoves = 1;

    if(hashTable[hashValue] == -1)
    {
        hashTable[hashValue] = data;
        stateArray[hashValue] = 0;
        noOfStoredValues++;
    }

    else
    {
        while(hashTable[hashValue] != -1)
        {
            hashValue = (hashValue + 1 * coprimeNum) % hashTableSize;
            noOfMoves++;

            if(noOfMoves > hashTableSize)
            {
                collisionCounter++;
            }
        }

        hashTable[hashValue] = data;
        stateArray[hashValue] = 0;
        noOfStoredValues++;
    }

    loadFactor = (float)noOfStoredValues / hashTableSize;
}

int findValueModifiedLinearProbing(int hashTable[], int stateArray[], int data, int coprimeNum, int hashTableSize)
{
    int hashValue = hashFunctionDivisionMethod(data, hashTableSize);

    if(hashTable[hashValue] == data && stateArray[hashValue] == 0)
    {
        return hashValue;
    }

    else
    {
        while(hashTable[hashValue] != -1 && stateArray[hashValue] != 2)
        {
            hashValue = (hashValue + 1 * coprimeNum) % hashTableSize;
        }

        if(hashTable[hashValue] == data && stateArray[hashValue] == 0)
        {
            return hashValue;
        }

        else
        {
            return -1;
        }
    }
}

void deleteValueModifiedLinearProbing(int hashTable[], int stateArray[], int data, int coprimeNum, int hashTableSize, float &loadFactor, int &noOfStoredValues)
{
    int hashValue = hashFunctionDivisionMethod(data, hashTableSize);

    if(hashTable[hashValue] == data)
    {
        hashTable[hashValue] = -1;
        stateArray[hashValue] = 1;
        noOfStoredValues--;
    }

    else
    {
        while(hashTable[hashValue] != -1 && (stateArray[hashValue] != 1 || stateArray[hashValue] == 2))
        {
            hashValue = (hashValue + 1 * coprimeNum) % hashTableSize;
        }

        if(hashTable[hashValue] == data)
        {
            hashTable[hashValue] = -1;
            stateArray[hashValue] = 1;
            noOfStoredValues--;
        }

        else
        {
            cout << "Not found" << endl;
        }
    }

    loadFactor = (float)noOfStoredValues / hashTableSize;
}

void printHashTable(int hashTable[], int hashTableSize)
{
    cout << "Contents of hash table: " << endl;
    cout << "Index" << "\t" << "Data" << endl;
    for(int i = 0; i < hashTableSize; i++)
    {
        cout << i << "\t" << hashTable[i] << endl;
    }
}

bool checkPrime(int n)
{
    bool isPrime = true;
    for(int i = 2; i < n; ++i)
    {
        if(n % i == 0)
        {
            isPrime = false;
        }
    }

    return isPrime;
}

int PickTableSize(int noOfNumbers)
{
    int value = 0;
    for(int i = 0; i < noOfNumbers; i++)
    {
        value = pow(2, i);
        if(value > noOfNumbers)
        {
            break;
        }

        if(value == noOfNumbers)
        {
            while(!checkPrime(value))
            {
                value++;
            }
        }
    }
    while(!checkPrime(value) && value > noOfNumbers)
    {
        value--;
    }

    if(!checkPrime(value))
    {
        int choice;
        cout << "Non-prime hash table size returned, do you want to continue?" << endl;
        cout << "Enter 1 for yes, and any other value for no: ";
        cin >> choice;

        if(choice == 1)
        {
            return value;
        }

        else
        {
            return -1;
        }
    }
    return value;
}

int gcd(int num1, int num2)
{
    int gcd;
    for(int i = 1; (i <= num1) && (i <= num2); i++)
    {
        if((num1 % i == 0) && (num2 % i == 0))
        {
            gcd = i;
        }
    }

    return gcd;
}

int ChooseRandomCoprime(int inputNum)
{
    srand(time(0));
    int outputNum = rand();
    while(!checkPrime(outputNum) && gcd(outputNum,inputNum) != 1)
    {
        outputNum = rand() + 1;
    }

    return outputNum;
}

int main()
{
    srand(time(0));
    int numberOfData, coprime, hashTableSize, randomNumbers, choice, collisionCounter = 0, storedDataCounter = 0;
    float loadFactor;

    cout << "1. Automatic" << endl;
    cout << "2. Manual entry" << endl;
    cout << "Choose how do you want to choose hash table size." << endl;
    cin >> choice;

    if(choice == 1)
    {
        cout << "Enter number of data: ";
        cin >> numberOfData;

        hashTableSize = PickTableSize(numberOfData);
    }
    else if(choice == 2)
    {
        cout << "Enter number of data: ";
        cin >> numberOfData;

        cout << "Enter hash table size: ";
        cin >> hashTableSize;
    }

    else
    {
        cout << "Invalid selection";
        hashTableSize = -1;
    }
    if(hashTableSize != -1)
    {
        int *hashTable = new int[hashTableSize];
        int *stateArray = new int[hashTableSize];  //0 = occupied, 1 = deleted, 2 = empty

        for(int i = 0; i < hashTableSize; i++)
        {
            hashTable[i] = -1;
        }

        for(int i = 0; i < hashTableSize; i++)
        {
            stateArray[i] = 2;
        }

        coprime = ChooseRandomCoprime(hashTableSize);

        cout << "The generated random numbers are: ";

        for(int i = 0; i < numberOfData; i++)
        {
            randomNumbers = rand() % 100;
            cout << randomNumbers << " ";
            addValueModifiedLinearProbing(hashTable, stateArray, randomNumbers, coprime, hashTableSize, loadFactor, storedDataCounter, collisionCounter);
        }

        cout << endl;

        printHashTable(hashTable, hashTableSize);

        cout << endl;
        cout << "Load Factor is: " << loadFactor << endl;
        cout << "Number of collisions: " << collisionCounter << endl;
        cout << endl;
        while(true)
        {
            cout << "1. Search" << endl;
            cout << "2. Delete" << endl;
            cout << "3. Add" << endl;

            cout << "Enter your choice or any other value to exit: ";
            cin >> choice;
            cout << endl;

            if(choice == 1)
            {
                int searchVal;
                cout << "Enter a value to search in hashTable: ";
                cin >> searchVal;

                cout << "Found at index: " << findValueModifiedLinearProbing(hashTable, stateArray, searchVal, coprime, hashTableSize);

                cout << endl;
            }

            else if(choice == 2)
            {
                int delVal;
                cout << "Enter a value to delete in hashTable: ";
                cin >> delVal;

                cout << endl;

                deleteValueModifiedLinearProbing(hashTable, stateArray, delVal, coprime, hashTableSize, loadFactor, storedDataCounter);

                printHashTable(hashTable, hashTableSize);
                cout << "Load Factor is: " << loadFactor << endl;
                cout << endl;
            }

            else if(choice == 3)
            {
                int addVal;
                cout << "Enter a value to add in hashTable: ";
                cin >> addVal;
                addValueModifiedLinearProbing(hashTable, stateArray, addVal, coprime, hashTableSize, loadFactor, storedDataCounter, collisionCounter);
                printHashTable(hashTable, hashTableSize);
                cout << "Load Factor is: " << loadFactor << endl;
                cout << "Number of collisions: " << collisionCounter << endl;
                cout << endl;
            }

            else
            {
                break;
            }

        }

        delete[] hashTable;
        delete[] stateArray;
    }

    else
    {
        cout << "Try again.";
    }

}
