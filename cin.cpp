#include<iostream>
using namespace std;

int main() {
    int phy, chem, maths;
    cin>>phy;
    cin>>chem;
    cin>>maths;

    float avg = (phy+chem+maths)/3.0;
    cout<<"Average "<<avg<<endl;

    return 0;
}