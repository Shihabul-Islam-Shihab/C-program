#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a = 345.987;

    cout << setw(9)<<setfill('1')  << setprecision(4) << a << endl;

    return 0;
}
