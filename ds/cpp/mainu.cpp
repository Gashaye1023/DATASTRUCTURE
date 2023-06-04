#include <iostream>
#include <vector>

using namespace std;

// Linear search function
int linear_search(vector<int> arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

// Binary search function
int binary_search(vector<int> arr, int target) {
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

// Bubble sort function
void bubble_sort(vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        for (int j = 0; j < arr.size() - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

// Selection sort function
void selection_sort(vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        int min_index = i;
        for (int j = i+1; j < arr.size(); j++) {
            if (arr[j] < arr[min_index]) {
               _index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

// Insertion sort function
void insertion_sort(vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int j = i - ;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

// Print function
void print(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Main function
int main() {
 vector<int> arr;
    int choice;
    do {
        cout << "1. Add element to list" << endl;
        cout << "2. Linear search" << endl;
        cout <<"3. Binary search" << endl;
        cout << "4. Bubble sort" << endl;
        cout << "5. Selection sort" << endl;
        cout << "6. Insertion sort" << endl;
        cout << "7. Print list" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int element;
                cout << "Enter element to add: ";
                cin >> element;
                arr.push_back(element);
                break;
            }
            case 2: {
                int target;
                cout << "Enter target value to search for: ";
                cin >> target;
                int result = linear_search(arr, target);
                if (result == -1) {
                    cout << "Target value not found in the list." << endl;
                } else {
                    cout << "Target value found at index " << result << "." << endl;
                }
                break;
            }
            case 3: {
                int target;
                cout << "Enter target value to search for: ";
                cin >> target;
                int result = binary_search(arr, target);
                if (result == -1) {
                    cout << "Target value not found in the list." << endl;
                } else {
                    cout << "Target value found at index " << result << "." << endl;
                }
                break;
            }
            case 4: {
                bubble_sort(arr);
                cout << "List sorted using bubble sort." << endl;
                break;
            }
            case 5: {
                selection_sort(arr);
                cout << "List sorted using selection sort." << endl;
                break;
            }
            case 6: {
                insertion_sort(arr);
                cout << "List sorted using insertion sort." << endl;
                break;
            }
            case 7: {
                print(arr);
                break;
            }
            case 8: {
                cout << "Exiting program." << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    } while (choice != 8);

    return 0;
}
