#include<stdio.h>
#include<stdlib.h>
int a[1000];
int k=0;
int h;
struct node
{
    int key;
    struct node *left, *right;
};
struct node *newNode(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

struct node* insert(struct node* node, int key)
{
    if (node == NULL) return newNode(key);
    if (key <= node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);   
    return node;
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        a[k++]=root->key;
        inorder(root->right);
    }
}
int height1(struct node *n,
                 int x, int h)
{
    if (n == NULL)
        return 0;
 
    if (n->key ==x)
        return h;
 
    int h2 = height1(n->left,x, h+1);
    if (h2 != 0)
        return h2;
 
    h2= height1(n->right, x, h+1);
    return h2;
}

int main()
{
    
    struct node *root = NULL;int n,k;
    printf("Enter no of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    scanf("%d",&k);
     root= insert(root,k);
  for(int i=1;i<n;i++)
  {scanf("%d",&k);
      insert(root,k);
  }
 
  struct node *r=NULL;
  inorder(root);
  printf("Second minimum value:%d\n",a[1]);
 
   int h=height1(root,a[1],1);
      if (h)
        printf(" Level %d",h);

    return 0;
}