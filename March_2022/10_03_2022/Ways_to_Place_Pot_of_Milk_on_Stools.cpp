#include <stdio.h>
#include <cmath>
using namespace std;

int main(){

    int n;
    scanf("%d",&n);
    
    float b = pow(2,n-1);
    printf("%.0f",b);

    return 0;
}