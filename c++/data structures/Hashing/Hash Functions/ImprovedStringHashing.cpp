#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int hashFunctionDivisionMethod(int data, int hashTableSize);

int stringHashPolynomial(string data, int hashTableSize)
{
    int sum = 0;

    for(int i = 0; i < data.size(); i++)
    {
        sum = sum * 37 + (int) data[i];
    }

    return hashFunctionDivisionMethod(sum, hashTableSize);
}

void addValueString(string hashTable[], string data, int hashTableSize, float &loadFactor, int &noOfStoredData, int &collisionCounter)
{
    int hashValue =  stringHashPolynomial(data, hashTableSize);
    if(hashTable[hashValue] == "-")
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

int findValueString(string hashTable[], string data, int hashTableSize)
{
    int hashValue =  stringHashPolynomial(data, hashTableSize);

    if(hashTable[hashValue] == data)
    {
        return hashValue;
    }

    else
    {
        return -1;
    }
}

void deleteValueString(string hashTable[], string data, int hashTableSize, float &loadFactor, int &noOfStoredData)
{
    int hashValue =  stringHashPolynomial(data, hashTableSize);

    if(hashTable[hashValue] == data)
    {
        hashTable[hashValue] = "-";
		noOfStoredData--;
    }

    else
    {
        cout << "Not found";
    }

	loadFactor = (float) noOfStoredData / hashTableSize;
}

int hashFunctionDivisionMethod(int data, int hashTableSize)
{
    int hashValue = (abs(data)) % hashTableSize;
    return hashValue;
}

void printHashTable(string hashTable[], int hashTableSize)
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
    int numberOfData, hashTableSize, choice, storedDataCounter = 0, collisionCounter = 0;
	float loadFactor;
    string inputString;

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
		cout << "Picked hash table size: " << hashTableSize << endl;

		string *hashTable = new string[hashTableSize];

		for(int i = 0; i < hashTableSize; i++)
		{
			hashTable[i] = "-";
		}

		cout << "Enter strings: " << endl;

		for(int i = 0; i < numberOfData; i++)
		{
			cin >> inputString;
			addValueString(hashTable, inputString, hashTableSize, loadFactor, storedDataCounter, collisionCounter);
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
				string searchString;
				cout << "Enter a string to search in hashTable: ";
				cin >> searchString;

				cout << "Found at index: " << findValueString(hashTable, searchString, hashTableSize);

				cout << endl;
            }

			else if(choice == 2)
            {
                string delString;
				cout << "Enter a string to delete in hashTable: ";
				cin >> delString;

				deleteValueString(hashTable, delString, hashTableSize, loadFactor, storedDataCounter);
				cout << "Load Factor is: " << loadFactor << endl;
                cout << endl;

				printHashTable(hashTable, hashTableSize);
				cout << "Load Factor is: " << loadFactor << endl;
				cout << endl;
            }

			else if(choice == 3)
            {
                string addString;
                cout << "Enter a string to add in hashTable: ";
                cin >> addString;
                addValueString(hashTable, addString, hashTableSize, loadFactor, storedDataCounter, collisionCounter);
                printHashTable(hashTable, hashTableSize);
				cout << "Load Factor is: " << loadFactor << endl;
				cout << "Number of collisions: " << collisionCounter << endl;
                cout << endl;
            }

            else
            {
                break;
            }

			delete[] hashTable;
        }
	}
	else
    {
        cout << "Try again.";
    }
}

