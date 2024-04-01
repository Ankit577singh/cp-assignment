#include <iostream>
using namespace std;


int upper_bound(int arr[], int n, int x) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] > x) {
            result = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return result;
}

int lower_bound(int arr[], int n, int x) {
    int low = 0, high = n - 1, result = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x) {
            result = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return result;
}


bool is_present(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            return true;
        }
        else if (arr[mid] < x) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return false;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the sorted array elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int x;
    cout << "Enter the number to search: ";
    cin >> x;
    
    int lower = lower_bound(arr, n, x);
    if (lower != -1) {
        cout << "Lower bound of " << x << ": " << arr[lower] << endl;
    } else {
        cout << "No element is greater or equal to " << x << endl;
    }
    
    int upper = upper_bound(arr, n, x);
    if (upper != -1) {
        cout << "Upper bound of " << x << ": " << arr[upper] << endl;
    } else {
        cout << "No element is greater than " << x << endl;
    }
    
    if (is_present(arr, n, x)) {
        cout << x << " is present in the array" << endl;
    } else {
        cout << x << " is not present in the array" << endl;
    }

    return 0;
}
