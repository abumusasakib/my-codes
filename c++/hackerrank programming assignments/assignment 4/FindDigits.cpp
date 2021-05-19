#include <bits/stdc++.h>

using namespace std;

vector<int> getLastDigits(int num)
{
    string numString = to_string(num);
    vector<int> digits;
    int numStringSize = numString.size(), digit;
    
    for(int i = 0; i < numStringSize; i++)
    {
        digit = numString[i] - '0';
        digits.push_back(digit);
    }
    
    return digits;
}

int findDigits(int n) 
{
    vector<int> num;
    num = getLastDigits(n);
    int numSize = num.size(), divCounter = 0;
    
    for(int i = 0; i < numSize; i++)
    {
        if((num[i] != 0) && (n % num[i] == 0))
        {
            divCounter++;
        }
    }
    
    return divCounter;

}

int main()
{
    int t = 2;
	int nArr = {12, 1012}

    for (int i = 0; i < t; i++) 
	{
        int n = nArr[i];

        int result = findDigits(n);

        cout << result << "\n";
    }

    return 0;
}
