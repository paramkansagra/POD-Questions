#include <iostream>

using namespace std;

int main(){

    double t,c1,c2;
    cin>>t>>c1>>c2;

    double ans = t*c1 + (t*(t-3)/2) * c2;
    printf("%.0f",ans);

    return 0;
}