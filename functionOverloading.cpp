#include <iostream>
using namespace std;

int area(int l, int b){
    return l*b;
}

int area(int l){
    return l*l;
}

int main() {
    cout<<area(4,5)<<endl;
    cout<<area(4)<<endl;
}