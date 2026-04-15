#include <iostream>

int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1) return n;

    int i = 0; // Pointer for the last unique element
    for (int j = 1; j < n; j++) {
        // If we find a new unique element
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }
    // New length is i + 1
    return i + 1;
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int newSize = removeDuplicates(arr, n);

    for (int i = 0; i < newSize; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}