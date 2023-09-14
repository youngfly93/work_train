#include <string.h>
#include <stdio.h>
#include <assert.h>

char* rightcircle(char* query,int num1,int num2)
{
    char tmp[256] = {0};
    char* p = tmp;
    strcpy(tmp,query);
    strcat(tmp,query);
    p+=num2;
    *(tmp+num2+num1) = '\0';
    return p;
}


int main()
{
    char arr1[]= "ABCDE";
    int num = strlen(arr1);
    int slen = 2;
    char* ret = rightcircle(arr1,num,slen);
    printf("%s\n",ret);
    return 0;
}