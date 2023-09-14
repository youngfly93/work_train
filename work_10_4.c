#include <string.h>
#include <stdio.h>
#include <assert.h>


// int main()
// {
//     int A,B,C,D = 0;
//     A = 1;
//     B = (C==0);
//     C = (D==0);
//     D = !C;
//     if(A&&(B||C||D))
//     {
//         printf("A");
//     }
//     if(B&&(A||C||D))
//     {
//         printf("B");
//     }
//     if(B&&(A||C||D))
//     {
//         printf("C");
//     }
//     if(B&&(A||C||D))
//     {
//         printf("D");
//     }
//     return 0;
// }

int main()
{
    char arr[] = {'a','b','c','d'};
    int i = 0;
    for(i=0;i<4;i++)
    {
        if((arr[i] != 'a') + (arr[i] == 'c') + (arr[i] =='d') + (arr[i] != 'd') ==3)
        {
            printf("%c\n",arr[i]);
        }
    }
    return 0;
}