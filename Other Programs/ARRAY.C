#include<stdio.h>
#include<conio.h>
void main()
{
	int arr1[5] = {7, 8, 4, 2, 5};
	int arr2[5] = {12, 15, 45, 10, 11};
	int arr3[10];
	int i, j, k=0;
	for(i=0; i<10; i++)
	{
		if(i>4)
		{
			arr3[i] = arr2[k];
			k++;
		}
		arr3[i] = arr1[i];
	}
	printf("Elements are: ");
	for(i=0; i<10; i++)
	{
		printf("\t %d",arr3[i]);
	}
	getch();
}