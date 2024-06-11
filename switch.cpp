#include <iostream>

using namespace std;

int main(){
    float num1=10.22;
    float num2=20.33;
    int num3;
    num3=static_cast<int>(num1)/static_cast<int>(num2);
    cout<<num3<<endl;
    return 0;
}