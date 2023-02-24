#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    bool x = true;
    bool isRainy = false;

    char a = 'A';
    char b = '$';

    int c = 3456;
    float d = 3.145677;
    double f = 3.45566889;

    cout<<x<<endl;
    cout<<isRainy<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<setprecision(7)<<d<<endl;
    cout<<setprecision(9)<<f<<endl;

    return 0;
}