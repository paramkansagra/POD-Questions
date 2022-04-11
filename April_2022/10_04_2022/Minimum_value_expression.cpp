#include <iostream>

using namespace std;

int min(int a,int b,int c){
    int minn = a;
    if(b<minn){
        minn = b;
    }
    if(c<minn){
        minn = c;
    }

    return minn;
}

int max(int a,int b,int c){
    int maxx = a;
    if(b>maxx){
        maxx = b;
    }
    if(c>maxx){
        maxx = c;
    }
    return maxx;
}

int main(){

    int a,b,c;
    cin>>a>>b>>c;

    int minn = min(a,b,c);
    int maxx = max(a,b,c);
    int l = a+b+c-minn-maxx;

    cout<<min(minn-maxx-l,minn-(maxx*l));

    return 0;
}