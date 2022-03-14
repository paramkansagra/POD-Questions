#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    string n,s;
    cin>>n;

    s = n;
    sort(s.begin(),s.end());

    for(int i=0;i<s.length();i++){
        if(s[i] == n[i]){
            cout<<i+1<<endl;
        }
    }

    return 0;
}