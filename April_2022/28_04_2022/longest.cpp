#include <iostream>
#include <vector>

using namespace std;

int max(vector<int> arr){
    int maxx = arr[0];
    for(int i=0;i<arr.size();i++){
        maxx = max(maxx,arr[i]);
    }
    return maxx;
}

int min(vector<int> arr){
    int minn = arr[0];
    for(int i=0;i<arr.size();i++){
        minn = min(minn,arr[i]);
    }
    return minn;
}

int main(){

    int n;
    cin>>n;

    vector<int> l;
    vector<vector<int>> a;

    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        l.push_back(x);
        a.push_back({x,y});
    }

    int c = 0,len = 0;
    vector<vector<int>> ans;

    for(int i=0;i<a.size();i++){
        vector<int> z;
        for(int j=0;j<l.size();j++){
            if(l[j] == a[i][0]){
                z.push_back(a[i][1]);
            }
        }
        if(max(z)-min(z)>c){
            c = max(z)-min(z);
            ans = {{a[i][0],min(z)},{a[i][0],max(z)}};
            le = z.size();
        }
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
    }

    cout<<c<<endl;
    cout<<len<<endl;

    return 0;
}