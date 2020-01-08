#include<stdio.h>
#include<string.h>

char str1[100], str2[200];
int maxi(int n1,int n2)
{
    if(n1>n2)
        return n1;
    return n2;
}

int main()
{
    scanf("%[^\n]",str1);
    getchar();

    scanf("%[^\n]",str2);
    getchar();

    int l1=strlen(str1);
    int l2=strlen(str2);

    int arr[l1+1][l2+1];
    for(int i=0; i<=l2; i++)
    {
        for(int j=0; j<=l1; j++)
            if(i==0 || j==0)
            {
                arr[i][j]=0;
            }
       else  if(str1[j-1]==str2[i-1])
        {
            arr[i][j]=arr[i-1][j-1]+1;
        }
        else
        {
            int n1=arr[i-1][j];
            int n2= arr[i][j-1];
            arr[i][j]=maxi(n1, n2);
        }
    }


    for(int i=0; i<l1; i++)
        printf("%c",str1[i]);
    printf("\n");
    for(int i=0; i<l2; i++)
        printf("%c",str2[i]);
    printf("\n");
printf("Ans: %d",arr[l2][l1]);

    return 0;
}
