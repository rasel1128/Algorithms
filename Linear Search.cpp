#include <stdio.h>
#include <iostream>
using namespace std;

int linear(int *arr,int n,int key)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return i;
    }
    return -1;

}

int main()
{
    int arr[100],n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int key;
    scanf("%d",&key);
    int found=linear(arr,n,key);
    if(found == -1)
        printf("not found\n");
    else
        printf("position: %d",found);

    return 0;
}


