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
    int * odd = x;
    int * even = x+count-1;
    for(i=0;i<=y;i++)
    {
        if(*x%2==1)
        {
            *odd=x[i];
            odd++;
        }
    }
    for(i=0;i<=y;i++)
    {
        if(*x%2==0)
        {
            *even=x[i];
            even++;
        }
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