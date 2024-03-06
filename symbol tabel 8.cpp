#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
# define null 0
int size=0;
void ins();
void del();
int sear(char label[]);
void dis();

struct st
{
	char label[10];
	int add;
	struct st *nxt;
};

struct st *h,*lnn,*t,*p,*q;

int main()
{
	h=0;
	int op;
	int y;
	char la[10];
	do
	{
		printf("1-ins 2-dis 3-del 4-sear 5-end\n");
		printf(" enter your option \t ");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				ins();
				break;
			case 2:
				dis();
				break;
			case 3:
				del();
				break;
			case 4:
				printf("enter label to search  ");
				scanf("%s",la);
				y=sear(la);
				if (y==1)
				printf("label is found\n");
				else
				printf("label not found\n");
				break;
			case 5:
				break;
			
		}
		
	}
	while(op<5);
}

//inserting  

void ins()
{
	int n;
	char l[10];
	printf("enter a label : ");
	scanf("%s",l);
	n=sear(l);
	if(n==1)
	printf("label already exist\n");
	else
	{
		struct st *nn;
		nn=(struct st*)malloc(sizeof(struct st));
		strcpy(nn->label,l);
		printf("enter address ");
		scanf("%d",&nn->add);
		nn->nxt=null;
		
		if(h==0)
		{
			h=t=nn;
		}
		else
		{
			t->nxt=nn;
			t=nn;
		}
		
	}
}

int sear(char lab[])
{
	int i,f=0;
	
	p=h;
	while(p!=null)
	{
		if(strcmp(p->label,lab)==0)
		f=1;
		p=p->nxt;
	}
	
	return f;
}

void del()
{
	int a;
	char l[10];
	
	p=h;
	printf("enter label to delete ");
	scanf("%s",l);
	a=sear(l);
	if (a==0)
	printf("label not found");
	else
	{
		if(strcmp(h->label,l)==0)
		h=h->nxt;
		else if(strcmp(t->label,l)==0)
		{
			while(p->nxt!=0)
			p=p->nxt;
			q=h;
			while(q->nxt!=p)
			q=q->nxt;
			
			q->nxt=null;
			
		}
		else
		{
			q=p=h;
			while(!(strcmp(p->label,l)==0))
			{
				p=p->nxt;
			}
			while(q->nxt!=p)
			q=q->nxt;
			
			q->nxt=p->nxt;
			p->nxt=null;
			free(p);
			
		}
		
	}
}

void dis()
{
	int i;
	
	p=h;
	printf("label \t address\n");
	while(p!=0)
	{
		printf("%s\t%d\n",p->label,p->add);
		p=p->nxt;
	}
	
}
