#include <string.h>
#include <stdio.h>

int my_strlen( const  char * x)
{
    int count = 0;
    while(*x != '\0')
    {
        x++;
        count++;
    }
    return count;
}

int main()
{
    char  arr[] = "abcde";
    int ret = my_strlen(arr);
    printf("%d\n",ret);
    return 0;
}