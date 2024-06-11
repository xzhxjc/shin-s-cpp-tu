#include <stdio.h>
#include<stdlib.h>

typedef struct disjointSetnode {
    int data;
    int rank;
    struct disjointSetnode *parent;
} djnode;

djnode * makeset(int data){
    djnode* node=(djnode*)malloc(sizeof(djnode));
    node->data=data;
    node->rank=0;
    node->parent=node;
    return node;
}

djnode* findset(djnode* node){
    if(node->parent!=node){
        findset(node->parent);
    }
}

djnode* unionnode(djnode* node1,djnode* node2){
    djnode *root1=findset(node1);
    djnode *root2=findset(node2);
    if(root1==root2){
        return;
    }
    if (root1->rank>root2->rank){
        root2->parent=root1;
    }
    else if(root1->rank<root2->rank){
        root1->parent=root2;
    }
    else{
        root2->parent=root1;
        root1->rank++;
    }
}