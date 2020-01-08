#include <stdio.h>
#include <iostream>
using namespace std;
void insertion_sort(int *arr,int n)
{
    int j;
    int key;
    for(int i=1; i<n; i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }

}
int main()
{
    int arr[]= {5,2,3,2,4};
    int n=5;
    insertion_sort(arr,n);
    for(int i=0; i<n; i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;
}


