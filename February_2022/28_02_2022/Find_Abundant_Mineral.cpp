#include <iostream>
#include <string>

using namespace std;

int main(){

    int n;
    cin>>n;

    string s = "";
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        s += temp;
    }

    int maxx = 0;
    char d;
    for(int i=0;i<s.length();i++){
        int count = 0;
        for(int j=0;j<s.length();j++){
            if(s[i] == s[j]) count++;
        }
        if(count > maxx){
            maxx = count;
            d = s[i];
        }
    }
    cout<<d<<endl;

    return 0;
}