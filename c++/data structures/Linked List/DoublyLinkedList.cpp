#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};

void add(Node *&dll, Node *&tll, int value)
{
    Node *newNode = new Node;
    newNode->next = NULL;
    newNode->prev = NULL;
    newNode->data = value;

    if (dll == NULL)
    {
        dll = newNode;
        tll = newNode;
    }
    else
    {

        tll->next = newNode;
        newNode->prev = tll;
        tll = newNode;
    }
}

void addAfter(Node* sll, Node* &tll, int svalue, int newval)
{
    Node *newNode = new Node;
    newNode->next = NULL;
    newNode->prev = NULL;
    newNode->data = newval;
    Node *cur = sll;
    while(cur!=NULL)
    {
        if (cur->data == svalue)
            break;
        cur = cur->next;
    }

    if (cur != NULL)
    {
        newNode->next = cur->next;
        newNode->prev = cur;
        if(cur->next != NULL)
            cur->next->prev = newNode;
        cur->next = newNode;

        if (cur == tll)
            tll = newNode;
    }
    else
    {
        cout << "Not found";
    }

}

void deleteL(Node *&sll, Node *&tll, int value)
{
    Node* i;
    for (i = sll; i !=NULL; i = i->next)
    {
        if (i->data == value)
            break;
    }
    Node *junk;
    if(i!=NULL)
    {
        if (i==sll)
        {
            junk = sll;
            junk->next->prev = NULL;
            sll = junk->next;
        }
        else
        {
            junk = i;
            junk->prev->next = junk->next;
            if(junk->next != NULL)
            {
                junk->next->prev = junk->prev;
            }
            else
            {
                tll = junk->prev;
            }
            delete junk;

        }
    }
    else
    {
        cout << "Not found";
    }
}

void displayL(Node* dll, Node* tll, int option)
{
    if (option==1)
    {
        Node* i = dll;
        while (i!=NULL)
        {
            cout << i->data << ",";
            i = i->next;
        }
        cout << endl;
    }
    else
    {
        Node* i = tll;
        while (i!=NULL)
        {
            cout << i->data << ",";
            i = i->prev;
        }
        cout << endl;
    }
}

int main()
{
    Node* Head = NULL, *Tail = NULL;

    for (int i = 0; i < 10; i++)
        add(Head, Tail, 10*i + 10);

    deleteL(Head,Tail,100);

    //int option;
    //cin >> option;
    displayL(Head, Tail, 2);
}
