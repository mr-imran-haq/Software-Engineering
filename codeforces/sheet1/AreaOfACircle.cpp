#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double R;
    cin >> R;

    const double PI = 3.141592653;

    double area = PI * R * R;

    cout << fixed << setprecision(9) << area;

    return 0;
}