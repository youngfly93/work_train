#include <string.h>
#include <stdio.h>

int main()
{
    int arr[10] = {0,1,2,3,9,9,6,7,8,3};
    int i = 0;
    int max = 0;
    for(i=0;i<10;i++)
    {
        if (arr[i] > max)
            {
            max = arr[i];
            }
    }
    printf("%d\n",max);
    return 0;
}