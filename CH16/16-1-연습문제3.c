#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double *high, *low;
	high = (double *)malloc(sizeof(double));
	low = (double *)malloc(sizeof(double));
	if ((high == NULL) || (low == NULL)) {
		printf("�޸𸮰� �����մϴ�.");
		exit(1);
	}
	printf("�ְ��°� ��������� �Է��ϼ���: ");
	scanf("%lf%lf", high, low);
	printf("�ϱ����� %.1lf�� �Դϴ�. \n", *high - *low);
	free(high);
	free(low);

	return 0;


}