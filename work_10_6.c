#include <string.h>
#include <stdio.h>
#include <assert.h>

int findcircle(char* query,char* find)
{
    char tmp[256] = {0};
    strcpy(tmp,query);
    strcat(tmp,query);
    return strstr(tmp,find) != NULL;
}

int main()
{
    char arr1[] = "ABCDE";
    char arr2[] = "BCDEA";
    if (findcircle(arr1,arr2)&&(strlen(arr1)==strlen(arr2)))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}