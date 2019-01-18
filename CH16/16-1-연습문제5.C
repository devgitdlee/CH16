#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

	char str[31];
	char *ps, *pt;
	int length = 1;

	ps = (char *)calloc(1, 1);
	if (ps == NULL) exit(1);
	while (1) {
		printf("메모입력:");
		gets(str);
		if (strcmp(str, "end") == 0) break;
		length += strlen(str) + 1;
		pt = (char *)realloc(ps, strlen(str));
		ps = pt;
		strcat(ps, str);
		strcat(ps, "");
	}
	printf("%s\n", ps);

	free(ps);

	

	return 0;
}