#include <iostream>
#include <vector>

using namespace std;

void arrayEvenAndOdd(vector<int>& arr) {
    int left = 0, right = arr.size() - 1;

    while (left < right) {
        // Move left pointer until an odd number is found
        while (arr[left] % 2 == 0 && left < right) {
            left++;
        }
        // Move right pointer until an even number is found
        while (arr[right] % 2 != 0 && left < right) {
            right--;
        }
        // Swap if left pointer is still to the left of right pointer
        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main() {
    vector<int> arr = { 7, 2, 9, 4, 6, 1, 3, 8, 5 }; // Corrected initialization
    arrayEvenAndOdd(arr);

    cout << "Updated array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
