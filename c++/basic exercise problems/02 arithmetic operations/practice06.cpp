#include <iostream>
using namespace std;

int main()
{
    int days, remainingDayfromYears, remainingDayfromMonths, months, years;

    cout << "Enter number of days: ";
    cin >> days;

    years = days / 365;
    remainingDayfromYears = days % 365;
    months = remainingDayfromYears / 30;
    remainingDayfromMonths = remainingDayfromYears % 30;

    cout << "Into months and years: " << years << " years " << months << " months " << remainingDayfromMonths << " days." << endl;
}
