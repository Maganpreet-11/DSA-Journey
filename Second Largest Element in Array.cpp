#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int second_largest_element(vector<int>& arr) {
    if (arr.size() < 2) {
        cout << "Not enough elements!" << endl;
        return -1;
    }

    int largest = INT_MIN;
    int second = INT_MIN;

    for (int num : arr) {
        if (num > largest) {
            second = largest;
            largest = num;
        } 
        else if (num > second && num != largest) {
            second = num;
        }
    }

    if (second == INT_MIN) {
        cout << "No second largest (all elements same)" << endl;
        return -1;
    }

    return second;
}