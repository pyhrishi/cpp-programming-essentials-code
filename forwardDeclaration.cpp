#include <iostream>
using namespace std;

//Forward Declaration
void playMusic(int id);

int main() {
    playMusic(5);
    return 0;
}

void playMusic(int id){
    cout<<"Playing music "<<id<<endl;
}