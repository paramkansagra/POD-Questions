#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin>>n;

    vector<int> data;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        data.push_back(temp);
    }

    vector<int> final;
    for(int i=0;i<n;i++){
        if(find(final.begin(),final.end(),data[i]) == final.end()){
            final.push_back(data[i]);
        }
    }

    cout<<final.size()*final.size()<<endl;
    for(int i=0;i<final.size();i++){
        cout<<final[i]<<" ";
    }

    return 0;
}