#include<iostream>
#include <algorithm> // Include the <algorithm> header for the find function
#include <cstring>

using namespace std;

// Forward declaration for the find function
const int* find(int val,const int *arr);

int main(){
    int a[]={1,2,3,4,5};
    int *ptr;
    ptr=const_cast<int*>(find(3,a));
    if(ptr){
        cout<<*ptr<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}

const int* find(int val,const int *arr){
    int n=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<n;i++){
        if (arr[i]==val){
            return &arr[i];
        }
    }
    return 0;
}