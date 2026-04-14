#include <iostream>
#include <vector>
using namespace std;

bool check_sorted(vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i - 1] > arr[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> arr = {1, 6, 3, 4, 5};
    cout << (check_sorted(arr) ? "Sorted" : "Not Sorted");
}