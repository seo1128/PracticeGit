/*// ConsoleApplication1.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include<stdio.h>


int main() {
	int n;
	scanf_s("%d",&n);

		for (int i = 1; i <= 9; i++) {
			for (int j = n; j <= 9; j++) {
				printf("%2d * %2d = %2d ", j, i, i*j);
			}
			printf("\n");

		}
	
}*/
/*#include<stdio.h>
#include "stdafx.h"
int main() {
	int n;
	int j;
	int i;
	scanf_s("%d", &n);
	for (i = 0; i <= n; i++) {
		for (j = n-i; j >= 1; j--) {
			printf("%d", j);
		}
		printf("\n");
		for (int k = n; k >= n-i; k--) {
			printf(" ");
		}
	}
}
*/
/*include<stdio.h>
#include "stdafx.h"
void main() {
	printf("%d %o %x", 0x12 + 0x11, 011 + 010, 017);
}*/
#include<stdio.h>
#include "stdafx.h"
/*int main() {
	int x;
	for (x = 2; x < 10; x++) {
		if (x % 3)continue;
		printf("%3d", x);
	}
}*/
/*int main() {
	int a = 10, b = 12, c = 11;
	if (a > b) {
		printf("%d", a--);
	}
	else printf("%d", --b);
	if (b == c)
		printf("%d", b++);
	else
		printf("%d", --c);

}*/
int main() {
	int n = 1, s = 0;
	for (; n < 10;) {
		n = n + 1;
		printf("n = %d\n", n);
		s = s + n;
		printf("s = %d\n", s);
	}

	printf("%d\n",s);
}