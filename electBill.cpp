#include <iostream>
using namespace std;

int main() {
    int units;
    cin>>units;
    int charges = 0;

    if(units<=100){
        charges = 0;
        cout<<charges<<endl;
    } else if (units <= 200) {
        charges = 0 + (units-100)*5;
        cout<<charges<<endl;
    } else if (units <= 300) {
        charges = 0 + 100*5 + (units-200)*10;
        cout<<charges<<endl;
    } else {
        charges = 0 + 100*5 + 100*10 + (units-300)*12;
        cout<<charges<<endl;
    }


    return 0;
}