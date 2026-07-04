// user input position and element insert..
#include<stdio.h>

int main()
{
    int a[6]={1,2,3,4,5};
    int n=5;

    int position;
    scanf("%d",&position);

    int value;
    scanf("%d",&value);

    for(int i=n;i>position;i--)
    {
        a[i]=a[i-1];
    }

    a[position]=value;
    n++;

    // current array

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }




    return 0;
}