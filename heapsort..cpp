#include <iostream>
using namespace std;
void maxheapify(int arr[], int n, int i)
{
	int largest = i;
	int l = 2 * i + 1;
	int r = 2 * i + 2;

	 if (l < n && arr[l] > arr[largest])
		largest = l;

	 if (r < n && arr[r] > arr[largest])
		largest = r;

	if (largest != i) {
		swap(arr[i], arr[largest]);

	 maxheapify(arr, n, largest);
	}
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
		maxheapify(arr, n, i);

	 for (int i = n - 1; i >= 0; i--) {

		swap(arr[0], arr[i]);
        maxheapify(arr, i, 0);
	}
}

void printArray(int arr[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";
	cout << "\n";
}


int main()
{
	int arr[10];
	for(int i=0; i<10; i++){
        cin>>arr[i];
	}

	int n = sizeof(arr) / sizeof(arr[0]);

	heapSort(arr, n);

	cout << "Sorted array is \n";
	printArray(arr, n);
}
