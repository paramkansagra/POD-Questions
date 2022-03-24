#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int m,n;
    cin>>m>>n;

    int last_ele = pow(2,m)-1;
    int x = pow(2,m);
    int packets = 0;
    for(int i=n;i>=0;i--){
        float l = (x/last_ele)*i;
        if((int)l == l){
            packets = i;
            break;
        }
    }

    int give = (x/last_ele)*packets;
    cout<<packets<<endl;
    cout<<give<<endl;

    return 0;
}