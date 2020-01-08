#include <stdio.h>
#include <iostream>
using namespace std;
int arr[100][1000];
int coin[100];
int n;
int amnt;

int main(){

scanf("%d%d",&n,&amnt);

for(int i=1;i<=n;i++)
    scanf("%d",&coin[i]);
for(int i=1;i<=n;i++)
    arr[i][0]=1;


for(int i=1;i<=n;i++){
    for(int j=1;j<=amnt;j++){
        if(coin[i]>j){
            arr[i][j]=arr[i-1][j];
            }
        else
            arr[i][j]=arr[i-1][j]+arr[i][j-coin[i]];
    }
}
printf("ways: %d\n",arr[n][amnt]);
return 0;
}
/**
4 10
1
2
5
10

*/
