// ConsoleApplication3.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//
#include<stdio.h>
#include "stdafx.h"


int main() {
	int month;
	int gwasobi=0;
	int hap = 0;
	int sobi[32] = { 0, };
	printf("달을 입력 : ");
	scanf_s("%d",&month);
	switch (month) {
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 6:
	case 7:
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:  for (int i = 1; i <= 5; i++) {
		printf("%d일 : ", i);
		scanf_s("%d", &sobi[i]);
	}
		for (int i = 1; i <= 5; i++) {
			hap += sobi[i];
			if (sobi[i] >= 10000) gwasobi++;
		}break;
		
	
	default:break;
	}
	  
	
	printf("총 소비량 : %d\   과소비한 날 : %d일", hap, gwasobi);
}

