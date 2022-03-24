#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main(){

    char side;
    int n,m;
    float width,distance;
    cin>>side>>n>>m>>width;

    if(side == 'l'){
        distance = (m-n-1)*width;
    }
    else{
        distance = (m-n+1)*width;
    }

    printf("%.2f",distance);

    return 0;
}