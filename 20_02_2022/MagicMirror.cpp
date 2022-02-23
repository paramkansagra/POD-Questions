#include <bits/stdc++.h>

using namespace std;

int main(){

    string n;
    cin>>n;

    string first="",second="";
    for(int i=0;i<n.length();i++){
        if(i%2 == 0){
            first += n[i];
        }
        else{
            second += n[i];
        }
    }

    reverse(first.begin(),first.end());
    reverse(second.begin(),second.end());

    cout<<first<<endl<<second<<endl;

    return 0;
}