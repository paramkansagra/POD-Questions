#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

    int n,m,k;
    cin>>n>>m>>k;

    string day[] = {"Sunday","Monday","Tuesday","Wednesday","Thrusday","Friday","Saturday"};
    
    int x = (((k-n)%7)+m)%7;
    if(x<0){
        x = x+7;
    }

    cout<<day[x]<<endl;

    return 0;
}