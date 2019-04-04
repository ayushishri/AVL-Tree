#include<stdio.h>
#include<stdlib.h>
#include "avlrot.h"

int printTreeInOrder(avlNode*root)
{
    if (root==NULL)
        return 0;
    else{
    printTreeInOrder(root->l);
    printf ("%d\t",root->val);
    printTreeInOrder(root->r);
    }
}


int isAVL(avlNode **root){
    int rval;
    if (*root==NULL)
    {
        return 0;
    }
    else{
        if (rval==-1){
            return -1;}
        else{

        if (((*root)->l)!=NULL){

            isAVL(&((*root)->l));
            rval=depth(&(*root));

             printf ("%d\t",rval);}
        if (((*root)->r)!=NULL){
                 isAVL(&((*root)->r));

            rval=depth(&(*root));


            printf ("%d\t",rval);}
    }
}}

int depth(avlNode **root)
{
    int b=0;
    int lb=left(*root);
    int rb=right(*root);

    /*printf("lb: %d rb: %d b: %d\n",lb,rb,b);*/

    b=rb-lb;

    if (b==0||b==1||b==-1)
        return 0;
    else
        return -1;
}

int left (avlNode *root)
{
    if (left(root->l)==NULL)
        return 0;
    else
    {
        l+=a
    }
}

int right(avlNode *root)
{
    if (root==NULL)
        return 0;
    else
    {
        return right(root->r)+1;

    }
}
int rotate(avlNode **root,unsigned int Left0_Right1){
    if (Left0_Right1==0)
        return GoLeft(&(*root));
    else if (Left0_Right1==1)
        return GoRight(&(*root));
    else
        return -1;
}

int GoLeft(avlNode **root){
    avlNode *t1=(*root)->r;
    avlNode *t2=t1->l;
    t1->l=(*root);
    (*root)->r=t2;
    return 0;

}

int GoRight(avlNode **root) {
    avlNode *t1=(*root)->l;
    avlNode *t2=t1->r;
    t1->r=(*root);
    (*root)->l=t2;
    return 0;
}

int dblrotate(avlNode **root,unsigned int MajLMinR0_MajRMinL1){
    if (MajLMinR0_MajRMinL1==0)
        return RightLeft(&(*root));
    else if (MajLMinR0_MajRMinL1==1)
        return LeftRight(&(*root));
    else return -1;
}

int LeftRight(avlNode **root){
    GoLeft(&((*root)->l));
    GoRight(&(*root));
    return 0;
}

int RightLeft(avlNode **root){
    GoRight(&((*root)->r));
    GoLeft(&(*root));
    return 0;
}


int add_bst(avlNode **root,int val) {
    int lb;
    int rb;
   if (root == NULL) { return -1; }
   if (*root == NULL) {
      *root = (avlNode*)malloc(sizeof(avlNode));
      (*root) -> val = val;
      (*root) -> l = NULL;
      (*root)->r=NULL;
      lb=left(*root);
      rb=right(*root);
      (*root)->balance=rb-lb;
      return 0;
   } else {
       if (((*root)->val)==val)
           return 0;
       else if(((*root)->val)>val)
           return add_bst(&((*root)->l),val);
       else if(((*root)->val)<val)
           return add_bst(&((*root)->r),val);
       return -1;

   }
}
