#include <stdio.h>

//default list and length
int example_len = 22;
int example_list[] = {0, 3, 6, 23, 54, 564, 23, 4, 454, 35, 56, 4, 23, 22, 4, 32, 43254, 2, 54254, 25, 2, 42};

int partition(int list[], int len);
int* quick_sort(int list[], int len);

void printArray(int array[], int len);

int main (int argc, char **argv)
{
	quick_sort(example_list, example_len);
	return 0;
}

int partition(int list[], int len)
{
	return 0;
}

int* quick_sort(int list[], int len)
{
	printArray(list, len);
	int pivot = len-1;
	int low = 0;
	for (int i = 0; i < len; i++) {
		if (list[i] < list[pivot]) {
			int temp = list[low];
			list[low] = list[i];
			list[i] = temp;
		}
		low++;
	}
	printArray(list, len);
	return list;
}

void printArray(int array[], int len)
{
	for (int i = 0; i < len; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("\n");
}
