#include <iostream>
#include <string>

using namespace std;

int main(){

    string a,b,f="";

    cin>>a>>b;

    f += a.substr(0,a.length()-b.length());

    int j = a.length()-b.length();

    for(int i=0;i<b.length();i++,j++){
        int x = a[j];
        int y = b[i];

        char temp;

        if(x == y){
            temp = x;
            f += temp;
        }
        else if(x>y){
            temp = x-y+96;
            f += temp;
        }
        else{
            temp = 123-abs(x-y);
            f += temp;
        }
    }

    cout<<f<<endl;

    return 0;
}