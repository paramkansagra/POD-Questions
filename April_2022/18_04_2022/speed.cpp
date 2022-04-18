#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int u,d;
    cin>>u>>d;

    float n = 2*(u*d)/(u+d);
    cout<<floor(n);

    return 0;
}