
// It is a Good Day

#include<bits/stdc++.h>
using namespace std;

const int n= 1e6+1;
int arr[n];

void seive_erothes(){
	for(int i=0;i<n;i++){
		arr[i]=0;
	}

	for(int i=2;i*i<=n;i++){
		if(arr[i]==0){
			for(int j=2*i;j<=n;j+=i){
				arr[j] = i;
			}
		}
		
	}

}

int main(){

	seive_erothes();

	int m;
	cin>>m;
	while(m--){
		int k;
		cin>>k;
		int i=k;
		while(arr[i]!=0){
			cout<<arr[i]<<" ";
			i=i/arr[i];
		}
		cout<<i;
		cout<<endl;
	
	}
	
	return 0;

}
