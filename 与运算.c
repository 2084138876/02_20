#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 与运算，全1为1，否则为0


// 整数在内存中存储的是二进制的补码
// 首位是符号位，0代表正数，1代表负数


// 对于正整数，原码、反码、补码相同
// 例如  int a=3     
// int 类型，4个字节，一个字节是八位，所以是32位
// 源码 00000000000000000000000000000011
// 反码 00000000000000000000000000000011
// 补码 00000000000000000000000000000011


// 对于负整数，反码是源码保留符号位，其余位按位取反；补码是反码加1
// 例如  -3
// 源码  10000000000000000000000000000011
// 反码  11111111111111111111111111111100
// 补码  11111111111111111111111111111101


// 左移运算: a<<b  a的补码左移 b 位，右边的空位用0填充   结果是 a* （2的b次方）
// 右移运算：a>>b  a的补码右移动b位，若a是正数左边用0填充；若a是负数，左边用1填充       结果是 a /（2的b次方）

//int main()
//{
//	// 求一个整数存储在内存中的二进制中1的个数
//	int a = 9;
//	// 9 的补码     00000000000000000000000000001001
//	// 1 的补码		00000000000000000000000000000001
//	// 与运算的结果 00000000000000000000000000000001
//	// a&1 ，对于a的二进制位的最后一位数 ，如果为1则最后运算后的最后一位结果为1，为0则为0
//	int sz = sizeof(a);//sizeof计算的是字节
//	
//
//	int count = 0;
//	// 思路，例如：
//	// 10000000000000000000000000001001
//	// 若要得到最左边的一位  那么右移 sizeof*8-1 位 即可   得到：00000000000000000000000000000001 
//	// 若要得到最右边的一位  那么先左移 sizeof*8-1 位   得到：10000000000000000000000000000000 ；
//	//                           再右移 sizeof * 8 - 1位，得到00000000000000000000000000000001 即可
//	int i = sz*8;
//	while (i)
//	{
//		int b = (a & 1) << (sz * 8 - 1) >> (sz * 8 - 1);
//		
//
//		if (b==1)
//		{
//			count++;
//		}
//
//		a = a>>1;
//		i--;
//	}
//	
//	printf("%d\n", count);
//	return 0;
//}