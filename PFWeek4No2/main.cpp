#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num, ans, sum1 = 0, sum2 = 0;
	printf("Enter one number: ");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		sum1 += (i * i);
		sum2 += i;
	}
	sum2 *= sum2;
	if (sum1 < sum2) ans = sum2 - sum1;
	else ans = sum1 - sum2;
	printf("The different between the sum of the squares of the first %d natural numbers and the square of the sum is %d\n", num, ans);
	return 0;
}