#include <iostream>

using namespace std;

class Date
{
    int day, year;
    string month;
public:
    Date()
    {
        day = year = 0;
        month = "TBA";
    }

    void setDate()
    {
        cout << "Enter day: ";
        cin >> day;
        cout << "Enter month: ";
        cin >> month;
        cout << "Enter year: ";
        cin >> year;
    }

    void showDate()
    {
        cout << "Day: " << day << endl;
        cout << "Month: " << month << endl;
        cout << "Year: " << year << endl;
    }

    int getYear()
    {
        return year;
    }

    string getMonth()
    {
        return month;
    }
};
class Employee
{
    int employeeID;
    string name, department;
    Date dateOfJoining;
public:
    Employee()
    {
        employeeID = 0;
        name = department = "TBA";
    }
    Employee(int eID, string eName, string eDept)
    {
        employeeID = eID;
        name = eName;
        department = eDept;
    }

    bool operator==(int jYear)
    {
        if(dateOfJoining.getYear() == jYear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool operator==(string jMonth)
    {
        if(dateOfJoining.getMonth() == jMonth)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    string getName()
    {
        return name;
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

    emp.dateOfJoining.setDate();
}

ostream& operator<<(ostream& out, Employee emp)
{
    out << "Employee ID: " << emp.employeeID << endl;
    out << "Employee Name: " << emp.name << endl;
    out << "Employee Department: " << emp.department << endl;

    emp.dateOfJoining.showDate();

    return out;
}


int main()
{
    Employee e1, e2(4161, "S K Dey", "CSE");
    cout << "Give input for employee 1: " << endl;
    cin >> e1;
//Should ask employeeID, name, department.
//Then ask for date of joining related information.
    cout << "Complete information of the employees are: " << endl;
    cout<< e1 << e2 << endl;
    cout<<"Mr./Ms. "<< e1.getName();
    if(e1 == 2017 && e1 == "October")
        cout<<" joined the company in October 2017." << endl;
    else
        cout<<" did NOT joined the company in October 2017." << endl;
    return 0;
}
