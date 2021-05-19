//https://www.hackerrank.com/challenges/time-conversion/problem
#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s)
{
    string result;

    string time[3];
    int hms[3];
    stringstream getTime(s);
    string splittedPart;
    int counter = 0;
    while(getline(getTime,splittedPart,':'))
    {
        if(counter == 3)
        {
            break;
        }
        time[counter] = splittedPart;
        counter++;
    }

    for(int i = 0; i < 3; i++)
    {
        hms[i] = stoi(time[i]);
    }

    int stringSize = s.size();

    for(int i = 0; i < stringSize; i++)
    {
    if(s[8] == 'P' && hms[0] < 12)
        {
            hms[0] = hms[0] + 12;
        }

        if(s[8] == 'A' && hms[0] == 12)
        {
            hms[0] = 0;
        }
    }

    string hourString, minuteString, secondString;

    if(hms[0] < 10)
    {
        hourString = "0" + to_string(hms[0]);
    }
    else
    {
        hourString = to_string(hms[0]);
    }

    if(hms[1] < 10)
    {
        minuteString = "0" + to_string(hms[1]);
    }
    else
    {
        minuteString = to_string(hms[1]);
    }

    if(hms[2] < 10)
    {
        secondString = "0" + to_string(hms[2]);
    }
    else
    {
        secondString = to_string(hms[2]);
    }

    result = hourString + ":" + minuteString + ":" + secondString;

    return result;
}


int main()
{
    string s = "07:05:45PM";

    string result = timeConversion(s);

    
    cout << result << "\n";

    return 0;
}
