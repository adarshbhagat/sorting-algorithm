#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],n,i,j,min=10000,temp,k;
    printf("enter the no. of number you want to enter\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(j=0;j<n-1;j++)
    {
        for(i=j;i<n;i++)
        {
            if(a[i]<min)
            {
                min=a[i];
                k=i;
            }
        }
        temp=a[k];
        a[k]=a[j];
        a[j]=temp;
        min=10000;
    }
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
