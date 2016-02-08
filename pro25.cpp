#include <iostream>
using namespace std;

int main(){
	int a[5] = {9, 5, 2, 1, 0};
	int b[5] = {8, 7, 6, 4, 3};
	int c[10];
	int i, j, k;
	i=j=k=0;
	while(i<5 && j<5){
		if(a[i]>=b[j]){
			c[k]=a[i];
			i++;
			k++;
		}
		if(b[j]>a[i]){
			c[k]=b[j];
			j++;
			k++;
		}
	}
	while(i!=5){
		c[k]=a[i];
		i++;
		k++;
	}
	while(j!=5){
		c[k]=b[j];
		j++;
		k++;
	}
	for(i=0; i<10; i++){
		cout<<c[i]<<"\t";
	}
	return 0;
}
