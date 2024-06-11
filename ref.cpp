#include<iostream>
using namespace std;
void add(int& a){
    a++;
}
int main(){
    int x;
    int& r=x;
    x=100;
    cout<<x<<endl;
    cout<<r<<endl;
    add(r);
    cout<<x<<endl;
    cout<<r<<endl;
    add(x);
    cout<<x<<endl;
    cout<<r<<endl;
    return 0;
}