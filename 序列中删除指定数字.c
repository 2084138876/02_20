//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
//int main()
//{
//	int arr[50] = { 0 };
//	int n = 0;
//	printf("输入序列的长度\n");
//	scanf("%d", &n);//确定数字的个数
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		//依次输入数字
//		// 并且存入数字里
//		printf("输入第%d个数字>", i+1);
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	printf("输入要删除的数字>");
//	scanf("%d", &del);//要删除的数
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j] = arr[i];
//			j++;
//		}
//	}
//	//这时元素的个数已经变成j,已经完成了删除
//	for (i = 0; i < j; i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//	
//}
//	