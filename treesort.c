#include<stdio.h>
#include<stdlib.h>
struct bstNode {
   int val;
   struct bstNode *l;
   struct bstNode *r;
};
typedef struct bstNode bstNode;

struct avlNode {
   int balance; /* -1 Left, 0 balanced, +1 Right */
   int val;
   struct avlNode *l;
   struct avlNode *r;
};
typedef struct avlNode avlNode;

struct qNode {
   avlNode *pval;
   struct qNode *nxt;
};
typedef struct qNode qNode;

int add_bst(bstNode **root,int val) {
   if (root == NULL) { return -1; }
   if (*root == NULL) {
      *root = (bstNode*)malloc(sizeof(bstNode));
      (*root) -> val = val;
      (*root) -> l = NULL;
      (*root)->r=NULL;
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
int printLevelOrder(bstNode*root)
{
    if ((root->l)!=NULL)
        return printTreeInOrder(root->l);
    if ((root->r)!=NULL)
        return printTreeInOrder(root->r);
    else
        printf("%d\n",root->val);
    return 0;
}

int printTreeInOrder(bstNode*root)
{
    if (root==NULL)
        return 0;
    else{
    printTreeInOrder(root->l);
    printf ("%d\n",root->val);
    printTreeInOrder(root->r);
    }
}

int main(void) {
       bstNode *root=NULL;
       int value=0;
       while (scanf("%d",&value) != EOF)
       {
           add_bst(&root,value);
       }
       printTreeInOrder(root);
       return 0;
}
