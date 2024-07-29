#include<iostream>
#include<vector>
using namespace std;

int searchElement(const vector<int>& arr) {
    int index = -1;
    int x;
    cin >> x;

    for (int i = 0; i < arr.size(); i++) { // Use '<' instead of '<='
        if (arr[i] == x) {
            index = i;
            break;
        }
    }

    return index; // Return the index instead of printing it
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < arr.size(); i++) { // Use '<' instead of '<='
        cin >> arr[i];
    }

    int index = searchElement(arr);
    if (index != -1) {
        cout << "Element found at index " << index << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
