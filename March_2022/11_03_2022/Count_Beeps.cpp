#include <iostream>
#include <string>

using namespace std;

int main(){

    string n;
    cin>>n;

    int count = 0;

    int length = n.length();

    for(int i=0;i<length;i++){
        if(n[length-1] == '0'){
            count++;
        }
        string x = n[length-1] + n.substr(0,length-1);
        n = x;
    }

    cout<<count;

    return 0;
}