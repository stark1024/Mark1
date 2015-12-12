#include <iostream>
using namespace std;

int main(){
	cout<<"enter no.\n";
	int n;
	cin>>n;
	while(n>=10){
		s=0;
		while(n!=0){
			x = n%10;
			s = s+x;
			n = n/10;
		}
		n = s;
	}
	cout<<"\n"<<n;
	return 0;
}
