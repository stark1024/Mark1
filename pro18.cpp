#include<iostream>
using namespace std;

int main(){
	int i, j, loc, s;
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
	for(i=0; i<10; i++){
		s=a[i];
		for(j=0; j<i; j++){
			if(a[j]>a[i]){
				loc=j;
				break;
			}
		}
		for(j=i; j>loc; j--){
			a[j]=a[j-1];
		}
		a[loc]=s;
	}
	for(i=0; i<10; i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
return 0;
}
