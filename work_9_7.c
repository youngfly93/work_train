#include <string.h>
#include <stdio.h>

// void change(int* x,int y)
// {
//     int* left = x;
//     int* right = x + y-1;
//     while(right > left)
//     {
//         while((right > left)&& (*right%2 == 0))
//         {
//             right--;
//         }
//         while((right > left)&& (*left%2 == 1))
//         {
//             left++;
//         }
//         int tmp = *left;
//         *left = *right;
//         *right =tmp;
//     }
// }

void change(int arr[], int sz)
{
	int left = 0;
	int right = sz-1;
	int tmp = 0;


	while(left<right)
	{
     // 从前往后，找到一个偶数，找到后停止
		while((left<right)&&(arr[left]%2==1))
		{
			left++;
		}
     
		// 从后往前找，找一个奇数，找到后停止
		while((left<right)&& (arr[right]%2==0))
		{
			right--;
		}
     
     // 如果偶数和奇数都找到，交换这两个数据的位置
     // 然后继续找，直到两个指针相遇
		if(left<right)
		{
			tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}


int main()
{
    int arr[] = {1,2,3,4,5};
    int num = sizeof(arr)/sizeof(arr[0]);
    change(arr,num);
    int i = 0;
    for(i = 0;i<num;i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}