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
void addValueQuadraticProbing(int hashTable[], int stateArray[], int data, int hashTableSize, float &loadFactor, int &noOfStoredValues, int &collisionCounter)
{
    int hashValue = hashFunctionDivisionMethod(data, hashTableSize);
    int stepNum = 1, steps;

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
			if(stepNum > hashTableSize)
			{
				collisionCounter++;
			}

			steps = pow(stepNum, 2);
            hashValue = (hashValue + steps) % hashTableSize;
            stepNum++;
        }

        hashTable[hashValue] = data;
        stateArray[hashValue] = 0;
        noOfStoredValues++;
    }

    loadFactor = (float)noOfStoredValues / hashTableSize;
}

int findValueQuadraticProbing(int hashTable[], int stateArray[], int data, int hashTableSize)
{
    int hashValue = hashFunctionDivisionMethod(data, hashTableSize);
    int stepNum = 1, steps;

    if(hashTable[hashValue] == data && stateArray[hashValue] == 0)
    {
        return hashValue;
    }

    else
    {
        while(hashTable[hashValue] != -1 && stateArray[hashValue] != 2)
        {
            steps = pow(stepNum, 2);
            hashValue = (hashValue + steps) % hashTableSize;
            stepNum++;
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

void deleteValueQuadraticProbing(int hashTable[], int stateArray[], int data, int hashTableSize, float &loadFactor, int &noOfStoredValues)
{
    int hashValue = hashFunctionDivisionMethod(data, hashTableSize);
    int stepNum = 1, steps;

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
            steps = pow(stepNum, 2);
            hashValue = (hashValue + steps) % hashTableSize;
            stepNum++;
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
int main()
{
    srand(time(0));
    int numberOfData, hashTableSize, randomNumbers, choice, collisionCounter = 0, storedDataCounter = 0;
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

		cout << "The generated random numbers are: ";

		for(int i = 0; i < numberOfData; i++)
		{
			randomNumbers = rand() % 100;
			cout << randomNumbers << " ";
			addValueQuadraticProbing(hashTable, stateArray, randomNumbers, hashTableSize, loadFactor, storedDataCounter, collisionCounter);
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

				cout << "Found at index: " << findValueQuadraticProbing(hashTable, stateArray, searchVal, hashTableSize);

				cout << endl;
			}

			else if(choice == 2)
            {
				int delVal;
				cout << "Enter a value to delete in hashTable: ";
				cin >> delVal;

				cout << endl;

				deleteValueQuadraticProbing(hashTable, stateArray, delVal, hashTableSize, loadFactor, storedDataCounter);

				printHashTable(hashTable, hashTableSize);
				cout << "Load Factor is: " << loadFactor << endl;
                cout << endl;
			}

			else if(choice == 3)
            {
                int addVal;
                cout << "Enter a value to add in hashTable: ";
                cin >> addVal;
                addValueQuadraticProbing(hashTable, stateArray, addVal, hashTableSize, loadFactor, storedDataCounter, collisionCounter);
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
