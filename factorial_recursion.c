
#include<stdio.h>

int calculate_fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else{
        return n * calculate_fact(n-1);
    }
}

int main()
{
    int n;
    printf("Enter the number: \n");
    scanf("%d",&n);
    

    int ans=calculate_fact(n); //ata function r nam, ja issa rakha jai.
    printf("The factorial of %d is: %d",n,ans);

    return 0;
}