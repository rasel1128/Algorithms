#include <stdio.h>
#include <iostream>
using namespace std;
int arr[100][1000];
int coin[100];
int n;
int amnt;
int mini(int n1,int n2)
{
    if (n1<n2)
        return n1;
    else
        return n2;
}

int main(){
    while(scanf("%d%d",&n,&amnt)!=EOF)
{
    for(int i=1;i<=n;i++)
    scanf("%d",&coin[i]);
for(int i=1;i<=n;i++)
    arr[i][0]=0;


for(int i=1;i<=n;i++){
    for(int j=1;j<=amnt;j++){
        if(coin[i]>j){
            arr[i][j]=arr[i-1][j];
            }
     else if(coin[i]<j)  {
            arr[i][j]=1+arr[i][j-coin[i]];
        }
        else
        {
            int value1 = 1+arr[i][j-coin[i]];
            int value2=arr[i-1][j];
            arr[i][j]= mini(value1,value2);
        }
    }
}
printf("ways: %d\n",arr[n][amnt]);
for(int i=1;i<=n;i++){
    for(int j=0;j<=amnt;j++){
       printf("%d ",arr[i][j]);
    }printf("\n");
}printf("\n");
}
return 0;
}
/*
 4 11
 1
 2
 3
 4

 4 11
 1
 5
 6
 9
 */

