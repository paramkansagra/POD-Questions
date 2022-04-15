#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    while(n--){
        int x,y,z;
        cin>>x>>y>>z;

        int count = 0;
        while(z>=x){
            count += y;
            z -= (2/3)*x;
        }

        if(round(z) == x) count += y;

        cout<<count<<endl;
    }

    return 0;
}