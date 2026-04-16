#include <iostream>
#include <vector>

using namespace std;

int remove_element(vector<int>& nums, int val) {
    int k = 0; // This pointer tracks where the next "valid" element should go

    for (int i = 0; i < nums.size(); i++) {
        // If the current element is NOT the value we want to remove
        if (nums[i] != val) {
            nums[k] = nums[i]; // Move it to the 'k' position
            k++; // Increment k
        }
    }
    
    // k represents the number of elements that are not equal to 'val'
    return k;
}

int main() {
    vector<int> arr = {3, 2, 2, 3};
    int val = 3;
    
    int new_length = remove_element(arr, val);
    
    cout << "New length: " << new_length << endl;
    cout << "Modified array: ";
    for(int i = 0; i < new_length; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}