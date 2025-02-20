#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 第一种方法
//int main()
//{
//	int n = 0;
//	printf("输入数据的个数\n");
//	scanf("%d", &n);
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		printf("输入第%d个数据>",i+1);
//		scanf("%d", &arr[i]);
//	}
//	//假设第一个值arr[0]就是最大值
//	int max = arr[0];
//	//假设第一个值arr[0]就是最小值
//	int min = arr[0];
//	for (i = 1; i < n; i++) 
//	{
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	printf("最大值是%d,最小值是%d,差值是%d", max, min, max - min);
//	return 0;
//}

// 第二种方法
// 假设数据范围是0到100
//int main()
//{
//
//	int n = 0;
//	printf("输入数据的个数\n");
//	scanf("%d", &n);
//	int i = 0;
//	int arr[10] = { 0 };
//	int max = 0;
//	int min = 100;
//	for (i = 0; i < n; i++)
//	{
//		printf("输入第%d个数据>",i+1);
//		scanf("%d", &arr[i]);
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	printf("最大值是%d,最小值是%d,差值是%d", max, min, max - min);
//
//}
