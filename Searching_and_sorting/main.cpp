#include <bits/stdc++.h>
using namespace std;

int linearSearch (int arr[], int key, int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }

    return -1;
}

int binarySearch (int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;

    int mid = start + (end - start) / 2;

    while (start <= end) {
        // checking if the element is present in the mid of that particular array / sub array.
        if (arr[mid] == key) {
            return mid;
        }

        // goto to the right side of the array
        if (key > arr[mid]) {
            start = mid + 1;
        }

        // goto the left side of the array
        else { //key < arr[mid]
            end = mid - 1;
        }

        // updating the value of the mid index
        mid = start + (end - start) / 2;
    }

    return -1;
}

int main(){
    int arr[6] = {2, 3, 25, 50, 60, 70};

    // int ans = linearSearch(arr, 8, 10);

    int ans = binarySearch(arr, 6, 25);

    cout << ans << endl;

    return 0;
}