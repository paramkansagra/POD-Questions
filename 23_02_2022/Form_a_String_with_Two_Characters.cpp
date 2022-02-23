#include <bits/stdc++.h>

using namespace std;

bool isValid(string s,int length){
    for(int i=1;i<length-1;i++){
        if(s[i]!=s[i-1] && s[i] != s[i+1]){
            return false;
        }
    }
    return true;
}

string findMin(string arr[],int index,int length){
    string minn = arr[0];
    for(int i=0;i<index;i++){
        for(int j=0;j<arr[i].length();j++){
            if(minn[j] == arr[i][j]){
                continue;
            }
            else if(minn[j] < arr[i][j]){
                break;
            }
            else{
                minn = arr[i];
                break;
            }
        }
    }
    return minn;
}

int main(){

    string n;
    cin>>n;

    // length of the string
    int length = n.length();

    char distinct[4]={' '};
    int index = 0;
    for(int i=0;i<length;i++){
        bool flag = false;
        for(int j=0;j<4;j++){
            if(n[i] == distinct[j]){
                flag = true;
                break;
            }
        }
        if(flag == false){
            distinct[index++] = n[i];
        }
    }

    string final[8] = {" "};
    index = 0;
    int maxLen = INT_MIN;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            string newString = "";
            for(int k=0;k<length;k++){
                if(n[k] != distinct[i] && n[k] != distinct[j]){
                    newString += n[k];
                }
            }
            if(isValid(newString,newString.length())){
                final[index++] = newString;
                int length = newString.length();
                maxLen = max(length,maxLen);
            }
        }
    }

    string newList[8] = {" "};
    int newIndex = 0;
    for(int i=0;i<=index;i++){
        if(final[i].length() == maxLen){
            newList[newIndex++] = final[i];
        }
    }

    // now find the minimum one
    cout<<findMin(newList,newIndex,maxLen)<<endl;

    return 0;
}