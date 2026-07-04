#include<stdio.h>

int main()
{
    int a[]={1,2,10,3,4,5};
    
    int n=6;
    int position;
    scanf("%d",position);//enter the positon to delete
    
    for(int i=position;i<n-1;i++)
    {
        a[i]=a[i+1];  
    }

    n--;

     for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }




    return 0;
}