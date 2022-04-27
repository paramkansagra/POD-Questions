#include <iostream>
#include <math.h>

using namespace std;

int main(){
    
    int n,a,b;
    float x,y;
    
    cin>>n>>x>>y;
    
    for(int i=1;i<n;i++){
        float l = sqrt(pow(n,2)-pow(i,2));
        if(l == (int)l){
            a = max(i,(int)l);
            b = min(i,(int)l);
        }
    }
    
    if(abs(a-x)<=1 || abs(b-y)<=1){
        cout<<"Unsafe";
    }
    else{
        cout<<"Safe";
    }
    
    return 0;
}