#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double term=1,sum=0 ;
    int i=1;



    while(term>=0.000001){
 term=pow(1.0/i,i);
        sum=sum+term;
        i++;}

    cout << "Sum of the series to 0.0001% accuracy: " << sum << endl;

    return 0;
}

