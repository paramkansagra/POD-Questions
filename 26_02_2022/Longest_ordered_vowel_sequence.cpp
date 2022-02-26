#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isCorrect(string s){
    string vovels = "aeiou";
    int ptr = 0;
    for(int i=0;i<s.length();i++){
        if(ptr == 0){
            if(vovels.find(s[i]) != string::npos){
                ptr = vovels.find(s[i]);
            }
        }
        else{
            if(vovels.find(s[i]) != string::npos){
                if(vovels.find(s[i]) < ptr){
                    return false;
                }
                else{
                    ptr = vovels.find(s[i]);
                }
            }
        }
    }
    return true;
}

int maxx(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

void maxx_unique(vector<string> words){
    string vovels = "aeiou";
    int maxx = 0;
    vector<string> data;
    for(int i=0;i<words.size();i++){
        int count = 0;
        string x = "";
        for(int j=0;j<words[i].size();j++){
            if(vovels.find(words[i][j]) != string::npos){
                if(x.find(words[i][j]) == string::npos){
                    x += words[i][j];
                    count++;
                }
            }
        }
        if(count>maxx){
            data.clear();
            data.push_back(words[i]);
            maxx = count;
        }
        else if(count == maxx){
            data.push_back(words[i]);
        }
    }

    for(int i=0;i<data.size();i++){
        cout<<data[i]<<endl;
    }

}

int main(){


    // getting the string and splitting into spaces and converting it to words
    string s;
    getline (cin, s);

    vector<string> words;

    string word = "";
    for(auto i:s){
        if(i != ' '){
            word += i;
        }
        else{
            words.push_back(word);
            word = "";
        }
    }

    // finding all the words that are correct

    vector<string> correct_words;
    for(int i=0;i<words.size();i++){
        if(isCorrect(words[i])){
            correct_words.push_back(words[i]);
        }
    }

    // finding the max one and printing its size
    maxx_unique(correct_words);

    return 0;
}