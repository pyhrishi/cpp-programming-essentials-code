#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = ++x;
    cout << x << endl;
    cout << y << endl;

    int z = x++;
    cout << x << endl;
    cout << z << endl;
    cout << y<< endl;

    return 0;
}