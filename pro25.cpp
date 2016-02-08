#include <iostream>
using namespace std;

int main(){
	int a[5] = {1, 5, 8, 40, 50};
	int b[5] = {2, 4, 6, 80, 91};
	int c[10];
	int i, j, k=0;
	for(i=0, j=0; i<5 || j<5;){
		if(a[i]<=b[j]){
			c[k]=a[i];
			i++;
		}
		if(b[j]<a[i]){
			c[k]=b[j];
			j++;
		}
		k++;
	}
	if(i==4){
		for(i=j; i<5; i++, k++)
			c[k]=b[i];
	}
	if(j==4){
		for(j=i; j<5; j++, k++)
			c[k]=a[j];
	}
	int d=1;
	while(d!=0){
		for(i=0; i<10; i++){
			cout<<c[i]<<"\t";
		}
		cin>>d;
	}
}
