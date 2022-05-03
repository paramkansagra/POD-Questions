#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
int main(){

    int n;
    vector<int> data,ans;
    
    cin>>n;

    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        data.push_back(temp);
    }

    sort(data.begin(),data.end());

    int x = 0;

    for(int i=0;i<n/2;i++){
        int j = n-i-1;
        x += abs(data[i]-data[j]);
        ans.push_back(data[i]);
        ans.push_back(data[j]);
    }

    for(int i=0;i<n;i++){
        if(i != n-1) cout<<ans[i]<<" ";
        else cout<<ans[i]<<endl;
    }

    cout<<x<<endl;

    return 0;
}