#include <iostream>
#include <set>

using namespace std;

int main(){

    set<int> data;
    for(int i=0;i<4;i++){
        int x,y;
        cin>>x>>y;

        data.insert(x);
        data.insert(y);
    }

    if(data.size() == 4){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}