#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    cout << "floor " << A << " / " << B << " = " << A / B << endl;
    cout << "ceil " << A << " / " << B << " = " << (A + B - 1) / B << endl;
    cout << "round " << A << " / " << B << " = " << round((double)A / B) << endl;

    return 0;
}