#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

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
            string temp = s;
            for(int j=0;j<n[i]-'0';j++){
                reverse(temp.begin(),temp.end());
                x += temp;
            }
            s += x;
        }
    }

    cout<<s<<endl;

    return 0;
}