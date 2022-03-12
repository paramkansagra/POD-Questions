#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int a,b;
    cin>>a>>b;

    for(int i=a;i<=b;i++){
        for(int j=i;j<=b;j++){
            for(int k=j;k<=b;k++){
                int x = pow(k,2)-pow(i,2)-pow(j,2);
                if(abs(x) == 0){
                    cout<<i<<" "<<j<<" "<<k<<" Exactly Pythagorean"<<endl;
                }
                else if(abs(x) == 1){
                    cout<<i<<" "<<j<<" "<<k<<" Very Close to Pythagorean"<<endl;
                }
                else if(abs(x) == 2){
                    cout<<i<<" "<<j<<" "<<k<<" Close to Pythagorean"<<endl;
                }
            }
        }
    }

    return 0;
}