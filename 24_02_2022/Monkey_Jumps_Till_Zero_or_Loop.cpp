#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin>>n;

    // make the array
    vector<int> arr;

    // take input of the array
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }

    // define the vector pos
    vector<int> p;
    p.push_back(1);
    bool flag = true;
    while(flag){
        int pos = p[p.size()-1]-1;
        int x = abs(arr[pos]-arr[pos+1]);
        if(x == 0){
            break;
        }
        else if(find(p.begin(),p.end(),x) == p.end()){
            p.push_back(x);
        }
        else{
            p.push_back(x);
            flag = false;
            break;
        }
    }

    for(int i=0;i<p.size();i++){
        cout<<arr[p[i]-1]<<' ';
    }cout<<endl;
    if(flag) cout<<"Happy"<<endl;
    else cout<<"Angry"<<endl;

    return 0;
}