#include <stdio.h>

//default list and index of last element
int example_len = 9;
int example_list[] = {0, 3, 6, 23, 54, 564, 23, 4, 454, 35};

void quicksort(int list[], int start, int len);
int partition(int list[], int start, int len);
void printArray(int array[], int start, int len);

int main (int argc, char **argv)
{
	quicksort(example_list, 0, example_len);
	printArray(example_list, 0, example_len);
	return 0;
}

void quicksort(int list[], int start, int len)
/* separate the list into two sections
 * recursively call until list sorted
 */
{
	if (start < len) {
		int split;
		split = partition(list, start, len);
		printArray(list, start, len);
		quicksort(list, start, split-1);
		quicksort(list, split+1, len);
	}
}

int partition(int list[], int start, int len)
/* sort a list from lowest to highes return a list of
 * elements sorted relative to the last element
 */
{
 	if (len < 1) return 0;
	
	int pivot = len;
	int low = start;
	for (int i = start; i <= len; i++) {
		// swap i to low if lower than pivot
		if (list[i] < list[pivot]) {
			int temp = list[low];
			list[low] = list[i];
			list[i] = temp;
			low++;
		}
	}
	// move pivot to the center
	int temp = list[low];
	list[low] = list[pivot];
	list[pivot] = temp;

	return low;
}

void printArray(int array[], int start, int len)
/* print all elements in an array of integers */
{
	for (int i = start; i <= len; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("\n");
}
