#include <iostream>

using namespace std;

class Address
{
    int houseNo, roadNo, zipCode;
    string street, thana, district;
public:
    Address()
    {
        houseNo = roadNo = zipCode = 0;
        street = thana = district = "TBA";
    }

    void setAddress()
    {
        cout << "Enter house number: ";
        cin >> houseNo;
        cout << "Enter road number: ";
        cin >> roadNo;
        cout << "Enter zip code: ";
        cin >> zipCode;
        cin.ignore();
        cout << "Enter street: ";
        getline(cin, street);
        cout << "Enter thana: ";
        getline(cin, thana);
        cout << "Enter district: ";
        getline(cin, district);
    }

    void showAddress()
    {
        cout << endl;
        cout << "House number: " << houseNo << endl;
        cout << "Road number: " << roadNo << endl;
        cout << "Zip code: " << zipCode << endl;
        cout << "Street: " << street << endl;
        cout << "Thana: " << thana << endl;
        cout << "District: " << district << endl;
        cout << endl;
    }

    int getZipCode()
    {
        return zipCode;
    }
};
class Employee
{
    int employeeID;
    string name, department;
    Address empAddress;
public:
    Employee()
    {
        employeeID = 0;
        name = "TBA";
        department = "TBA";
    }

    Employee(int eID, string eName, string eDept)
    {
        employeeID = eID;
        name = eName;
        department = eDept;

        empAddress.setAddress();
    }

    bool operator==(int zip)
    {
        if(empAddress.getZipCode() == zip)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    friend void operator>>(istream& in, Employee& emp);
    friend ostream& operator<<(ostream& out, Employee emp);
};

void operator>>(istream& in, Employee& emp)
{
    cout << "Enter employee ID: ";
    in >> emp.employeeID;
	in.ignore();
    cout << "Enter employee name: ";
    getline(in, emp.name);
    cout << "Enter employee department: ";
    getline(in, emp.department);

    emp.empAddress.setAddress();
}

ostream& operator<<(ostream& out, Employee emp)
{
    out << "Employee ID: " << emp.employeeID << endl;
    out << "Employee Name: " << emp.name << endl;
    out << "Employee Department: " << emp.department << endl;

    emp.empAddress.showAddress();

    return out;
}

int main()
{
    Employee e1, e2(4161, "S K Dey", "CSE");
//parameterized constructor also ask for address details
    cout << "Give input for employee 1:" << endl;
    cin >> e1;
//Should ask employeeID, name, department.
//Then ask address related information.
    cout << "Complete information of the employees are:" << endl;
    cout << e1 << e2 << endl;
    cout <<"The employee e1 ";
    if(e1 == 1229)
    {
        cout << "lives in Bashundhara R/A." << endl;
    }

    else
    {
        cout << "does NOT lives in Bashundhara R/A." << endl;
    }
//comparing zipCode field
    return 0;
}
