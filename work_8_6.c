#include <string.h>
#include <stdio.h>
#include <math.h>

int main()
{
    int arr[5] = {0,1,2,3,4};
    int num = sizeof(arr)/sizeof(arr[0]);
    int* p = arr;
    int i = 0;
    for(i=0;i<num;i++)
    {
        int ret = *p;
        printf("%d\n",ret);
        p++;
    }
    return 0;
}