#include <iostream>
#include <vector>
using namespace std;

void sortArray(int n, vector<int>& arr) {
    for (int i = n - 1; i > 0; i--) {
        int maxIndex = 0;
        for (int j = 1; j <= i; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        swap(arr[maxIndex], arr[i]);  // Swap the found maximum element with the last element of the unsorted part
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter integers in array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sortArray(n, arr);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
