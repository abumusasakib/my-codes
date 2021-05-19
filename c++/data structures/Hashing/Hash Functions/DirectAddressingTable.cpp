#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int hashFunctionDirectAddressingTable(int data, int hashTableSize)
{
    int hashValue = data;
    return hashValue;
}

void addValueDirectAddressingTable(int hashTable[], int data, int hashTableSize, float &loadFactor, int &noOfStoredData, int &collisionCounter)
{
    int hashValue = hashFunctionDirectAddressingTable(data, hashTableSize);
    if(hashTable[hashValue] == -1)
    {
        hashTable[hashValue] = data;
		noOfStoredData++;
    }

    else
    {
        collisionCounter++;
    }

	loadFactor = (float) noOfStoredData / hashTableSize;
}

int findValueDirectAddressingTable(int hashTable[], int data, int hashTableSize)
{
    int hashValue = hashFunctionDirectAddressingTable(data, hashTableSize);

    if(hashTable[hashValue] == data)
    {
        return hashValue;
    }

    else
    {
        return -1;
    }
}

void deleteValueDirectAddressingTable(int hashTable[], int data, int hashTableSize, float &loadFactor, int &noOfStoredData)
{
    int hashValue = hashFunctionDirectAddressingTable(data, hashTableSize);

    if(hashTable[hashValue] == data)
    {
        hashTable[hashValue] = -1;
		noOfStoredData--;
    }

    else
    {
        cout << "Not found";
    }

	loadFactor = (float) noOfStoredData / hashTableSize;
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

int main()
{
    srand(time(0));
    int numberOfData, hashTableSize, randomNumbers, choice, collisionCounter = 0, storedDataCounter = 0;
	float loadFactor;

    cout << "Enter number of data: ";
    cin >> numberOfData;

    hashTableSize = numberOfData;

    if(hashTableSize != -1)
    {
        int *hashTable = new int[hashTableSize];

        for(int i = 0; i < hashTableSize; i++)
        {
            hashTable[i] = -1;
        }

        cout << "The generated random numbers are: ";

        for(int i = 0; i < numberOfData; i++)
        {
            randomNumbers = rand() % numberOfData;
            cout << randomNumbers << " ";
            addValueDirectAddressingTable(hashTable, randomNumbers, hashTableSize, loadFactor, storedDataCounter, collisionCounter);
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

                cout << "Found at index: " << findValueDirectAddressingTable(hashTable, searchVal, hashTableSize);

                cout << endl;
            }

            else if(choice == 2)
            {
                int delVal;
                cout << "Enter a value to delete in hashTable: ";
                cin >> delVal;
                deleteValueDirectAddressingTable(hashTable, delVal, hashTableSize, loadFactor, storedDataCounter);
                printHashTable(hashTable, hashTableSize);
				cout << "Load Factor is: " << loadFactor << endl;
                cout << endl;
            }

            else if(choice == 3)
            {
                int addVal;
                cout << "Enter a value to add in hashTable: ";
                cin >> addVal;
                addValueDirectAddressingTable(hashTable, addVal, hashTableSize, loadFactor, storedDataCounter, collisionCounter);
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
    }

    else
    {
        cout << "Try again.";
    }
}
