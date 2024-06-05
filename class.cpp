#include<iostream>

using namespace std;

class box{
    public:
        double a;
        double b;
        double c;
    double volume(void);
    void set(double a1,double a2,double a3);
};

double box::volume(void){
    return a*b*c;
}

void box::set(double a1,double a2,double a3){
    a=a1;
    b=a2;
    c=a3;
}

int main(){
    box box1;
    box1.set(10.0,11.0,12.0);
    double volume=box1.volume();
    cout<<volume<<endl;
}
