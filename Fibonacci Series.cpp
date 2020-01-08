#include<stdio.h>
int fibo(int n)
{
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}
int main()
{
    int n, i=0,c;
    scanf("%d",&n);
    fibo(n);
    for (c=0; c<n; c++)
    {
        printf("%d",fibo(n));
        i++;
    }


    return 0;
}
