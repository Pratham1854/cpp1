#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int original_n = n;  // Keep the original number safe
    int a = 0;

    // Count the number of digits
    int temp = n;
    while (temp != 0) {
        temp = temp / 10;
        a++;
    }

    int pow = std::pow(10, a - 1);

    while (pow != 0) {
        int q = original_n / pow;
        cout << q << endl;
        original_n = original_n % pow;
        pow = pow / 10;
    }

    return 0;
}
