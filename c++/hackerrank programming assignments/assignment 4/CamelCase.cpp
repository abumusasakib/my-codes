#include <bits/stdc++.h>

using namespace std;

string upperOrLower(char c)
{
    string charStatus = "unknown";
    if(c >= 'A' && c <= 'Z')
    {
        charStatus = "upper";
    }
    else if(c >= 'a' && c <= 'z')
    {
        charStatus = "lower";
    }
    else
    {
        charStatus = "neither";
    }
    
    return charStatus;
}
int camelcase(string s) 
{
    int sSize = s.size(), wordCount = 1;
    
    for(int i = 0; i < sSize; i++)
    {
        if((i < sSize) && (upperOrLower(s[i]) == "lower" && upperOrLower(s[i+1]) == "upper"))
        {
            wordCount++;
        }
    }
    
    return wordCount;

}

int main()
{
    string s = "saveChangesInTheEditor";

    int result = camelcase(s);

    cout << result << "\n";

    return 0;
}
