#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *lchild;
	int data;
	struct node *rchild;
}*root=NULL;
printf("Binary search tree");
FILE *fp;
void up(int n)
{
	int a;
	scanf("%d",&a);
	printf("Value of a provided is : ",a); 
}
void insert(struct node *t,int key)
{
	//fp=fopen("Btrees1","r");
	//key=fgetc(fp);
	//while(key!=EOF)
	{
		struct node *p,*r=NULL;
		if(root==NULL)
		{
			p=(struct node*)malloc(sizeof(struct node));
			p->data=key;
			p->lchild=p->rchild=NULL;
			root=p;
			//return;
		}
		else
		{
			while(t!=NULL)
			{
				r=t;
				if(key<t->data)
					t=t->lchild;
				else if(key>t->data)
					t=t->rchild;
				else
				{
					printf("Khusi already present\n");
					return;
				}
			}
			p=(struct node*)malloc(sizeof(struct node));
			p->data=key;
			p->lchild=p->rchild=NULL;
			if(key<r->data)
			{
				r->lchild=p;
			}
			else
			{
				r->rchild=p;
			}
	    }
	    //key=fgetc(fp);
	}
	//fclose(fp);
}
int inorder(struct node *t)
{
	while(t!=NULL)
	{
		inorder(t->lchild);
		printf("%d\n",t->data);
		inorder(t->rchild);
		return 0;
	}
	return 0;
}
int preorder(struct node *t)
{
	while(t!=NULL)
	{
		printf("%d\n",t->data);
		preorder(t->lchild);
		preorder(t->rchild);
		return 0;
	}
	return 0;
}
int postorder(struct node *t)
{
	while(t!=NULL)
	{
		postorder(t->lchild);
		postorder(t->rchild);
		printf("%d\n",t->data);
		return 0;
	}
	return 0;
}
int main()
{
	int c;
	while(1)
	{
		printf("1. To insert element in binary search tree\n");
		printf("2. To perform inorder traversal\n");
		printf("3. To perform preorder traversal\n");
		printf("4. To perform postorder traversal\n");
		printf("5. To exit the program\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
			{
				int key;
				printf("Enter the element\n");
				scanf("%d",&key);
				insert(root,key);
				break;
			}
			case 2:
			{
				inorder(root);
				break;
			}
			case 4:
			{
				postorder(root);
				break;
			}
			case 3:
			{
				preorder(root);
				break;
			}
			case 5:
			{
				exit(0 );
				break;
			}
			default:
				printf("Wrong input\n");
		}
	}
}
// nice code keep this work doing 
// you are a five star coder
