#include <iostream>
using namespace std;

int main() {
    int n, key;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the element to search for: ";
    cin >> key;

    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == key) {
            found = true;
            cout << "Element " << key << " found at position " << i + 1 << "." << endl;
            break;
        }
    }

    if (!found) {
        cout << "Element " << key << " not found." << endl;
    }

    return 0;
}
