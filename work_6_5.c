#include <string.h>
#include <stdio.h>

void  reverse_string(char * x,int num)
{
    char* ret = x;
    char* forward = x;
    char* reverse = x + num-1;
    while(forward < reverse)
        {
        char tmp = *forward;
        *forward = *reverse;
        *reverse = tmp;
        forward++;
        reverse--;
        }
}



int main()
{
    char a[] = "abcdef";
    int num = sizeof(a)/sizeof(a[0])-1;
    reverse_string(a,num);
    printf("%s\n",a);
    return 0;
}