#include<bits/stdc++.h>
using namespace std;

const int k=1000000;
int arr[1000000];

void seive_creation(){
	for(int i=0;i<k;i++){
		arr[i]=i;
	}

	for(int i=2;i*i<=k;i++){
		if(arr[i]==i){
			for(int j=i*i;j<k;j+=i){
				arr[j]=i;
			}
		}
	}
}


int main(){
	seive_creation();
	int q;
	cin>>q;
	while(q--){
		int n;
		cin>>n;

		int i=n;
		while(i>1){
			cout<<arr[i]<<" ";
			i=i/arr[i];
		}
		cout<<endl;
	}



}
