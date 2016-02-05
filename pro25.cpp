#include <iostream>
using namespace std;

int main(){
	int a[5] = {9, 7, 5, 2, 1};
	int b[5] = {8, 6, 4, 3, 0};
	int c[10];
	int i,j = 4, k=0;
	while(i>=0 && j>=0){
		if(a[i]<=b[j]){
			c[k] = a[i];
			k++;
			i--;
		} else{
			c[k] = b[j];
			k++;
			j--;
		}
	}
	for(i=0; i<10; i++){
		cout<<c[i]<<"\t";
	}
	cin>>d;
return 0;
}
