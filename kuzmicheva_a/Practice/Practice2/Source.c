#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#define N 10
void main()
{
	int i, j;
	int z, b[10], a[10], x, c, n, *bull, *cow;
	int B[N], A[N];
	printf("Компьютер загадывает рандомное 10-ти значное число")
	do {
		z = random(10);
		for (int j = 0; j < i; j++)
			if (z == b[j]) z = -1;
		if (z == -1) continue;
		b[i++] = z;
		printf("%d", b[i - 1]);
	} while (i < 10);
	printf("\n");
	for (i = 0; i < 10; i++) {
		scanf("%d", a + 1);
		B[i] = b[i] + '0';
	}

	printf("Введите число (цифры не должны повторяться)")
	scanf("%i", &x);
	c = 1;
	for (i = 0; i < 10; i++) {
		a[9 - i] = x % 10;
		x /= 10;
	}
	for (i = 0; i < 10; i++) {
		scanf("%d", a + i);
		A[i] = a[i] + '0';
	}
	for (i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			if (B[i] == A[i]) {
				if (i == j) bull++;
				else cow++;
			}
	printf("Количесво коров: %d \n", *cow);
	printf("Количесво быков: %d \n", *bull);
} while ((*cow != n) || (*bull != n));
printf("Вы угадали \n");
}
}