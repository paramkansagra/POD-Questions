#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){

    string n;
    cin>>n;

    cout<<count(n.begin(),n.end(),'0'); 

    return 0;
}