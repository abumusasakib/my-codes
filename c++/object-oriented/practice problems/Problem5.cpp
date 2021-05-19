#include <iostream>

using namespace std;

class HardDisk
{
    int rpm, capacityInGB;
public:
    HardDisk()
    {
        rpm = 0;
        capacityInGB = 0;
    }
    void setHDD()
    {
        cout << "Enter RPM: ";
        cin >> rpm;
        cout << "Enter capacity in GB: ";
        cin >> capacityInGB;
    }

    void showHDD()
    {
        cout << "RPM: " << rpm << endl;
        cout << "Capacity: " << capacityInGB << " GB" << endl;
    }

    int getCapacityInGB()
    {
        return capacityInGB;
    }
};

class Computer
{
    string brand;
    float speedInGhz, price;
    int noOfHDD;
    HardDisk* hddArr;
public:
    Computer()
    {
        brand = "TBA";
        speedInGhz = price = 0.0;
        noOfHDD = 0;
        hddArr = nullptr;
    }
    void setCompInfo()
    {
        cin.ignore();
        cout << "Enter brand: ";
        getline(cin, brand);
        cout << "Enter speed in GHz: ";
        cin >> speedInGhz;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter number of HDDs: ";
        cin >> noOfHDD;

        hddArr = new HardDisk[noOfHDD];

        for(int i = 0; i < noOfHDD; i++)
        {
            hddArr[i].setHDD();
        }
    }

    void showCompInfo()
    {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speedInGhz << " GHz" << endl;
        cout << "Price: " << price << endl;
        cout << "Number of HDDs: " << noOfHDD << endl;

        for(int i = 0; i < noOfHDD; i++)
        {
            hddArr[i].showHDD();
        }

    }

    int getNumOfHDD()
    {
        return noOfHDD;
    }

    HardDisk getHddArr(int index)
    {
        return hddArr[index];
    }
};
class ComputerLab
{
    string roomNo;
    int noOfComputer;
    Computer* compArr;

public:
    ComputerLab()
    {
        roomNo = "TBA";
        noOfComputer = 0;
        compArr = nullptr;
    }

    ComputerLab& setLabInfo()
    {
        cout << "Enter room number: ";
        cin >> roomNo;
        cout << "Enter number of computers: ";
        cin >> noOfComputer;

        compArr = new Computer[noOfComputer];

        for(int i = 0; i < noOfComputer; i++)
        {
            compArr[i].setCompInfo();
        }

        return *this;

    }

    void showLabInfo()
    {
        cout << "Room number: " << roomNo << endl;
        cout << "Number of computers: " << noOfComputer << endl;

        for(int i = 0; i < noOfComputer; i++)
        {
            compArr[i].showCompInfo();
        }
    }

    int getNumOfComputers()
    {
        return noOfComputer;
    }

    Computer getCompArr(int index)
    {
        return compArr[index];
    }

    bool operator>=(int compNum)
    {
        if(this->noOfComputer >= compNum)
        {
            return true;
        }
        else
        {
            return false;
        }
    }


};

void operator+=(int &storage, ComputerLab lab)
{
    for(int i = 0; i < lab.getNumOfComputers(); i++)
    {
        for(int j = 0; j < lab.getCompArr(i).getNumOfHDD(); j++)
        {
            storage += lab.getCompArr(i).getHddArr(j).getCapacityInGB();
        }
    }
}

int main()
{
    ComputerLab* labs;
    int n, i;
    cout<<"How many computer labs? ";
    cin>>n;
    labs = new ComputerLab[n];
    int totalStorageOfAllLabsInGB = 0;
    for(i=0; i<n; i++)
    {
        labs[i].setLabInfo().showLabInfo();
        totalStorageOfAllLabsInGB += labs[i];
        cout<<"Total Storage of ALL Labs combined is: "<< totalStorageOfAllLabsInGB <<" GB"<<endl;
        if (labs[i] >= 30)
            cout<<i<<"-th Lab is a big computer Lab."<<endl;
        else
            cout<<i<<"-th Lab is a small computer Lab."<<endl;

    }
    return 0;
}
