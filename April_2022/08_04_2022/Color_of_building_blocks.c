#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n,m;

    scanf("%d",&n);
    char colors[n];

    for(int i=0;i<n;i++){
        scanf(" %c",&colors[i]);
    }

    scanf("%d",&m);

    char string[301];
    scanf(" %s",string);

    int last_seen[n][100];
    for(int i=0;i<n;i++){
        last_seen[i][0] = (int)colors[i];
        last_seen[i][1] = 2;
    }

    for(int i=0;i<strlen(string);i++){
        for(int j=0;j<n;j++){
            if(last_seen[j][0] == (int)string[i]){
                last_seen[j][last_seen[j][1]] = i;
                last_seen[j][1]++;
                break;
            }
        }
    }

    int pass = 1;

    for(int i=0;i<n;i++){
        for(int j=2;j<last_seen[i][1]-1;j++){
            if(abs(last_seen[i][j]-last_seen[i][j+1])<=m){
                pass = 0;
            }
        }
    }
    
    if(pass == 1){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }

    return 0;
}