#include<stdio.h>

void projram2_1() {
	long m1 = 1, m2 = 1;
	for (int i = 1; i <= 12; i++) {
		printf("%ld %ld ", m1, m2);
		m1 = m1 + m2;
		m2 = m1 + m2;
	}
}

void projram2_2() {

	for (int i = 101; i <= 200; i++) {
		int n = 0;
		for (int j = 2; j < i; j++) {
			if (i % j == 0)
				n++;
		}
		if (n == 0)
			printf("%d\n", i);
	}
}

void projram2_3() {
	int n;
	scanf_s("%d", &n);
	printf("%d = ", n);
	for (int i = 2; i <= n; i++) {
		while (i) {
			if (n % i == 0) {
				printf("%d * ", i);
				n = n / i;
			}
			else
				break;
		}
	}
}

void projram2_4() {
	int a;
	scanf_s("%d", &a);
	char ch;
	ch = a >= 90 ? 'a' : (a < 60 ? 'c' : 'b');
	printf("%c", ch);
}

//���Լ������С������
void projram2_5() {
	int m, n, min, sum, max;
	sum = 1;
	scanf_s("%d %d", &m, &n);
	min = n;
	max = 0;
	if (m < n)
		min = m;
	for (int i = 1; i <= min; i++) {
		if (n % i == 0 && m % i == 0) {
			max = i;
		}
	}
	printf("���Լ����:%d\n", max);
	printf("��С��������:%d\n", (m * n) / max);
}

void projram2_6() {
	char ch[30];
	int eng = 0, space = 0, num = 0, other = 0;
	gets(ch);
	int i = 0;
	while (ch[i] != '\0') {
		if ((ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z')) {
			eng++;
		}
		else if (ch[i] >= '0' && ch[i] <= '9') {
			num++;
		}
		else if (ch[i] == ' ') {
			space++;
		}
		else
			other++;
		i++;
	}
	printf("��ĸ�����ǣ�%d\n", eng);
	printf("�ո�����ǣ�%d\n", space);
	printf("���ָ����ǣ�%d\n", num);
	printf("�����ַ������ǣ�%d\n", other);
}

void projram2_7() {
	int s = 0;
	float h = 100.0;
	for (int i = 1; i <= 10; i++) {
		s += h;
		h /= 2.0;
		s += h;
	}
	printf("������%d��\n", s);
	printf("������%f��\n", h);
}

//���ӳ���
void program2_8() {
	int sum = 1, day = 1;
	for (int i = 9; i >= 1; i--) {
		day = (day + 1) * 2;
	}
	printf("%d", day);
}

void program2_9() {
	float sum = 2;
	for (int i = 2; i <= 20; i++) {
		sum += (2.0 * i - 1) / i;
		//printf("%f\n", (2.0 * i - 1) / i);
	}
	printf("%f", sum);
}

//�۳�
void program2_10() {
	int sum = 1, sum2 = 0;
	for (int i = 1; i <= 20; i++) {
		sum = 1;
		for (int j = i; j >= 1; j--) {
			sum *= j;
		}
		sum2 += sum;
	}
	printf("%d", sum2);
}

int main(int agrc, char* agrv[]) {

	projram2_1();

	//projram2_2();
	//projram2_3();
	//projram2_4();
	//projram2_5();
	//projram2_6();
	//projram2_7();
	//program2_8();
	//program2_9();
	//program2_10();

}