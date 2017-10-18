//
//  ModelViewController.c
//  ExchangeSort
//
//  Created by Mewlan Musajan on 10/18/17.
//  Copyright (c) 2017 Mewlan Musajan. All rights reserved.
//

#include <stdio.h>

void loadLanguageSelectionView(int *p1, int *p2, int *p3);
void loadEnglishView(int *p1, int *p2, int *p3);
void loadUyghurView(int *p1, int *p2, int *p3);
void languageSelectionErrorView(char c1);
void loadModel();
void loadController(int *p1, int *p2, int *p3);
void selectLanguage(int *p1, int *p2, int *p3);
void enterNumbers(int *p1, int *p2, int *p3);
void exchange(int *p1, int *p2, int *p3);

int main(int argc, char const *argv[])
{
	loadModel();

	return 0;
}

void loadModel()
{
	int a, b, c, *p1, *p2, *p3;
	p1 = &a;
	p2 = &b;
	p3 = &c;
	loadLanguageSelectionView(p1, p2, p3);
}

void loadLanguageSelectionView(int *p1, int *p2, int *p3)
{
	printf("\tLanguage 语言 Til\n");
	printf("E\t\tAppication Displays in English.\nC\t\tApplication Displays in Chinese.\nU\t\tApplication Displays in Uyghur.\n");
	selectLanguage(p1, p2, p3);
}

void loadEnglishView(int *p1, int *p2, int *p3)
{
	printf("Please enter 3 integer:\n");
	enterNumbers(p1, p2, p3);
	loadController(p1, p2, p3);
	printf("3 numbers in descending order: %d, %d, %d\n", *p1, *p2, *p3);
}

void loadUyghurView(int *p1, int *p2, int *p3)
{
	printf("3 tal putun san kirguzung:\n");
	enterNumbers(p1, p2, p3);
	loadController(p1, p2, p3);
	printf("3 sanning towenlesh tertipi: %d, %d, %d\n", *p1, *p2, *p3);
}

void loadChineseView(int *p1, int *p2, int *p3)
{
	printf("请输入3个整数:\n");
	enterNumbers(p1, p2, p3);
	loadController(p1, p2, p3);
	printf("3个数的降序排列: %d, %d, %d\n", *p1, *p2, *p3);
}

void languageSelectionErrorView(char c1)
{
	printf("'%c' is not a command.\n", c1);
}

void loadController(int *p1, int *p2, int *p3)
{
	exchange(p1, p2, p3);
}

void enterNumbers(int *p1, int *p2, int *p3)
{
	scanf("%d, %d, %d", p1, p2, p3);
}

void selectLanguage(int *p1, int *p2, int *p3)
{
	char language;
	scanf("%c", &language);
	switch(language)
	{
		case 'E': loadEnglishView(p1, p2, p3); break;
		case 'C': loadChineseView(p1, p2, p3); break;
		case 'U': loadUyghurView(p1, p2, p3); break;
		default: languageSelectionErrorView(language);
	}
}

void exchange(int *p1, int *p2, int *p3)
{
	void swap(int *p1, int *p2);
	if (*p1 < *p2)
	{
		swap(p1, p2);
	}
	if (*p1 < *p3)
	{
		swap(p1, p3);
	}
	if (*p2 < *p3)
	{
		swap(p2, p3);
	}
}

void swap(int *p1, int *p2)
{
	int temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}







