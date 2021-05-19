#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

bool isEmpty(Node *sll)
{
    if(sll == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Push(Node *&sll, int value)
{
    Node *newN;
    newN = new Node;
    newN->data = value;
    newN->next = NULL;

    if (isEmpty(sll) == true)
    {
        sll = newN;

    }
    else
    {
        newN->next = sll;
        sll = newN;
    }

    return true;

}

bool searchL(Node *sll, int value)
{
    bool found = false;
    for (Node* i = sll; i !=NULL; i = i->next)
    {
        if (i->data == value)
        {
            found = true;
            break;
        }
    }
    return found;
}


bool deleteL(Node *&sll, int value)
{
    Node* i, *prev = NULL;
    for (i = sll; i !=NULL; i = i->next)
    {
        if (i->data == value)
            break;
        prev = i;
    }

    Node *junk;
    if(i!=NULL)
    {
        if (i==sll)
        {
            junk = sll;
            sll = sll->next;
            delete junk;
        }

        else
        {
            junk = i;
            prev->next = i->next;
            delete junk;
        }

        return true;
    }
    else
    {
        return false;
    }
}

void displayEachNode(Node *sll)
{
    if(isEmpty(sll) == false)
    {
        for (Node* i  = sll; i!=NULL; i = i->next)
        {
            cout << i->data << " ";
        }

        cout << endl;
    }

    else
    {
        cout << "Empty" << endl;
    }
}

void storeEachNode(Node *sll, vector<int> &nodes)
{
    if(isEmpty(sll) == false)
    {
        for (Node* i  = sll; i!=NULL; i = i->next)
        {
            nodes.push_back(i->data);
        }
    }
}
