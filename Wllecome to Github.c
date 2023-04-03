#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

int main(void)
{
	int i;
	int left = 0;
	char arr1[] = { "Wellcome to Github!!" };
	char arr2[] = { "####################" };
	int right = strlen(arr1) - 1;
	for (i = 1; left <= right;)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(500);
		system("cls");
		left++;
		right--;
	}
	printf("%s\n", arr2);
	return 0;
}

