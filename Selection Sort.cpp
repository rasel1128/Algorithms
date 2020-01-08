#include <stdio.h>
#include <iostream>
using namespace std;
void selection_sort(int *arr,int n)
{
    int t;
    for(int i=0; i<n-1; i++)
    {
        int min_in = i;
        for(int j= i+1; j<n; j++)
        {
            if(arr[j]<arr[min_in])
                min_in=j;
        }
        t=arr[i];
        arr[i]=arr[min_in];
        arr[min_in]=t;

    }
}

int main()
{
    int arr[]= {5,2,3,2,4};
    int n=5;
    selection_sort(arr,n);
    for(int i=0; i<n; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}
