#include <iostream>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    
    int data[n];
    for(int i=0;i<n;i++){
        cin>>data[i];
    }
    
    int min = data[0];
    int flag = false;
    int m = 0;
    for(int i=0;i<n-1;i++){
        if(data[i]>data[i+1]){
            if(flag == true){
                cout<<"Not easily correctable";
                exit(1);
            }
            else{
                flag = true;
                m = i+1;
            }
        }
    }
    
    if(data[n-1]>min && flag == true){
        cout<<"Not easily correctable";
    }
    else if(flag){
        cout<<"Easily correctable\n"<<m;
    }
    else{
        cout<<"Correct";   
    }
    return 0;
}