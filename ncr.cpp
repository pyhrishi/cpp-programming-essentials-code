#include <iostream>
using namespace std;

int factorial(int n) {
    int ans = 1;
    for(int i=1; i<=n; i++){
        ans*=i;
    }
    return ans;
}

int binom(int n, int r){
    return factorial(n) / (factorial(n-r) * factorial(r));
}

int main() {
    int n, r;
    cin>>n>>r;
    cout<<binom(n,r)<<endl;
}