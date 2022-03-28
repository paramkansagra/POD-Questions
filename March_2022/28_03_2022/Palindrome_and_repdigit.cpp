#include <iostream>
#include <math.h>
#include <string>
#include <set>

using namespace std;

bool is_rep(long long x){
    string n = to_string(x);
    set<char> temp;
    for(int i=0;i<n.length();i++){
        temp.insert(n[i]);
    }
    if(temp.size() == 1){
        return true;
    }
    return false;
}

bool is_not_palindrome(long long i){
    string n = to_string(i);
    for(int i=0;i<n.length();i++){
        if(n[i] != n[n.length()-i-1]){
            return true;
        }
    }
    return false;
}

int main(){

    long long start,end;
    cin>>start>>end;

    long long start_cube = cbrt(start);
    long long end_cube = cbrt(end);
    for(int i=10;i<end_cube+1;i++){
        if(is_not_palindrome(pow(i,3)) && is_rep(i)){
            printf("%d\t%d\n",i*i*i,i);
        }
    }

    return 0;
}