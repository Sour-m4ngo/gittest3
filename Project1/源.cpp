// ConsoleApplication2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


#include <iostream>
int main()
{
	using namespace std;
	int a1[100] = { 0 };//����start��end������֣�����ͬ
	int a2[100] = { 0 };
	int sum[100] = { 0 };//����������Ӻ�
	int a, b, c, d, e, max, z, x, y, i, n;
	int start, end;
	b = end - start + 1;
	cin >> start >> end;
	x = start;
	y = end;
	for (i = 0; x = y; i++)//��start��end���������������

	{
		a1[i] = x;
		a2[i] = x;

		x = x + 1;

	}
	for (d = 0; d<b; d++) //������������ӺͲ����浽����� 
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
			max = sum[e];	//max���ڼ�¼�������Ӻ͡� 
			z = z + 1;
		}
		else
			z = e;	//z���ڼ�¼�����ǵڼ���	�� 
	}
	cout << a2[e] << " " << max;

	return 0;
}
