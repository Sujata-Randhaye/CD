#include<stdio.h>

void Selectionsort(int a[],int n)
{
    int i,j,temp,minIndex;

    for(i=0;i<n;i++)
    {
        minIndex=i;
        for(j=i+1;j<n;j++)
        {
            if(a[minIndex]>a[j])
            {
                minIndex=j;
            }
        }
        if(minIndex!=i)
        {
            temp=a[minIndex];
            a[minIndex]=a[i];
            a[i]=temp;
        }
    }
}

int main()
{
    int a[]={5,6,3,7,1};
    int n=5;
    int i;
    printf("Array before sort:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    Selectionsort(a,n);
    printf("Array after sort:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}