#include <iostream>
#include <vector>
#include <algorithm> // Required for max()

using namespace std;

// Changed return type to int
int Best_Time_to_Buy_and_Sell_Stock(vector<int>& arr) {
    if (arr.empty()) {
        return 0;
    }

    int min_so_far = arr[0];
    int max_profit = 0; // Initialize to 0

    for (int i = 0; i < arr.size(); i++) {
        // Update the lowest price seen so far
        if (arr[i] < min_so_far) {
            min_so_far = arr[i];
        }
        
        // Calculate profit if we sold today
        int current_profit = arr[i] - min_so_far;
        
        // Update max_profit if current_profit is better
        max_profit = max(max_profit, current_profit);
    }
    
    return max_profit;
}

int main() {
    // Use a vector to match the function signature
    vector<int> prices = {7, 1, 5, 3, 6, 4};
    
    cout << "Max Profit: " << Best_Time_to_Buy_and_Sell_Stock(prices) << endl;
    
    return 0;
}