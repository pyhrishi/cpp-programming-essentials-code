#include <iostream>
using namespace std;

void play_music() {
    cout<<"Playing music"<<endl;
}

void sayHi(string name) {
    cout<<"Hi "<<name<<endl;
}

string sayHello(string name) {
    return "Hello " + name;
}

float areaCircle(int radius){
    return 3.14*radius*radius;
}

int main() {
    play_music();
    sayHi("Hrishi");
    sayHi("Neha");
    string res1 = sayHello("Hrishi");
    cout<<res1<<endl;
    cout<<sayHello("Neha")<<endl;

    float area = areaCircle(5);
    if(area>10){
        cout<<"We can cut the land"<<endl;
    } else cout<<"Small area"<<endl;
    return 0;
}