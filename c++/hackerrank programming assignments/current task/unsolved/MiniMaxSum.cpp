#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

void findMinMax(vector<int> array, int &minimum, int &maximum)
{
    maximum = 0, minimum = 999999999;

    for(int i = 0; i < array.size(); i++)
    {
        if(array[i] > maximum)
        {
            maximum = array[i];
        }

        if(array[i] < minimum)
        {
            minimum = array[i];
        }
    }
}


// Complete the miniMaxSum function below.
void miniMaxSum(vector<int> arr) 
{
    vector<int> sumVector;
    int excludeIndex = 0, sum = 0;
    
    int i = 0, sumI = 0;
    while(i < arr.size())
    {
        if(sumI == excludeIndex)
        {
            excludeIndex++;
            continue;
        }
        
        sum = sum + arr[sumI];
        sumVector.push_back(sum);
        sum = 0;
        sumI = 0;
        
        i++;
        sumI++;
    }
    
    int maxSum, minSum;
    
    findMinMax(sumVector, minSum, maxSum);
    
    cout << minSum << " " << maxSum;
}

int main()
{
    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
