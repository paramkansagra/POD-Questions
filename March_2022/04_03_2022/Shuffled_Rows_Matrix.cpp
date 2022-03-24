#include <iostream>
#include <set>

using namespace std;

int main(){

    int row,col;
    cin>>row>>col;

    int arr[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

    bool flag = true;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            for(int k=0;k<row;k++){
                int tempFlag = false;
                for(int l=0;l<col;l++){
                    if(arr[i][j] == arr[k][l]){
                        tempFlag = true;
                    }
                }
                if(tempFlag == false){
                    flag = false;
                }
            }
        }
    }

    if(flag == true){
        cout<<"Shuffled Row Matrix\n";
    }
    else{
        cout<<"Not Shuffled Row Matrix\n";
    }

    return 0;
}