#include <iostream>

using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    bool x = false;
    for(int i=1;i<m+1;i++){
        if(m%i == 0){
            if(x == false) x = true;
            else x = false;
        }
    }

    if(x == false){
        cout<<"Off";
    }
    else{
        cout<<"On";
    }

    return 0;
}