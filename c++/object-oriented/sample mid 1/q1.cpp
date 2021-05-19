#include <iostream>

using namespace std;

class Truck
{
private:
    string engineType;
    string model;
    float price;
public:
    bool setTruck()
    {
        cout << "Enter engine type: ";
        cin >> engineType;
        cout << "Enter model: ";
        cin >> model;
        cout << "Enter price: ";
        cin >> price;

        return true;

    }

    void showTruck()
    {
        cout << "Engine type: " << engineType << endl;
        cout << "Model: " << model << endl;
        cout << "Price: " << price << endl;

    }
    friend void addATruckToTruckArr(Truck &tArr);
    friend ostream& operator<<(ostream& out, Truck t);
};

void addATruckToTruckArr(Truck &tArr)
{
    if(tArr.setTruck() != true)
    {
        cout << "Unable to set";
    }
}
ostream& operator<<(ostream& out, Truck t)
{
    t.showTruck();
    return out;
}
int main()
{
    Truck *truckArr;
    int noOfTrucks, choice, i;
    cout<<"How many trucks? ";
    cin>> noOfTrucks;
    truckArr = new Truck[noOfTrucks];
    for(int i = 0; i < noOfTrucks; i++)
    {
        addATruckToTruckArr(truckArr[i]);
    }

    for(i=0; i<noOfTrucks; i++)
        cout<<truckArr[i]<<endl;

    return 0;
}
