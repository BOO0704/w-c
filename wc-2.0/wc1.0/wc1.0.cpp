#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
using namespace std;
int main(int argc, char * argv[])
{ 
	int wc_char = 0;
	int wc_word = 1;
	int wc_line = 1;
	int i = 0;
	char filename[80];
	FILE *fp = NULL;
	while (1)
	{
		if (argc == 1)

		{
			printf("Please input file name:\n");
			gets_s(filename);
			fopen_s(&fp, filename, "r");
			if (fp == NULL)
			{
				printf("打开有误！\n");
				system("pause");
				exit(0);
			}
			printf("This is the file :\n");
			while (1)
			{
				char ch;
				ch = fgetc(fp);
				if (ch >= 'A'&&ch <= 'z')
				{
					putchar(ch);
					wc_char++;
				}
				else if (ch == ' ')
				{
					putchar(ch);
					wc_word++;
				}
				else if (ch == '\n')
				{
					putchar(ch);
					wc_word++;
					wc_line++;
				}
				else if (ch = EOF)
				{
					break;
				}
			}
			printf("\n\n");
			printf("The char count is %d\n", wc_char);
			printf("The word count is %d\n", wc_word);
			printf("The line count is %d\n", wc_line);
			fclose(fp);
			i++;
			/*if (i == 3)
			{
				break;
			}*/
		}
	}
	system("pause");
	/**
	else if (argc == 2)
	{
		fopen_s(&fp,argv[1], "r");
		if (fp == NULL)
		{
			printf("打开有误！\n");
			printf("请按enter键继续....");
			_getch();
			exit(0);
			//...
		}
		while (1)
		{
			char ch;
			ch = fgetc(fp);
			if (ch >= 'A'&&ch <= 'z')
			{
				wc_char++;
			}
			else if (ch == ' ')
			{
				wc_word++;
			}
			else if (ch == '\n')
			{
				wc_word++;
				wc_line++;
			}
			else if (ch = EOF)
			{
				break;
			}
		}
		cout << "文件打成功! \n "<<"请输入统计方式如(-c\\-w\\-l):"<<endl;
		gets_s(filename);
		if (strcmp(filename, "-c") == 0)
		{
			printf("The char count is %d\n", wc_char);
		}
		else if (strcmp(filename, "-w") == 0)
		{
			printf("The word count is %d\n", wc_word);
		}
		else if (strcmp(filename, "-l") == 0)
		{
			printf("The line count is %d\n", wc_line);
		}
	}
	else if (argc == 3)
	{
		fopen_s(&fp,argv[2], "r");
		if (fp == NULL)
		{
			printf("打开有误！\n");
			printf("请按enter键继续....");
			_getch();
			exit(0);
			//...
		}
		while (1)
		{
			char ch;
			ch = fgetc(fp);
			if (ch >= 'A'&&ch <= 'z')
			{
				wc_char++;
			}
			else if (ch == ' ')
			{
				wc_word++;
			}
			else if (ch == '\n')
			{
				wc_word++;
				wc_line++;
			}
			else if (ch = EOF)
			{
				break;
			}
		}
		if (strcmp(argv[1], "-c") == 0)
		{
			printf("The char count is %d\n", wc_char);
		}
		else if (strcmp(argv[1], "-w") == 0)
		{
			printf("The word count is %d\n", wc_word);
		}
		else if (strcmp(argv[1], "-l") == 0)
		{
			printf("The line count is %d\n", wc_line);
		}
		fclose(fp);
	}**/				//未完成功能
}

