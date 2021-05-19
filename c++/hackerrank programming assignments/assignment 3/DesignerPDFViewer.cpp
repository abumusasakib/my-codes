//https://www.hackerrank.com/challenges/designer-pdf-viewer/problem
#include <bits/stdc++.h>

using namespace std;


int maximum(int num1, int num2)
{
    if(num1 > num2)
    {
        return num1;
    }
    
    else
    {
        return num2;
    }
}

int designerPdfViewer(vector<int> h, string word) 
{
    int wordLen = word.length(), letterDiff, letterHeight, tallestLetter = 0, result;
    
    for(int i = 0; i < wordLen; i++)
    {
        letterDiff = word[i] - 'a';
        letterHeight = h[letterDiff];
        tallestLetter = maximum(tallestLetter, letterHeight);
    }

    result = wordLen * tallestLetter;
    
    return result;
}

int main()
{
    vector<int> h{1, 3, 1, 3, 1, 4, 1, 3, 2, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
	
    string word = "abc";

    int result = designerPdfViewer(h, word);

    cout << result << "\n";

    return 0;
}