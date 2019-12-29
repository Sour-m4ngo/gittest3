// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


#include <iostream>
int main()
{
	using namespace std;
	int a1[100] = { 0 };//储存start到end间的数字，下行同
	int a2[100] = { 0 };
	int sum[100] = { 0 };//储存各个因子和
	int a, b, c, d, e, max, z, x, y, i, n;
	int start, end;
	b = end - start + 1;
	cin >> start >> end;
	x = start;
	y = end;
	for (i = 0; x = y; i++)//把start到end间的数储存起来。

	{
		a1[i] = x;
		a2[i] = x;

		x = x + 1;

	}
	for (d = 0; d<b; d++) //计算各个数因子和并储存到数组里。 
		for (n = 2; n<a1[d]; n++)
		{

			if (a1[d] % n == 0)
			{
				sum[d] = sum[d] + n;

			}
		}
	for (e = 1; e<b; e++)
	{
		if (max<sum[e])
		{
			max = sum[e];	//max用于记录最大的因子和。 
			z = z + 1;
		}
		else
			z = e;	//z用于记录最大的是第几项	。 
	}
	cout << a2[e] << " " << max;

	return 0;
}
