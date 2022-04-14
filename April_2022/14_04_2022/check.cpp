#include <iostream>

using namespace std;

int binary(long long n){
    int x = 0;
    int mult = 1;
    while(n != 0){
        x += mult*(n%10);
        n = n/10;
        mult = mult*2;
    }

    return x;
}

int main(){
    
    long long n;
    cin>>n;

    int final = binary(n)-2;

    if(final%4 == 0){
        cout<<"Fail";
    }
    else{
        cout<<"Success";
    }

    return 0;

}