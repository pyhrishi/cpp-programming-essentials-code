#include <iostream>
using namespace std;

int main() {
    int number;
    cin>>number;
    int sum = 0;
    while(number>0){
        int rem = number % 10;
        number/=10;
        sum+=rem;
    }
    cout<<sum<<endl;

    return 0;
}