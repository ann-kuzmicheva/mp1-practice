#include<math.h>
#include<stdio.h>
void main()
{
	float x0, x, y0, y, r0, r, d, z0, z, k0, k, l, l0;
	scanf("%f %f %f %f %f %f %f %f %f %f %f %f %f", &x0, &x, &y0, &y, &r, &r0, &d, &z0, &z, &k0, &k, &l, &l0);
	int d = scrt((x - x0)*(x - x0) + (y - y0)*(y - y0));
		int r0 = scrt((z0 - x0)*(z0 - x0) + (k0 - y0)*(k0 - y0));
		int r = scrt((z - x)*(z - x) + (k - y)*(k - y));
		if (d >= r0 + r){
			printf("Окружности не взаимодействуют");
			return;
		}
		if (d <= abs(r0 - r)) {
			printf("Окружность внутри другой");
			return;
		}
		if (x0 == 0){
			if (x == 0){
				if (r0 = r) {
					printf("Окружности совпадают");
					return;
				}
			}
		}
		if (r0*r0 = (scrt((l0 - x0)*(l0 - x0) + (l - y0)*(l - y0)))*(scrt((l0 - x0)*(l0 - x0) + (l - y0)*(l - y0))) + (scrt((l - z)*(l - z) + (l0 - z0)*(l0 - z0))*(scrt((l - z)*(l - z) + (l0 - z0)*(l0 - z0)))
		{
			if (r*r = (scrt((l0 - x)*(l0 - x) + (l - y)*(l - y))*((scrt((l0 - x)*(l0 - x) + (l - y)*(l - y))) + ((scrt((z0 - x)*(z0 - x) + (z - y)*(z - y))*(scrt((z0 - x)*(z0 - x) + (z - y)*(z - y)))
			{
				printf("Пересекаются в точке");
				return;
			}
			if (r0 == 0) {
				if (r == 0) {
					printf("Не существует");
					return;
				}
}
		}
	}