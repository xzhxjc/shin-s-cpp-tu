#include <iostream>
#include <string>

using namespace std;

int main(){
    string str1="happy ";
    string str2="birthday";
    string str3;
    str1.replace(6,0,str2);
    cout<<str1<<endl;
    return 0;
}