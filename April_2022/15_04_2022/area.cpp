#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    while(n--){
        float x,y,z;
        cin>>x>>y>>z;
        
        float ans = y * ((z - x + 0.01) / (x - x / 3) + 1);
        ans = round(ans);
        cout<<ans<<endl;
    }

    return 0;
}