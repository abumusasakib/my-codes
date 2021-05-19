#include <iostream>
using namespace std;

int wordCount (string str)
{
    int word = 1;

    for(int i = 0; i < str.size(); ++i)
	{
        if(str[i] == ' ')
		{
            word = word + 1;
        }
    }

    return word;
}

int main()
{
    string sentence;

    cout << "Enter the sentence: ";
    getline(cin, sentence);

    cout << "Number of words: " << wordCount(sentence);
}
