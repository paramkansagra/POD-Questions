#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    vector<vector<int>> data;

    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        data.push_back(temp);
    }

    // first vector is the vector storing all the possible outcomes
    // second vector is for the possible solution
    // third vector is for the individual value
    vector<vector<vector<int>>> ans;
    
    int pos = 0;
    int maxx = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i+1>=n || j+1>=m){
                break;
            }

            int summ = data[i][j] + data[i][j+1] + data[i+1][j] + data[i+1][j+1];
            if(summ > maxx){
                maxx = summ;
                ans.clear();
                ans.push_back({{i,j},{i,j+1},{i+1,j},{i+1,j+1}});
            }
            else if(summ == maxx){
                ans.push_back({{i,j},{i,j+1},{i+1,j},{i+1,j+1}});
            }
        }
    }

    cout<<maxx<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i][0][0]+1<<"\t"<<ans[i][0][1]+1<<endl;
        for(int j=0;j<ans[i].size();j++){
            if(j != ans[i].size()-1){
                cout<<data[ans[i][j][0]][ans[i][j][1]]<<"\t";
            }
            else{
                cout<<data[ans[i][j][0]][ans[i][j][1]]<<endl;
            }
        }
    }

    return 0;
}