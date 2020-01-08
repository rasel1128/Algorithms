#include<stdio.h>
int fact(int n)
{
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else
        return n*fact(n-1);

}
int main()
{
    int a = fact(5);
    printf("%d",a);

    return 0;
}
