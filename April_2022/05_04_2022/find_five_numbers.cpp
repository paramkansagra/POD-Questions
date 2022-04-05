#include <iostream>
#include <math.h>

using namespace std;

int main(){
    
    int n[10];
    for(int i=0;i<10;i++){
        cin>>n[i];
    }

    int a = int(ceil((n[0]+n[5]-n[7])/2));
    int b = n[0]-a;
    int c = n[1]-a;
    int d = n[6]-c;
    int e = n[9]-d;

    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<endl;

    return 0;
}