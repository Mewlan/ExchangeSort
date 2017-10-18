//
//  ModuleViewController.c
//  ExchangeSort
//
//  Created by Mewlan Musajan on 10/18/17.
//  Copyright (c) 2017 Mewlan Musajan. All rights reserved.
//

#include <stdio.h>

int main(int argc, char const *argv[])
{
	void loadModule();
	loadModule();

	return 0;
}

void loadModule()
{
	void loadView(int *p1, int *p2, int *p3);
	int a, b, c, *p1, *p2, *p3;
	p1 = &a;
	p2 = &b;
	p3 = &c;
	loadView(p1, p2, p3);
}

void loadView(int *p1, int *p2, int *p3)
{
	printf("Please enter 3 integer:\n");
	scanf("%d, %d, %d", p1, p2, p3);
	void loadController(int *p1, int *p2, int *p3);
	loadController(p1, p2, p3);
	printf("3 numbers in descending order: %d, %d, %d\n", *p1, *p2, *p3);
}

void loadController(int *p1, int *p2, int *p3)
{
	void exchange(int *p1, int *p2, int *p3);
	exchange(p1, p2, p3);
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







