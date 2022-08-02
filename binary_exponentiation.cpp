// It is a Good Day

#include<bits/stdc++.h>
using namespace std;

long power_function(int n,int p){
	if(p==1) return n;

	long k=power_function(n,p/2);

	if(p%2 == 0){
		return k*k;
	}
	else{
		return k*k*n;
	}
}


int main(){
	int n;
	cin>>n;
	int p;
	cin>>p;

	cout<<power_function(n,p);

	return 0;

}
