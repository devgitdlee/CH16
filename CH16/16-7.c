#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char **ps) {
	while (*ps != 0) {
		printf("%s\n", *ps);
		ps++;
	}
}


int main(int argc, char **argv) {
	char temp[80];
	char **str;
	int max;
	int i;

	max = atoi(argv[1]); //�� ��° ����� �μ��� ������ ǥ��
	str = (char **)malloc((max + 1) * sizeof(char*));
	i = 0;

	while (1) {
		printf("���ڿ��� �Է��ϼ���:");
		gets(temp);
		if (temp[0] == '\0') break;
		str[i] = (char *)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
		i++;
		if (i == max) {
			printf("���ڿ� �Է��� �ִ��� ��� ä�����ϴ�.\n");
			break;
		}

	}
	str[i] = 0;
	print_str(str);

	i = 0;
	while (str[i] != 0) {
		free(str[i]);
		i++;
	}
	free(str);
	return 0;

}