#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
int main()
{
	//int i = 0;
	//int j = 0;
	//int sum = 0;
	//for (i = 1; i < 10; i++)
	//{
	//	for (j = 1; j <= i; j++)
	//	{
	//		sum = i*j;
	//		printf("%d*%d=%-2d ", i, j,sum);
	//	}
	//	printf("\n");
	//}


	int i = 1;
	 double sum = 0;
	double tmp = 0;
	for (i = 1; i <= 100; i++)
	{  
		tmp = 1.0/ i*(i%2?1:-1);
		 sum += tmp;
	}
	printf("%d\n", sum);

	/*int i = 0;
	int arr[10] = { 1, 2, 33, 4, 5, 6, 7, 8, 9, 10 };
	int max = arr[0];
	for (i = 0; i < 10; i++)
	{
		
			if (max>arr[i]){
				continue;
			}
			else {
				max = arr[i];
			}
		
	}
	printf("%d\n", max);*/
	//int i = 0;
	//int num = 0;
	//for (i = 0; i < 100; i++)
	//{
	//	if (9 == i % 10){
	//		num++;
	//	}
	//	else if (9 == i / 10)
	//	{
	//		num ++;
	//	}
	//}
	//printf("%d\n", num);
	system("pause");
	return 0;
}
