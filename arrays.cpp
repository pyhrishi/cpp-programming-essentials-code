#include <iostream>
using namespace std;

int main() {
    int a[100] = {1,2,3,4};

    int arrSize = sizeof(a)/sizeof(int);
    cout<<arrSize<<endl;
    for(int i=0; i<arrSize; i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}