#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n) {
    /*
    arr[1] -> [0, .. ,  0]
    arr[2] -> [0, .. , 1]
    arr[3] -> [0, .. , 2]
    ...
    arr[n-1] -> [0, .. , n - 2]
    */
    
    for(int i = 1; i < n; ++i) {
        /*
            Target is to accommodate
            arr[i] to arr[0 ... i - 1]
            s.t. it remains sorted.
        */
        int curNum = arr[i], j = i - 1;
        
        while(j >= 0 && arr[j] > curNum) {
            // arr[j] to be copied to arr[j + 1]
            arr[j + 1] = arr[j];
            j--;
        }
        
        // j will either be -1 or
        // j will be first such index
        // s.t. arr[j] <= curNum
        arr[j + 1] = curNum;
    }
}

int main() {
    int n; cin >> n;
    int *arr = new int[n];

    for(int i = 0; i < n; ++i)
        cin >> arr[i];

    insertionSort(arr, n);

    for(int i = 0; i < n; ++i)
        cout << arr[i] << ' ';

	return 0;
}
