#include <stdio.h>
#include <math.h>

void main()
{
	float x1, y1, x2, y2, r1, r2, d;
	scanf("%f%f%f%f%f%f", &x1, &y1, &r1, &x2, &y2, &r2);
	if ((r1 <= 0) || (r2 <= 0))
	{
		printf("������");
		return;
	}
	d = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	if (d == (r1 + r2))
	{
		printf("����� ������� �������");
		return;
	}
	if (d == (r1 - r2))
	{
		printf("����� ���������� �������");
		return;
	}
	if ((d > (r1 - r2)) && (d < (r1 + r2)))
	{
		printf("����� ����� �����������");
		return;
	}
	if ((d < (r1 - r2)) && (d > (r1 + r2)))
	{
		printf("�� ������������");
		return;
	}
}