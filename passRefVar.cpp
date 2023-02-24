#include <iostream>
using namespace std;

void applyTax(int &income){
    income = income - income*0.1;
}

int main() {
    int income = 100;
    applyTax(income);
    cout<<income<<endl;
    return 0;
}