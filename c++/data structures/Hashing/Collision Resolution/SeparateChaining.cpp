#include <cstdlib>
#include <ctime>
#include <cmath>
#include <vector>
#include "sllFunctions.h"

//Please add sllFunctions.h in the same folder as this file.

int hashFunctionDivisionMethod(int data, int hashTableSize)
{
    int hashValue = (abs(data)) % hashTableSize;
    return hashValue;
}

void addValueSeparateChaining(Node**& hashTable, int data, int hashTableSize, float &loadFactor, int &noOfStoredData, int &collisionCounter)
{
    int hashValue = hashFunctionDivisionMethod(data, hashTableSize);

    if(Push(hashTable[hashValue], data) == true)
	{
		noOfStoredData++;
	}

	else
	{
		collisionCounter++;
	}

    loadFactor = (float) noOfStoredData / hashTableSize;
}

int findValueSeparateChaining(Node** hashTable, int data, int hashTableSize)
{
    int hashValue = hashFunctionDivisionMethod(data, hashTableSize);

    if(searchL(hashTable[hashValue], data) == true)
    {
        return hashValue;
    }

    else
    {
        return -1;
    }
}

void deleteValueSeparateChaining(Node**& hashTable, int data, int hashTableSize, float &loadFactor, int &noOfStoredData)
{
    int hashValue = hashFunctionDivisionMethod(data, hashTableSize);

    if(deleteL(hashTable[hashValue], data) == true)
    {
        noOfStoredData--;
    }
    else
    {
        cout << "Not found" << endl;
    }

    loadFactor = (float) noOfStoredData / hashTableSize;
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

void display(Node **sll, int length)
{
	for(int i = 0 ; i < length;i++)
    {
        cout << "Index # " << i <<": ";
        displayEachNode(sll[i]);
    }
}

void store(Node **sll, int length, vector<int> &nodeStorage)
{
	for(int i = 0 ; i < length;i++)
    {
        storeEachNode(sll[i], nodeStorage);
    }
}

//void rehash(Node**& oldHashTable, int oldHashTableSize, Node**& newHashTable, int &newHashTableSize)
//{
//    float newLoadFactor;
//    int newStoredCounter = 0, newCollisionCounter = 0;
//    vector<int> storage;
//    store(oldHashTable, oldHashTableSize, storage);
//
//    newHashTableSize = oldHashTableSize * 2;
//    newHashTable = new Node* [newHashTableSize];
//
//    for(int i = 0; i < storage.size(); i++)
//    {
//        int data = storage[i];
//        addValueSeparateChaining(newHashTable, data, newHashTableSize, newLoadFactor, newStoredCounter, newCollisionCounter);
//    }
//
//     display(newHashTable, newHashTableSize);
//}

int main()
{
    srand(time(0));

    int numberOfData, hashTableSize, choice, randomNumbers, storedDataCounter = 0, collisionCounter = 0;
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
		cout << "Picked hash table size: " << hashTableSize << endl;

		Node **nodeArray = new Node* [hashTableSize];

		for(int i = 0; i < hashTableSize; i++)
		{
			nodeArray[i] = NULL;
		}

		cout << "The generated random numbers are: ";

		for(int i = 0; i < numberOfData; i++)
		{
			randomNumbers = rand() % 1000;
			cout << randomNumbers << " ";
			addValueSeparateChaining(nodeArray, randomNumbers, hashTableSize, loadFactor, storedDataCounter, collisionCounter);
		}

		cout << endl;

		display(nodeArray, hashTableSize);

		cout << endl;
		cout << "Load Factor is: " << loadFactor << endl;
		cout << "Number of collisions: " << collisionCounter << endl;
		cout << endl;

//		Node** newNodeArray;
//		int newNodeArraySize;
//		if(loadFactor >= 0.6)
//        {
//            cout << "Do you want to rehash? Enter 1 for yes and any other for no. ";
//            cin >> choice;
//
//            if(choice == 1)
//            {
//                rehash(nodeArray, hashTableSize, newNodeArray, newNodeArraySize);
//                cout << "Load Factor is: " << loadFactor << endl;
//                cout << "Number of collisions: " << collisionCounter << endl;
//            }
//        }

		while(true)
		{
			int choice;
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

				cout << "Found at index: " << findValueSeparateChaining(nodeArray, searchVal, hashTableSize);

				cout << endl;
            }
			else if(choice == 2)
            {
				int delVal;
				cout << "Enter a value to delete in hashTable: ";
				cin >> delVal;

				deleteValueSeparateChaining(nodeArray, delVal, hashTableSize, loadFactor, storedDataCounter);

				display(nodeArray, hashTableSize);
				cout << "Load Factor is:" << loadFactor << endl;
				cout << endl;
            }

			else if(choice == 3)
            {
                int addVal;
                cout << "Enter a value to add in hashTable: ";
                cin >> addVal;
                addValueSeparateChaining(nodeArray, addVal, hashTableSize, loadFactor, storedDataCounter, collisionCounter);
                display(nodeArray, hashTableSize);
				cout << "Load Factor is: " << loadFactor << endl;
				cout << "Number of collisions: " << collisionCounter << endl;
                cout << endl;
            }

            else
            {
                break;
            }
		}

		delete[] nodeArray;
	}

	else
    {
        cout << "Try again.";
    }
}
