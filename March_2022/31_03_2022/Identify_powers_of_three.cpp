#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> lol(int n){
    vector<int> l;
    int x = 3;
    while(n != 0){
        if(n%x == 0){
            x = x*3;
        }
        else{
            x = x/3;
            l.push_back(int(x));
            n -= x;
        }
    }

    reverse(l.begin(),l.end());
    return l;
}

bool one_not_in_l(vector<int> l){
    for(int i=0;i<l.size();i++){
        if(l[i] == 1){
            return false;
        }
    }
    return true;
}

int summ(vector<int> l){
    int x = 0;
    for(int i=0;i<l.size();i++){
        x += l[i];
    }

    return x;
}

int main(){

    int n;
    cin>>n;

    vector<vector<int>> l = {lol(n),lol(n-1),lol(n-2)};

    for(int i=0;i<3;i++){
        if(one_not_in_l(l[i])){
            for(int j=0;j<l[i].size();j++){
                printf("%d\t",l[i][j]);
            }
            cout<<endl;
            printf("%d",summ(l[i]));
            break;
        }
    }

    return 0;
}