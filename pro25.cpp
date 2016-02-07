#include <iostream>
using namespace std;

int main(){
	int a[5] = {88, 27, 5, 2, 1};
	int b[5] = {9, 6, 4, 3, 1};
	int c[10];
	int i=4 ,j = 4, k=0;
	while(i!=0 || j!=0){
		if(a[i]<=b[j]){
			c[k] = a[i];
			k++;
			if(i!=0)
				i--;
		} else{
			c[k] = b[j];
			k++;
			if(j!=0)
				j--;
		}
	}
	if(i==0){
		for(i=j; i>=0; i--){
			j=0;
			if(a[j]<=b[i] && j==0){
				c[k] = a[0];
				k++;
				j--;
			} else{
				c[k] = b[i];
				k++;
			}
		}
	}
	if(j==0){
		for(j=i; j>=0; j--){
			i=0;
			if(a[j]>=b[i] && i==0){
				c[k] = b[0];
				k++;
				i--;
			} else{
				c[k] = a[j];
				k++;
			}
		}
	}
	int d=1;
	while(d!=0){
		for(i=0; i<10; i++){
			cout<<c[i]<<"\t";
		}
		cin>>d;
	}
return 0;
}
