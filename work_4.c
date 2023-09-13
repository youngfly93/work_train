#include <string.h>
#include <stdio.h>

int main()
{
    int arr[10] = {0,3,5,7,8,9};
    int key = 6;
    int mid = (sizeof(arr)/sizeof(arr[0]))/2;
    if (arr[mid] >= key)
    {
        while(arr[mid]>key)
        {
            mid--;
        }
        if(arr[mid]!=key)
            printf("don't have the key in the array\n");
        else
            printf("%d\n",mid+1);
    }
    if (arr[mid] < key)
    {
        while(arr[mid]<key)
        {
            mid++;
        }
        if(arr[mid]!=key)
            printf("don't have the key in the array");
        else
            printf("%d\n",mid+1);
    }
    return 0;
}