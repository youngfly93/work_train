#include <string.h>
#include <stdio.h>

char* reverse(char* x,int y)
{
    char* p = x;
    char* left = x;
    char* right = x + y-1;
    while(left  < right)
    {
        char tmp = *left; 
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
    return p;
}

int main()
{
    char arr[] = "abcdef";
    int num = strlen(arr);
    char * ret = reverse(arr,num);
    printf("%s\n",ret);
    return 0;
}