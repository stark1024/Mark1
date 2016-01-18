#include <iostream>
#include <cstddef>
using namespace std;

struct node{
	int info;
	node *l;
	node *r;
};

struct node *root = NULL;
int count = 0;

void max(){
	node *n;
	n = new node;
	n->l = NULL;
	n->r = NULL;
	cout<<"\nEnter data: ";
	int data;
	cin>>data;
	n->info = data;
	if(count==0){
		
	}
}
