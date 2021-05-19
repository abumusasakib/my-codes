//https://www.hackerrank.com/challenges/grading/problem
#include <bits/stdc++.h>

using namespace std;


int findMultiple(int num)
{
    while(num % 5 != 0)
    {
        num++;
    }

    return num;
}

vector<int> gradingStudents(vector<int> grades)
{
    int result;
    for(int i = 0; i < grades.size(); i++)
    {
        if(grades[i] >= 38)
        {
            result = findMultiple(grades[i]);

            if(abs(result-grades[i]) < 3)
            {
                grades[i] = result;
            }
        }
    }

    return grades;

}

int main()
{
    vector<int> grades{73,67,38,33};


    vector<int> result = gradingStudents(grades);

 
    for (int i = 0; i < result.size(); i++) {
        cout << result[i];
		
		if (i != result.size() - 1) {
            cout << "\n";
        }
    }



    cout << "\n";


    return 0;
}