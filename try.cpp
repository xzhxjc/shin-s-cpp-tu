#include<iostream>

using namespace std;

int main(){
    string list="123456789";
    int index,len;
    cout<<list<<endl;
    while(true){
        cout<<"Enter the index and length to erase: ";
        cin>>index>>len;
        try{
            list.erase(index,len);
        }
        catch(out_of_range){
            cout<<"Out of range exception"<<endl;
            continue;
        }
        break;
    }
    cout<<"the new string is:"<<list<<endl;
    return 0;
}