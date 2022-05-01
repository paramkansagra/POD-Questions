#include <iostream>
#include <math.h>

using namespace std;

int convert(string s,int k){
    int number = 0;
    int temp = 0;
    int a = 0;
    for(int i=0;i<s.length();i++){
        if(s[i] == ','){
            number += temp*pow(k,a);
            temp=0;
            a++;
        }
        else{
            temp = temp*10 + (s[i]-'0');
        }
    }
    
    number += temp*pow(k,a);
    
    return number;
}

void print(int x,int k){
    while(x != 0){
        int temp = x%k;
        x = x/k;
        if(x != 0){
            cout<<temp<<",";
        }
        else{
            cout<<temp;
        }
    }
}

int main(){
    
    string s1,s2;
    int k;
    
    cin>>s1>>s2>>k;
    
    int sum = convert(s1,k)+convert(s2,k);
    print(sum,k);
    
    return 0;
}