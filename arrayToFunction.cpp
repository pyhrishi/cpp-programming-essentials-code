#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<n<<endl;
}

int main() {
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    cout<<n<<endl;
    printArray(arr,n);
}