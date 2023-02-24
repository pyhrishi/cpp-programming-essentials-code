#include <iostream>
using namespace std;

int main() {
    int n = 10;
    cout<<n<<endl;
    cout<<&n<<endl;

    int* xptr = &n;
    cout<<xptr<<endl;

    int** xxptr = &xptr;
    cout<<xxptr<<endl;
    cout<<&xptr<<endl;

    cout<<*xptr<<endl;
    cout<<**xxptr<<endl;
    cout<<*xxptr<<endl;

    return 0;
}