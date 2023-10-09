#include <bits/stdc++.h>
using namespace std;
class MyAddClass
{
public:
 void x(int a, int b)
 {
 int sum = a + b;
 cout << a << " + " << b << " = " << sum << endl;
 }
 void x(double a, double b)
 {
 double sum = a + b;
 cout << a << " + " << b << " = " << sum << endl;
 }
};
int main()
{
 MyAddClass overLoading;
 overLoading.x(5, 6);
 overLoading.x(56.6, 23.9);
 return 0;
}
