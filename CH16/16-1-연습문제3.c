#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double *high, *low;
	high = (double *)malloc(sizeof(double));
	low = (double *)malloc(sizeof(double));
	if ((high == NULL) || (low == NULL)) {
		printf("메모리가 부족합니다.");
		exit(1);
	}
	printf("최고기온과 최저기온을 입력하세요: ");
	scanf("%lf%lf", high, low);
	printf("일교차는 %.1lf도 입니다. \n", *high - *low);
	free(high);
	free(low);

	return 0;


}