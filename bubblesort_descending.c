// bubble short descending order array

#include<stdio.h>

int main()
{
    int a[]={40,10,20,50,30};
    int n=sizeof(a)/sizeof(a[0]);
    int swap;

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                swap=a[j];
                a[j]=a[j+1];
                a[j+1]=swap;
            }
        }
    }

    printf("Sorted array in descending order:\n");
    for(int i=0;i<n;i++)
    {
       printf("%d ",a[i]);
    }

    return 0;
}