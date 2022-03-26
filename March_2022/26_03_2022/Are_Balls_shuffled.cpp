#include <iostream>
#include <vector>

using namespace std;

bool compare(vector<string> string1,vector<string> string2,int n){
    bool flag = true;
    for(int i=0;i<n;i++){
        if(string1[i] != string2[i]){
            flag = false;
        }
    }
    return flag;
}

int main(){
    int n;
    vector<string> string1;
    vector<string> string2;

    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        string1.push_back(temp);
    }

    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        string2.push_back(temp);
    }

    bool flag = false;
    for(int i=0;i<n;i++){
        if(compare(string1,string2,n)){
            flag = true;
        }
        string temp = string1[n-1];
        string1.pop_back();
        string1.insert(string1.begin(),temp);
    }

    if(flag){
        cout<<"Not Shuffled"<<endl;
    }
    else{
        cout<<"Shuffled"<<endl;
    }

    return 0;
}