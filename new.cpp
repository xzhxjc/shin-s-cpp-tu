#include<iostream>

using namespace std;

typedef struct list{
    int data;
    struct list *next;
}node;

node* create(){
    node* first = new node;
    first->data = 0;
    first->next = nullptr;
    return first;
}

void insert(node* first, int data){
    node* temp = first;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    node* newnode = new node;
    newnode->data = data;
    newnode->next = nullptr;
    temp->next = newnode;
}

void print(node* first){
    node* temp = first;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void cleanup(node* first) {
    node* temp = first;
    while (temp != nullptr) {
        node* next = temp->next;
        delete temp;
        temp = next;
    }
}

int main(){
    node* first = create();
    insert(first, 10);
    insert(first, 20);
    insert(first, 30);
    print(first);
    cleanup(first);
    return 0;
}