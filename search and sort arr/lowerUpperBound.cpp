#include<iostream>
using namespace std;

int binarysearch(int arr[], int start, int end, int target) {
    int mid;
    while(start <= end) {
        mid = (start + end) / 2;
        if(arr[mid] == target) {
            return mid;
        }
        else if(arr[mid] > target) {
            return binarysearch(arr, start, mid - 1, target);
        }
        else {
            return binarysearch(arr, mid + 1, end, target);
        }
    }
    return -1; // in case target is not found
}

int lowerbound(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;
    int ans = size; // default to size (i.e., not found)

    while(start <= end) {
        int mid = (start + end) / 2;

        if(arr[mid] >= target) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans; // returns index of lower bound
}
int upperbound(int arr[], int size, int target) {
    int start = 0;
    int end = size - 1;
    int ans = size; // default to size (i.e., not found)

    while(start <= end) {
        int mid = (start + end) / 2;

        if(arr[mid] > target) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans; // returns index of lower bound
}

int main() {
    int arr[10] = {1, 2, 3, 3, 5, 6};
    
    // Test binary search
    // cout << binarysearch(arr, 0, 5, 6) << endl;

    // Test lower bound
    int idx = lowerbound(arr, 6, 3);
    if (idx < 6) {
        cout << "Lower bound index: " << idx << ", value: " << arr[idx] << endl;
    } else {
        cout << "Lower bound not found (all elements are smaller)." << endl;
    }
    cout<<upperbound(arr,6,3);
    return 0;
}
