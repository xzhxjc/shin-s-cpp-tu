#include <iostream>

using namespace std;

class stack{
    public:
        int top=-1;
        int bottom=-1;
        int arr[5];
        void push(int a){
            if(top==4){
                cout<<"Stack is full"<<endl;
            }
            else{
                top++;
                arr[top]=a;
            }
        }
        void pop(){
            if(top==bottom){
                cout<<"Stack is empty"<<endl;
            }
            else{
                cout<<"Popped element is: "<<arr[top]<<endl;
                top--;
            }
        }
        void isEmpty(){
            if(top==bottom){
                cout<<"Stack is empty"<<endl;
            }
            else{
                cout<<"Stack is not empty"<<endl;
            }
        }
        void isFull(){
            if(top==4){
                cout<<"Stack is full"<<endl;
            }
            else{
                cout<<"Stack is not full"<<endl;
            }
        }
        void print(){
            if(top==-1){
                cout<<"Stack is empty"<<endl;
            }
            else{
                for(int i=0;i<=top;i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
        }
};

int main(){
    stack s;
    s.isEmpty();
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.isFull();
    s.print();
    s.pop();
    s.print();
    s.pop();
    s.print();
    return 0;
}