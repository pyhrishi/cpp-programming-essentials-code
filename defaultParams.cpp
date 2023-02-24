#include <iostream>
using namespace std;

void play_music(int id = 1) {
    cout<<"Plyaing music "<<id<<endl;
}

int main() {
    play_music(5);
    play_music();
    return 0;
}