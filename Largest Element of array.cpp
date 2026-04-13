#include <iostream>
#include <vector>
using namespace std;
int largest_element(vector<int>&arr){
    int largest = arr[0];
    int n = sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    return largest;
}

int main(){
    vector<int>  arr = {45,76,28,43,19,67,58,11};
    cout << "Largest Element: " << largest_element(arr);
}