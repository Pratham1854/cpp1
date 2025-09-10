#include <stack>
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 6, 7, 3, 6};
    int length = sizeof(arr) / sizeof(arr[0]);
    stack<int> s;
    int nge[5];

    // Last element has no greater element to its right
    nge[length - 1] = -1;
    s.push(arr[length - 1]);

    for (int i = length - 2; i >= 0; i--) {
        // Pop elements smaller than or equal to current
        while (!s.empty() && arr[i] >= s.top()) {
            s.pop();
        }

        // If stack is empty, no greater element
        nge[i] = s.empty() ? -1 : s.top();

        // Push current element to stack
        s.push(arr[i]);
    }

    // Print the NGE array
    for (int i = 0; i < length; i++) {
        cout << nge[i] << " ";
    }

    return 0;
}
