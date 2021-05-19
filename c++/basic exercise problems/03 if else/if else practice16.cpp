#include <iostream>
using namespace std;

int main()
{
    //position of a point
	float x, y;

    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    if(x == 0 && y == 0)
    {
        cout << "Origin" << endl;
    }
    else if(y == 0)
    {
        cout << "X-axis" << endl;
    }
    else if(x == 0)
    {
        cout << "Y-axis" << endl;
    }
    else if(x > 0 && y > 0)
    {
        cout << "1st quadrant" << endl;
    }
    else if(x < 0 && y > 0)
    {
        cout << "2nd quadrant" << endl;
    }
    else if(x < 0 && y < 0)
    {
        cout << "3th quadrant" << endl;
    }
    else                               // (x > 0 && y < 0)
    {
        cout << "4th quadrant" << endl; 
    }
}
