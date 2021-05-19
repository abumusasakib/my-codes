#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

int sizeOfQueue(Node *head)
{
    int elementCounter = 0;

    for (Node* i  = head; i!=NULL; i = i->next)
    {
        elementCounter++;
    }

    return elementCounter;
}

bool isEmpty(Node *head)
{
    if(head == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int top(Node *head)
{
    if(isEmpty(head) == true)
    {
        return -1;
    }
    else
    {
        return head->data;
    }
}

void display(Node *head)
{
    if(isEmpty(head) == false)
    {
        for (Node* i = head; i!=NULL; i = i->next)
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

bool Enqueue(Node *&f, Node*& r, int value)
{
    Node *newN = new Node;
    newN->data = value;
    newN->next = NULL;

    if(f == NULL)
    {
        f = newN;
        r = newN;
    }

    else
    {
        r->next = newN;
        r = newN;
    }

    return true;
}
int Dequeue(Node *&f)
{
    Node *junk;
    int junkReturn = -1;

    if(isEmpty(f) == false)
    {
        junk = f;
        junkReturn = junk->data;
        f = f->next;
        delete junk;
    }
    else
    {
        cout << "Queue is Empty" << endl;
    }

    return junkReturn;
}

int main()
{
    Node *front = NULL, *rear = NULL;

    while(true)
    {
        cout << "To enqueue, enter 1" << endl;
        cout << "To dequeue, enter 2" << endl;
        cout << "To display queue, enter 3" << endl;
        cout << "To display top of queue, enter 4" << endl;
        cout << "To display if queue is empty, press 5" << endl;
        cout << "To display size of queue, press 6" << endl;
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

            if(Enqueue(front, rear, num) == true)
            {
                cout << "Enqueued" << endl;
            }

            else
            {
                cout << "Not Enqueued" << endl;
            }
            cout << endl;
        }

        if(c == 2)
        {
            cout << Dequeue(front) << " Dequeued" << endl;
        }

        if(c == 3)
        {
            display(front);
        }

        if(c == 4)
        {
            cout << top(front) << endl;
        }

        if(c == 5)
        {
            if(isEmpty(front) == true)
            {
                cout << "Queue is Empty" << endl;
            }

            else
            {
                cout << "Queue has elements" << endl;
            }
        }

        if(c == 6)
        {
            cout << sizeOfQueue(front) << endl;
        }

        if(c == -1)
        {
            break;
        }
    }
}

