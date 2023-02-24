#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a,b,c,d,e;
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;

    float avg = (float)(a+b+c+d+e)/5;
    cout<< fixed << setprecision(4) << avg << endl;
    return 0;
}