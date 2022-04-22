#include <iostream>
#include <map>

using namespace std;

int main(){
    
    int d;
    cin>>d;

    map<int,int> x = {{6,9},{8,8},{9,6},{0,0},{1,1}};
    int arr[5] = {0,1,6,8,9};
    bool found = false;
    for(int i=0;i<5;i++){
        if(found){
            break;
        }
        for(int j=0;j<5;j++){
            int first = 10*arr[i]+arr[j];
            int second = 10*x[arr[j]]+x[arr[i]];
            if(abs(first-second) == d){
                if(first<second){
                    string f = to_string(first);
                    string s = to_string(second);
                    if(first<10){
                        f = '0'+f;
                    }
                    cout<<f<<" "<<s;
                }
                else{
                    string f = to_string(first);
                    string s = to_string(second);
                    if(second<10){
                        s = '0'+s;
                    }
                    cout<<f<<" "<<s;
                }
                found = true;
                break;
            }
        }
    }

    return 0;
}