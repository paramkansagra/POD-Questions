#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){

    int n;
    cin>>n;

    vector<string> data;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        data.push_back(temp);
    }

    string word;
    cin>>word;

    string code_word = "";
    for(int i=0;i<4;i++){
        int temp;
        cin>>temp;
        code_word += word[temp-1];
    }

    bool flag = false;

    for(int i=0;i<n;i++){
        if(data[i] == code_word){
            flag = true;
            break;
        }
    }

    if(flag){
        cout<<"Valid"<<endl;
    }
    else{
        cout<<"Invalid"<<endl;
    }

    return 0;
}