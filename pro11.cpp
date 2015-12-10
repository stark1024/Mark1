#include <iostream>
#include <utility>
//#include <tuple>
using namespace std;

std::pair<int, int> min(int b[], int x, int y){
	int c = b[x], i, k;
	for(i=x; i<y; i++){
		if(c>=b[i]){
			c = b[i];
			k = i;
		}
	}
	return std::make_pair(c, k);
}

int main(){
	int n, a[n], i, j, m, r;
	cout<<"enter no. of elements in array\n";
	cin>>n;
	cout<<"enter all the elements\n";
	for(i=0; i<n; i++)
		cin>>a[i];

	cout<<"your array is:\n";
	for(i=0; i<n; i++)
		cout<<a[i]<<"\t";

	cout<<"\nafter sorting:\n";
	for(i=0; i<n; i++){
		std::pair<int, int> p = min(a, i, n);
		m = p.first;
		r = p.second;
		//std::tuple(m, r) = min(a, i, n);
		for(j=r; j>i; j--){
			a[j] = a[j-1];
		}
		a[i] = m;
	}
	for(i=0; i<n; i++)
		cout<<a[i]<<"\t";
return 0;
}
