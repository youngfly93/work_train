#include <string.h>
#include <stdio.h>
#include <assert.h>

char* my_strcpy(char* x,const char* y)
{
    char* new = x;
    // assert(strlen(x) > strlen(y));
    // printf("参数1小于参数2");
    while(*y != '\0')
    {
        *x = *y;
        x++;
        y++;
    }
    return new;
}

// char * my_strcpy(char * dst, const char * src)
// {
//     char * cp = dst;
//     while(*src != '\0')
//     {
//         *dst = *src;
//         dst++;
//         src++;
//     }
//     return( cp );
// }

int main()
{
    char arr1[] = "abcdef";
    char arr2[] = "123";
    char* ret = my_strcpy(arr1,arr2);
    printf("%s\n",ret);
    return 0;
}