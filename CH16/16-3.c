#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *pi;
	int size = 5;
	int cnt = 0;
	int num;
	int i;


	pi = (int *)calloc(size, sizeof(int));
	while (1) {
		printf("����� �Է��ϼ��� => ");
		scanf("%d", &num);
		if (num <= 0)break;
		if (cnt == size) {
			size += 5;
			pi = (int *)realloc(pi, size * sizeof(int));
		}
		pi[cnt++] = num;


	}
	for (i = 0; i < cnt; i++) {
		printf("%5d", pi[i]);
	}
	free(pi);

	return 0;
	////double *weight = (double *)malloc(sizeof(double));
	////double *weight = (double *)calloc(sizeof(double));

	////int *weight = (double *)malloc(sizeof(double));
	////int *weight = (double *)calloc(sizeof(double));

	////pd = (double *)malloc(sizeof(double));
	////if (pd == null) exit(1);


	////*pi = 10;
	////*pd = 3.4;

	////printf("���������� ��� : %d\n", *pi);
	////printf("�Ǽ������� ��� : %.1lf\n", *pd);


	//free(pi);
	//free(pd);

	
}