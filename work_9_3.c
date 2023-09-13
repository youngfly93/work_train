#include <string.h>
#include <stdio.h>

int main()
{
    char arr[13] = {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
    int i = 0;
    char* p  = arr;
    int num = sizeof(arr)/sizeof(arr[0]);
    p += num;
    char * left = p;
    char * right = p;
    *p = '*';
    for(i =0;i<=(num/2);i++)
    {
        printf("%s\n",arr);
        left = p--;
        right = p++;
        *left = '*';
        *right = '*';
    }
    for(i =0;i<=(num/2)+1;i++)
    {
        left = p++;
        right = p--;
        *left = ' ';
        *right = ' ';
        printf("%s\n",arr);
    }
    return 0;
}