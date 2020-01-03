#include<stdio.h>
#include<math.h>
int main(int agrc, char* agrv[]) {
	int n, m;
	float l;
	scanf_s("%d %d", &n, &m);
	for (int i = m; i <= n; i++) {
		l = sqrt(i);
		printf("%4d%8.2f", i, l);
	}
}