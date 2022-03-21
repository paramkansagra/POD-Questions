#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string reversed(string n){
    reverse(n.begin(),n.end());
    return n;
}

int main(){
    
    string n;
    cin>>n;

    string s = "";
    for(int i=0;i<n.length();i++){
        if(isalpha(n[i])){
            s += n[i];
        }
        else{
            bool rev = true;
            string x = "";
            for(int j=0;j<n[i]-'0';j++){
                if(rev){
                    x += reversed(s);
                    rev = false;
                }   
                else{
                    x += s;
                    rev = true;
                }
            }
            s += x;
        }
    }

    cout<<s<<endl;

    return 0;
}