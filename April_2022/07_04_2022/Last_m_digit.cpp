#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sum(vector<int> list,int size,int m){
    int x = 0;
    for(int i=size-1;i>size-m-1;i--){
        x += list[i];
    }
    return x;
}

int main(){

    int n,m;
    cin>>n>>m;

    int compare = 0,multiplier=1;
    vector<int> list;

    for(int i=0;i<m;i++){
        int rem = n%10;
        list.push_back(rem);
        n = n/10;
        compare = compare + rem*multiplier;
        multiplier *= 10;
    }

    reverse(list.begin(),list.end());

    while(true){
        int l = sum(list,list.size(),m);
        if(l<=compare){
            list.push_back(l);
        }
        else{
            break;
        }
    }

    if(list[list.size()-1] == compare){
        cout<<"Generated";
    }
    else{
        cout<<"Cannot be generated";
    }

    return 0;
}