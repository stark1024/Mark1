#include <iostream>
using namespace std;

int beg, end, top=-1, A[10], l;

int quick(int a[], int b, int e, int loc){
	int left, right, i;
	left = b;
	right = e;
	loc = b;
	while(loc!=right || loc!=left){
	while(a[loc]<=a[right] && loc!=right){
		right-=1;
	}
	/*if(loc==right)
		return 0;*/
	if(a[loc]>a[right]){
		int t = a[loc];
		a[loc] = a[right];
		a[right] = t;
		loc = right;
	}
	while(a[left]<=a[loc] && left!=loc){
		left+=1;
	}
	/*if(loc==left)
		return 0;*/
	if(a[loc]<a[left]){
		int t = a[loc];
		a[loc] = a[left];
		a[left] = t;
		loc = left;
	}
	}
}

int main(){
	int c=1;
	while(c!=0){
	int i, j, s;
	int a[10];
	cout<<"enter elements in array:\n";
	for(i=0; i<10; i++){
		cin>>a[i];
	}
	cout<<"your array is:\n";
	for(i=0; i<10; i++){
		cout<<a[i]<<"\t";
	}
	cout<<"\nafter sorting:\n";


	int upper[10], lower[10];
	top+=1;
	lower[top]=0, upper[top]=9;
	while(top!=-1){
		beg = lower[top];
		end = upper[top];
		top-=1;
		quick(A, beg, end, l);
		if(beg<l-1){
			top+=1;
			lower[top] = beg;
			upper[top] = l-1;
		}
		if(l+1<end){
			top+=1;
			lower[top] = l+1;
			upper[top] = end;
		}
	}


	for(i=0; i<10; i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
	cin>>c;
	}
return 0;
}
