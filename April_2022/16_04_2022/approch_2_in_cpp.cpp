#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n,m,dis=999999;
    cin>>n;

    vector<int> data;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        data.push_back(temp);
    }

    cin>>m;
    vector<int> final;

    for(int i=0;i<n;i++){
        int temp = data[i]^m;
        int count = 0;
        while(temp != 0){
            if(temp&1 == 1){
                count++;
            }
            temp = temp >>1;
        }
        if(count<dis){
            dis = count;
            final.clear();
            final.push_back(data[i]);
        }
        else if(count == dis){
            final.push_back(data[i]);
        }
    }

    for(int i=0;i<final.size();i++){
        cout<<final[i]<<endl;
    }

    return 0;
}