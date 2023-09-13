#include <string.h>
#include <stdio.h>

void  ord(int * x,int y)
{
    int * p = x;
    int i = 0;
    int count = 0;
    for(i=0;i<y;i++)
    {
        if(x[i]%2==1)
        {
            count++;
        }
    }
    int * even = x + count;
    for(i=0;i<count;i++)
        if (*x%2==1)
        {
            x++;
        }
        else if(*x%2 == 0)
        {
            while(*even%2==0)
            {
                even++;
            }
            int tmp = *x;
            *x = *even;
            *even = tmp;
            even++;
            x++;
        }
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int num = sizeof(arr)/sizeof(arr[0]);
    ord(arr,num);
    int i = 0;
    for(i=0;i<=num-1;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}