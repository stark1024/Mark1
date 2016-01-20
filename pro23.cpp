#include <iostream>
#include <cstddef>
using namespace std;

struct node{
	int info;
	node *l;
	node *r;
};

struct node *root = NULL;
struct node *p = NULL;
struct node *pr = NULL;
int count = 0;

void tree_ins(){
	node *n;
	n = new node;
	n->l = NULL;
	n->r = NULL;
	cout<<"\nEnter data: ";
	int data;
	cin>>data;
	n->info = data;
	if(count==0){
		root = n;
	} else{
		p = root;
		while(p!=NULL){
			if(p->info <= data){
				pr = p;
				p = p->r;
			}
			if(p->info > data){
				pr = p;
				p = p->l;
			}
		}
		if(pr->info <= data){
				pr->r = n;
		}
		if(pr->info > data){
				pr->l = n;
		}
		count+=1;
	}
}

int main(){
	int c=1;
	while(c!=0){
		tree_ins();
		cout<<"Want to add another value? (1=yes, 0=no)";
		cin>>c;
	}
	return 0;
}
