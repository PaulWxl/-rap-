#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char* argv[])
{
	//setvbuf(stdin, calloc(1 << 20, sizeof(char)), _IOFBF, 1 << 20);
	//setvbuf(stdout, calloc(1 << 20, sizeof(char)), _IOFBF, 1 << 20);

	int rows, cols;
	char str[40] = "F:\\Pr\\����rap����\\cxk\\test (";
	int a, b;
	a = 220;//220�ſ�ʼ׼������600�ſ�ʼ��ɽ��
	int c, d;

	while (a < 1777)
	{
		char str[40] = "F:\\Pr\\����rap����\\cxk\\test (";
		char str2[5] = "\0";
		char str3[5] = "\0";
		char str4[10] = ").bmp";
		c = 0;
		b = a;

		while (a > 0)
		{
			str2[c] = a % 10 + '0';
			a = a / 10;
			c++;
		}

		d = 0;

		while (d < c)
		{
			str3[d] = str2[c - 1 - d];
			str3[c - 1 - d] = str2[d];
			d++;
		}
		//printf("%s\n", str3);	//��ʾ�ڼ���ͼƬ
		strcat(str, str3);
		strcat(str, str4);
		read_bmp(str, &rows, &cols);
		//system("cls");
		//getchar();

		a = b;
		a+=3;
		if (a == 1467 || a == 1466 || a == 1465) a = 1;
	}
	return 0;

}