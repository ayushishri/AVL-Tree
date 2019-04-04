/*Testing the AVL Tree*/

#include<stdio.h>
#include<stdlib.h>
#include "avlrot.h"
int main (void){
    int a;
    avlNode *root=NULL;
    /*add_bst(&root,5);
    add_bst(&root,3);
    add_bst(&root,-5);
    add_bst(&root,6);*/
    add_bst(&root,5);
    add_bst(&root,2);
    add_bst(&root,3);
    add_bst(&root,1);
    add_bst(&root,-1);




    printTreeInOrder(root);
    printf("\n");
    a=isAVL(&root);
    printf("isAVL: %d",a);
    return 0;

