#include <stdio.h>
void quick (int a[],int n,int beg,int end ,int *loc)
{
    int right,left,temp;
    left=beg;
    right=end;
    *loc=beg;
step2:
    while(a[loc]<=a[right]&&loc!=right)
        right--;
        if(loc==right)
            return;
            if(a[loc]>a[right])
        {
            temp=a[loc];
            a[loc]=a[right];
            a[right]=temp;
            *loc=right;
        }
        goto step3;
step3:
    while(a[left]<=a[loc]&&left!=loc)
        left++;
    if(loc==left)
        return;
    if(a[left]>a[loc])
    {
        temp=a[left];
        a[left]=a[loc];
        a[loc]=temp;
        *loc=left;
    }
    goto step2;
}
void quick_sort(int a[],int n)
{
    int beg,loc,end,top=-1;
    int lower[10],upper[10];
    if(n>1)
    {
        top++;
        lower[top]=0;
        upper[top]=n-1;
    }
    while(top!=-1)
    {
        beg=lower[top];
        end=top;
        top--;
        quick(a[],n,beg,end,&loc);
        if(beg<loc-1)
        {
            top++;
            lower[top]=beg;
            upper[top]=loc-1;
        }
        if(loc+1<end)
        {
            top++;
            lower[top]=loc+1;
            upper[top]=end;
        }

    }
}
int main()
{
    int a[15],n,i;
    printf("enter the no. of elements you want to enter\n");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    quick_sort(a,n);
    printf("\nthe sorted array are\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
