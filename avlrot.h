struct avlNode {
   int balance; /* -1 Left, 0 balanced, +1 Right */
   int val;
   struct avlNode *l;
   struct avlNode *r;
};
typedef struct avlNode avlNode;

int printTreeInOrder(avlNode*root);
int isAVL(avlNode **root);
int depth(avlNode **root);
int left (avlNode *root);
int right(avlNode *root);
int rotate(avlNode **root,unsigned int Left0_Right1);
int GoLeft(avlNode **root);
int GoRight(avlNode **root);
int dblrotate(avlNode **root,unsigned int MajLMinR0_MajRMinL1);
int LeftRight(avlNode **root);
int RightLeft(avlNode **root);
int add_bst(avlNode **root,int val);
