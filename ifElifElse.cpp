#include <iostream>
using namespace std;

int main() {
    int marks;
    cin>>marks;

    if(marks>90) cout<<"Well done"<<endl;
    else if (marks>80) cout<<"Good luck"<<endl;
    else if (marks>70) cout<<"Work hard"<<endl;
    else cout<<"Try"<<endl;

    return 0;
}