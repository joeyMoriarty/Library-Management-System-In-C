// C program for implementation of Heap Sort using array
#include <stdio.h>


void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}

void printArray(int arr[], int n)
{
    int i;
    printf("The array:\n\n");
	for (i = 0; i < n; ++i)
		printf("%d ", arr[i]);
	printf("\n");
}

void heapify(int arr[], int n, int i)
{
	int largest = i; // Initialize largest as root (at arr[0])
	int l = 2 * i + 1; // left = 2*i + 1
	int r = 2 * i + 2; // right = 2*i + 2

	// If left child is larger than root
	if (l < n && arr[l] > arr[largest])
		largest = l;

	// If right child is larger than largest so far
	if (r < n && arr[r] > arr[largest])
		largest = r;

	// If largest is not root
	if (largest != i) {
		swap(&arr[i], &arr[largest]);

		// Recursively heapify the affected sub-tree
		heapify(arr, n, largest);
	}
}


void heapSort(int arr[], int n)
{
    int i;
	
    printf("Build heap:\n\n");
	for (i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

    printArray(arr, n);

	// One by one extract an element from heap
	for (i = n - 1; i > 0; i--) {
		// Move current root to end
		swap(&arr[0], &arr[i]);

		// call heapify on the reduced heap
		heapify(arr, i, 0);
        printArray(arr, n);
	}
}




int main()
{
	int arr[] = { 4, 1, 3, 2, 16, 9, 10, 14, 8, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);

	heapSort(arr, n);

	printf("Sorted array is \n");
	printArray(arr, n);
}
