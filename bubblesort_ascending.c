//bubble shorting ascending order 

#include<stdio.h>

int main()
{
    int a[]={10,20,5,34,89,24}; 
    int n=sizeof(a)/sizeof(a[0]);
    int swap;

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
        }
    }

    printf("Array shorted in ascending order:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}