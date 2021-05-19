#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

int sizeOfStack(Node *sll)
{
    int elementCounter = 0;

    for (Node* i  = sll; i!=NULL; i = i->next)
    {
        elementCounter++;
    }

    return elementCounter;
}

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

int top(Node *sll)
{
    if(isEmpty(sll) == true)
    {
        return -1;
    }
    else
    {
        return sll->data;
    }
}

void display(Node *sll)
{
    if(isEmpty(sll) == false)
    {
        for (Node* i  = sll; i!=NULL; i = i->next)
        {
            cout << i->data << ", ";
        }

        cout << endl;
    }

    else
    {
        cout << "Stack is Empty" << endl;
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

int Pop(Node *&sll)
{
    Node *junk;
    int junkReturn = -1;

    if(isEmpty(sll) == false)
    {
        junk = sll;
        junkReturn = junk->data;
        sll = sll->next;
        delete junk;
    }
    else
    {
        cout << "Stack is Empty" << endl;
    }

    return junkReturn;
}
int main()
{
    Node *head = NULL;

    while(true)
    {
        cout << "To push, enter 1" << endl;
        cout << "To pop, enter 2" << endl;
        cout << "To display stack, enter 3" << endl;
        cout << "To display top of stack, enter 4" << endl;
        cout << "To display if stack is empty, press 5" << endl;
        cout << "To display size of stack, press 6" << endl;
        cout << "To exit enter -1" << endl;
        cout << endl;

        cout << "Enter your choice: ";
        int c;
        cin >> c;
        cout << endl;

        if(c == 1)
        {
            int num;
            cout << "Enter number to push: ";
            cin >> num;

            if(Push(head, num) == true)
            {
                cout << "Pushed" << endl;
            }

            else
            {
                cout << "Not Pushed" << endl;
            }
            cout << endl;
        }

        if(c == 2)
        {
            cout << Pop(head) << " Popped" << endl;
        }

        if(c == 3)
        {
            display(head);
        }

        if(c == 4)
        {
            cout << top(head) << endl;
        }

        if(c == 5)
        {
            if(isEmpty(head) == true)
            {
                cout << "Stack is Empty" << endl;
            }

            else
            {
                cout << "Stack has elements" << endl;
            }
        }

        if(c == 6)
        {
            cout << sizeOfStack(head) << endl;
        }

        if(c == -1)
        {
            break;
        }
    }
}

