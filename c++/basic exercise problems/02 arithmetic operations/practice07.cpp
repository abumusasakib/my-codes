#include <iostream>
using namespace std;

int main()
{
    int weeks, days, remainingDaysfromWeeks, hours, remainingHoursfromDays;

    cout << "Enter number of hours: ";
    cin >> hours;

    days = hours / 24;
    remainingHoursfromDays = hours % 24;
    weeks = days / 7;
    remainingDaysfromWeeks = days % 7;

    cout << "The remaining weeks, days and hours: " << weeks << " weeks, " << remainingDaysfromWeeks << " days and " << remainingHoursfromDays << " hours." << endl;

    return 0;
}
