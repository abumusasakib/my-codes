#include <iostream>

using namespace std;

class Stack
{
private:
    int *valPtr;
    int capacity, top;
public:
    Stack(int sze)
    {
        capacity = sze;
        top = -1;
        valPtr = new int[capacity];
    }
    void push(int num)
    {
        if(top>capacity)
        {
            return;
        }
        top++;
        valPtr[top] = num;
    }
    float getAvg()
    {
        float sum = 0;
        float avg;
        for(int i = 0; i <= top; i++)
        {
            sum = sum + valPtr[i];
        }

        int noOfElementsInStack = top + 1;
        avg = sum / noOfElementsInStack;

        return avg;
    }
    friend ostream& operator<<(ostream &out, Stack s);
};
ostream& operator<<(ostream &out, Stack s)
{
    for(int i = s.top; i >= 0; i--)
    {
        out << s.valPtr[i] << " ";
    }

    return out;
}
int main()
{
    Stack stk1(10); //stack capacity is 10
    stk1.push(30);
    stk1.push(25);
    stk1.push(15);

    cout<<"All the popped elements of the stack are:" <<stk1<<endl;
    cout<<"Average of the stack elements is:"<<stk1.getAvg()<<endl;
    return 0;
}
