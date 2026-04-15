#include <iostream>
#include <vector>
using namespace std;

void moves_zeroes(vector<int>& arr) {
    if (arr.size() == 0) {
        cout << "Array is empty!" << endl;
        return;
    }
    
    int slow = 0;
    int temp;
    for(int fast = 0; fast < arr.size(); fast++) {
        if(arr[fast] != 0) {
            temp = arr[fast];
            arr[fast] = arr[slow];
            arr[slow] = temp;
            slow++; 
        }
    }
}

int main() {
    vector<int> arr = {45, 0, 28, 0, 19, 0, 58, 11};
    moves_zeroes(arr);
    cout << "Array after moving zeroes: ";
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}