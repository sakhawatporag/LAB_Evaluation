#include <stdio.h>

int main()
{
    int a[] = {5,4,3,2,1};
    int n =sizeof(a)/sizeof(a[0]);

    int key;
    printf("Enter the key element: \n");
    scanf("%d", &key); 
    
    int flag = 0;
    int left = 0, right = n - 1, mid;
    
    while(left <= right)
    {
        mid = (left + right) / 2;

       
        if(a[mid] == key) 
        {
            printf("Found at index %d\n", mid);
            flag = 1;
            break;
        }
        
        else if(a[mid] > key)
        {
            left = mid + 1; // Look in the right half
        }
        else
        {
            right = mid - 1; // Look in the left half
        }
    }

    if (flag==0) 
    {
        printf("Element not found in the array.\n");
    }

    return 0;
}