#include <iostream>
#include <string>
#include <vector>

using namespace std;

int countVowel(string s)
{
    string vowel = "AEIOU";
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (vowel.find(s[i]) != string::npos)
        {
            count += 1;
        }
    }
    return count;
}

int main()
{

    string n;

    getline(cin, n);

    vector<string> arr;

    string word = "";

    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] != ' ')
        {
            word += n[i];
        }
        else
        {
            arr.push_back(word);
            word = "";
        }
    }

    arr.push_back(word);

    for (int i = 0; i < arr.size(); i++)
    {
        int l = 0;
        for (int j = 0; j < arr[i].size(); j++)
        {
            for (int k = 0; k < arr.size(); k++)
            {
                if (arr[i] != arr[k] && arr[k].find(arr[i][j]) != string::npos)
                {
                    if (countVowel(arr[i]) == countVowel(arr[k]))
                    {
                        l++;
                    }
                }
            }
        }

        if (l == arr[i].size())
        {
            cout << arr[i];
            exit(0);
        }
    }

    return 0;
}