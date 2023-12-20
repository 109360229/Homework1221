#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define ENTER 13
#define MAX 80
#pragma warning (disable:4996)
/*
int main(void)
{
	FILE *fptr;
	char ch;
	int count = 0;

	fptr = fopen("C:/Users/ese20/Desktop/Homework1221/welcome.txt", "r");
	if (fptr != NULL)
	{
		while ((ch = getc(fptr)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n總共有%d個字元\n", count);
	}
	else
		printf("檔案開啟失敗!!\n");
	system("pause");
	return 0;
}

int main(void)
{
	FILE *fptr1, *fptr2;
	char ch;
	fptr1 = fopen("C:/Users/ese20/Desktop/Homework1221/welcome.txt", "r");
	fptr2 = fopen("C:/Users/ese20/Desktop/Homework1221/output.txt", "w");
	if ((fptr1 != NULL) && (fptr2 != NULL))
	{
		while ((ch = getc(fptr1)) != EOF)
			putc(ch, fptr2);
		fclose(fptr1);
		fclose(fptr2);
		printf("檔案拷貝完成!!\n");
	}
	else
		printf("檔案開啟失敗!!\n");
	system("pause");
	return 0;
}

int main(void)
{
	FILE *fptr;
	char str[MAX], ch;
	int i = 0;
	fptr = fopen("C:/Users/ese20/Desktop/Homework1221/output.txt", "a");
	printf("請輸入字串，按ENTER鍵結束輸入:\n");
	while ((ch = getche()) != ENTER && i < MAX)
		str[i++] = ch;
	putc('\n', fptr);
	fwrite(str, sizeof(char), i, fptr);
	fclose(fptr);
	printf("\n檔案附加完成!!\n");
	system("pause");
	return 0;
}

int main(void)
{
	FILE *fptr;
	char str[MAX];
	int bytes;
	fptr=fopen("C:/Users/ese20/Desktop/Homework1221/output.txt","r");
	while (!feof(fptr))
	{
		bytes = fread(str, sizeof(char), MAX - 1, fptr);
		str[bytes] = '\0';
		printf("%s\n", str);
	}
	fclose(fptr);
	system("pause");
	return 0;
}
*/
int main(void)
{
	FILE *in, *out;
	int cnt;
	char str[100];
	in = fopen("C:/Users/ese20/Desktop/Homework1221/welcome.txt", "r");
	out = fopen("C:/Users/ese20/Desktop/Homework1221/output.txt", "w");
	while (!feof(in))
	{
		cnt = fscanf(in, "%s", str);
		if (cnt > 0)
			fprintf(out, "%s\n", str);
	}
	fclose(in);
	fclose(out);
	system("pause");
	return 0;
}