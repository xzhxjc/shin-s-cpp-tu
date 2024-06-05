#include<iostream>

using namespace std;

typedef struct example{
    int data;
    float f;
    float g;
}example;

int main(){
    example a,b;
    float example::*f_ptr;
    int example::*i_ptr;
    f_ptr=&example::f;
    i_ptr=&example::data;
    a.*f_ptr=10.5;
    a.*i_ptr=10;
    b.*f_ptr=20.5;
    b.*i_ptr=20;
 }