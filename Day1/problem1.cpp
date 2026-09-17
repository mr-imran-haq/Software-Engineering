#include <iostream>
using namespace std;
#include <array>

int main() {
    int n, i, j;
    cout << "Enter How Many Elements You Want To Add: ";
    cin >> n;

    int arr[n];
    
    cout << "Enter Elements: ";
    for (i=0; i<n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    int secMax = arr[0];

    for (i=0; i<n; i++) {
        if (arr[i] > max) {
            secMax = max;
            max = arr[i];
        }
        else if (arr[i] > secMax && max != arr[i]) {
            secMax = arr[i];
        }
    }
    cout << "Maximum Number: " << max << endl;
    cout << "Second Maximum Number: " << secMax << endl;

    return 0;
}