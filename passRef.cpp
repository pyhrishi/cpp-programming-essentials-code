#include <iostream>
using namespace std;

void watch(int* viewsPtr) {
    *viewsPtr = *viewsPtr + 1;
}

int main() {
    int views = 100;
    watch(&views);
    cout<<views<<endl;

    return 0;
}