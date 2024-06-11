#include<iostream>

using namespace std;

void print(int a){
    cout << "Value of a is: " << a << endl;
}

void print(double a){
    cout << "Value of a is: " << a << endl;
}

int main(){
    int a=10;
    double b=10.5;
    print(a);
    print(b);
    return 0;
}