#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i = 0;
    int sum = 0;
    while(i<n) {
        int no;
        cin>>no;
        sum+=no;
        i++;
    }
    cout<<sum<<endl;

    return 0;
}