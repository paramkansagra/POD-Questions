#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int n_size,m_size;
    vector<int> five,other;
    cin>>m_size;
    for(int i=0;i<m_size;i++){
        int temp;
        cin>>temp;
        if(temp%5 == 0){
            five.push_back(temp);
        }
        else{
            other.push_back(temp);
        }
    }
    
    cin>>n_size;
    for(int i=0;i<n_size;i++){
        int temp;
        cin>>temp;
        if(temp%5 == 0){
            five.push_back(temp);
        }
        else{
            other.push_back(temp);
        }
    }
    
    sort(five.begin(),five.end());
    sort(other.begin(),other.end());

    for(int i=0;i<five.size();i++){
        cout<<five[i]<<" ";
    }cout<<endl;

    for(int i=0;i<other.size();i++){
        cout<<other[i]<<" ";
    }cout<<endl;

    return 0;
}