//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <ctype.h>
//#include <math.h>
//// 1 字母大小写 转化，如果是大写，则转化为小写，如果是小写则转化为大写
////  对于每一个26字母，小写的ascll码值比大写多32   例如 a 97  A 65
//// 大写字母的ascll 码值的范围是  65 到 90
// 
////int main()
////{
////	char n = 0;
////	//scanf读取成功返回读取数据的个数，读取失败返回EOF
////	
////	while (scanf("%c", &n)==1)
////	{
////
////		if (n >= 'a' && n <= 'z')//是大写
////		//或者  if(islower(n))  islower(n)  判断n是否是小写，是返回真，不是返回假
////		{
////			// 那么转化为小写
////			// tolowwer(n)  把n转化为小写
////			printf("%c\n", n - 32);
////		}
////		else//是小写
////		//或者  if(isupper(n))    isupper(n)   判断n是否是大写，是返回真，不是返回假 
////
////		{
////			// 那么转为成大写
////			// toupper(n)  把n转化为大写
////			printf("%c\n", n + 32);
////
////		}
////		getchar();//取走\n  即取走回车
////
////	}
////	
////	return 0;
////}
//
//// 2 判断输入是否是字母
////int main()
////{
////	char ch = 0;
////	while (scanf("%c", &ch))//scanf(" %c",&n)   在%c 前面加一个空格表示跳过下一个字符之前的所有空白字符
////	{
////		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
////			//或者使用  isalpha(ch) 判断ch是否是字符，是返回真，不是返回假
////		{
////			printf("%c是一个字母\n",ch);
////
////		}
////		else
////		{
////			printf("%c不是一个字母\n", ch);
////		}
////		getchar();
////	}
////
////
////	return 0;
////}
//
//// 3  输出5位数之间的所有水仙花数
//// 水仙花数字 ：把任意数字从中间任意拆分成两个数字，如果拆分后的两个数的乘积之和等于原来的数字，那么他是水仙花数字
////  例如：146     如果146=1*46+14*6 那么他是水仙花数
//// 1234    如果1234=1*234+12*34+123*4 那么他是水仙花数
////  abcde =  a*bcde + ab*cde + abc*de + abcd*e
////   a*bcde   abcde/10000  *  abcde%10000
////   ab*cde   abcde/1000    *  abcde%1000
////   abc*de		abcde/100    *  abcde%100
////   abcd*e		abcde/10    *  abcde%10
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		// pow(x,y)  x的y次方，返回值是double
//		for (j = 10000; j >= 10; j/=10)
//		{
//			sum += ((i / j) * (i % j));
//		}
//		if (i == sum)
//		{
//			printf("%d\n",i);
//			sum = 0;
//		}
//	}
//	return 0;
//}