#include <iostream>
using namespace std;

int main() {
    int n = 10;
    float a = 2.4;
    cout<<&n<<endl;
    cout<<&a<<endl;

    int* xptr = &n;
    cout<<xptr<<endl;
    cout<<&xptr<<endl;
    return 0;
}