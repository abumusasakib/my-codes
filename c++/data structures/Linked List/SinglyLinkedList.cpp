#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

bool add(Node *&sll, int value)
{
    Node *newN;
    newN = new Node;
    newN->data = value;
    newN->next = NULL;

    if (sll == NULL)
    {
        sll = newN;
    }
    else
    {
        Node *p;
        for (Node* i = sll; i !=NULL; i = i->next)
        {
            p = i;
        }

        p->next = newN;
    }
    return true;
}

void printL(Node *sll)
{
    for ( Node* i  = sll; i!=NULL; i = i->next)
    {
        cout << i->data << ", ";
    }

    cout << endl;
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

Node* searchLAndReturnNode(Node *sll, int value)
{
	Node* i;
    for (i = sll; i !=NULL; i = i->next)
    {
        if (i->data == value)
        {
            break;
        }
    }
    return i;
}

void changeHead(Node* sll, int value)
{
    sll->data = value;
}

int changeEvenToOdd(Node* sll)
{
    int c = 0;
    for ( Node* i  = sll; i !=NULL; i = i->next)
    {
        if (i->data %2 == 0)
        {
            i->data = 1;
            c++;
        }
    }

    return c;
}

void addSort(Node *&sll, int value)
{
    Node *newN;
    newN = new Node;
    newN->data = value;
    newN->next = NULL;

    Node* i, *prev = NULL;;
    for (i = sll; i !=NULL; i= i->next)
    {

        if (i->data > value)
            break;

        prev = i;

    }

    if (prev == NULL)
    {
        newN->next = i;
        sll = newN;

    }
    else
    {
        Node* p = prev->next;
        prev->next = newN;
        newN->next = p;
    }
}

void deleteL(Node *&sll, int value)
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
    }
    else
    {
        cout << "Not found";
    }
}

void deleteDuplicates(Node *&sll, int value)
{
    //excluding 1st duplicate
    Node* i = sll, *prev = NULL, *tmp = NULL;
    int k = 0;
    while (i !=NULL)
    {
        if (i->data == value)
        {
            k++;
            if (k > 1) //to exclude 1st duplicate
            {
                Node *junk;
                if(i!=NULL)
                {
                    tmp = i->next;
                    if (i==sll)
                    {
                        junk = sll;
                        sll = sll->next;
                    }

                    else
                    {
                        junk = i;
                        prev->next = i->next;
                    }

                    delete junk;
                    i = tmp;
                }
            }
            else
            {
                prev = i;
                i = i->next;
            }
        }

        else
        {
            prev = i;
            i = i->next;
        }
    }
}

void deleteLinkedList(Node *&sll)
{
    Node* i = sll, *prev = NULL, *tmp = NULL;
    while (i !=NULL)
    {
        Node *junk;
        Node *junk;
        if(i!=NULL)
        {
            tmp = i->next;
            if (i==sll)
            {
                junk = sll;
                sll = sll->next;
            }

            else
            {
                junk = i;
                prev->next = i->next;
            }
            delete junk;
            i = tmp;
        }
    }
}

int main()
{
    srand(time(NULL));

    Node *head   = NULL;

    for (int i = 0; i < 10; i++)
    {
        add(head, rand()%100);

    }

    printL(head);

    int n;
    cout << "Delete number:";
    cin >>n;

    deleteL(head, n);
    printL(head);
}
