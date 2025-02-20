//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////  一共有n阶台阶，一次可以走1阶或者两阶，求一共有多少种走法
//
//
//
//int fib(int n)//fib是用于求n个台阶走法的函数
//{
//	//如果只有一个台阶，那么只有一种走法
//	if (n >= 1)
//	{
//		if (n == 1)
//		{
//			return 1;
//		}
//		else if (n ==2)
//		{
//			return 2;
//		}
//		else
//		{
//			//对于当前，一次走一个台阶，那么剩余n-1个台阶，有fib(n-1)个走法
//			//一次走两个台阶，那么剩余n-2个台阶，剩余fib(n-2)个走法
//			return fib(n - 1) + fib(n - 2);
//
//		}
//	}
//	else
//	{
//		return 0;
//	}
//	
//	// 如果只有两个台阶，那么有两种走法
//
//
//
//	// 如果台阶数目>2,那么有fib(n-1)+fib(n-2)种走法
//
//}
//
//
//
//
//
//int main()
//{
//	int n = 0;
//	printf("请输入台阶的数目>");
//	scanf("%d", &n);
//	int j = fib(n);
//	printf("%d", j);
//
//
//	return 0;
//}