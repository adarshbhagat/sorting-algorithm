#include <stdio.h>
void insertion_sort (int [],int);
int main()
{
    int a[100],n;
    printf("enter the no. of elements you want to enter\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        insertion_sort(a,n);
        printf("\nthe sorted array are\n");
        for(int i=0;i<n;i++)
        printf("%d\t",a[i]);
}
void insertion_sort (int a[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        for(j=i-1;j>=0&&temp<a[j];j--)
            a[j+1]=a[j];
            a[j+1]=temp;
    }
}
