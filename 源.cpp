#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i, j, k;
	double i1;
	double bonus1, bonus2, bonus4, bonus6, bonus10, bonus;

	printf("\n");
	for (i = 1; i < 5; i++) {
		for (j = 1; j < 5; j++) {
			for (k = 1; k < 5; k++) {
				if (i != k && i != j && j != k) {
					printf("%d,%d,%d\n", i, j, k);
				}
			}
		}
	}
	printf("你的净利润是；\n");
	scanf("%lf", &i1);
	bonus1 = 100000 * 0.1;
	bonus2 = bonus1 + 100000 * 0.075;
	bonus4 = bonus2 + 200000 * 0.05;
	bonus6 = bonus4 + 200000 * 0.03;
	bonus10 = bonus6 + 400000 * 0.015;
	if (i1<= 100000) {
		bonus = i * 0.1;

	}
	else if (i1 <= 200000)
	{
		bonus = bonus1 + (i1 - 100000) * 0.075;
	}
	else if (i1 <= 400000) {
		bonus = bonus2 + (i1 - 200000)*0.05;
	}
	else if (i1<= 600000) {
		bonus = bonus4 + (i1 - 400000)*0.03;

	}
	else if (i1 <= 1000000) {
		bonus = bonus6 + (i1 - 600000) * 0.01;
	}
	printf("提成为：bonus=%lf", bonus);
	printf("\n");
	return 0;
}