#include <iostream>
using namespace std;

int partisi(int arr[], int start, int end)
{

	int pivot = arr[start];

	int count = 0;
	for (int i = start + 1; i <= end; i++) {
		if (arr[i] <= pivot)
			count++;
	}

	int pivotIndex = start + count;
	swap(arr[pivotIndex], arr[start]);

	int i = start, j = end;

	while (i < pivotIndex && j > pivotIndex) {

		while (arr[i] <= pivot) {
			i++;
		}

		while (arr[j] > pivot) {
			j--;
		}

		if (i < pivotIndex && j > pivotIndex) {
			swap(arr[i++], arr[j--]);
		}
	}

	return pivotIndex;
}

void quickSort(int arr[], int start, int end)
{

	if (start >= end)
		return;

	int p = partisi(arr, start, end);

	quickSort(arr, start, p - 1);

	quickSort(arr, p + 1, end);
}

int main(){
    int array, pivot;

    cout<<"Masukkan Jumlah Data Array = ";
    cin>>array;

    int arr[array];
    int start, end;
	
    for (int i = 0; i < array; i++) {
		cout<<"Indeks Ke-"<<i<<"= ";
		cin>>arr[i];
	}

	cout<<"\nData Sebelum di Sorting"<<endl;

	partisi(arr, start, end);

	for (int j= 0; j < array; j++) {
		cout<<arr[j]<< " ";
	}

	cout<<endl;

	cout<<"\nData Setelah di Sorting"<<endl;

	quickSort(arr, 0, array - 1);

	for (int k = 0; k < array; k++) {
		cout<<arr[k]<< " ";
	}

	return 0;
}