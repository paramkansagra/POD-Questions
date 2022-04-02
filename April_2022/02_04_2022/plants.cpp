#include <iostream>

using namespace std;

int main(){

    int p,s,days;
    cin>>p>>s>>days;

    int x = 1;
    int w = 0;
    
    while(x<=days){
        if((x+2)<=days){
            p += s;
            w += (p-s);
        }
        else{
            w += p;
        }
        x += 2;
    }

    cout<<p<<endl;
    cout<<w<<endl;

    return 0;
}