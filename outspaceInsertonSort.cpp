#include <iostream>

using namespace std;

void insertionSort(int* array, int n) {
    int* sortedArr = new int[n];
    int i, j, k;
    for (int i = 0; i < n; i++) {
       
        for (j = 0; j < i; j++) {
            if (array[j] > array[i]) {
                break;
            }
        }
        
        for (k = i; k > j; k--) {
            sortedArr[k] = sortedArr[k-1];
        }
       
        sortedArr[j] = array[i];
    }
    for (i = 0; i < n; i++) {
        array[i] = sortedArr[i];
    }
   
}


int main() {
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int* array = new int[n];
    cout << "Enter " << n << " integer values: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    insertionSort(array, n);

	for (int i=0;i<n; i++){
		cout<<array[i];
	}
    return 0;
}
