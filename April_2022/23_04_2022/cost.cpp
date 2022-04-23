#include <iostream>

using namespace std;

int main(){

    int x,p1,p2,c;
    cin>>x>>p1>>p2>>c;

    float dry = ((100-p1)*x)/100;
    float w = (dry/(100-p2))*100;

    cout<<w*c;

    return 0;
}