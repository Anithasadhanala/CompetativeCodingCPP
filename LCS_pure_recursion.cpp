// It is a Good Day

#include<bits/stdc++.h>
using namespace std;


int longest_comman_subsequence(string &s1 , string &s2,int i,int j){

    if(i==-1 || j==-1){
    	return 0;
    }

	if(s1[i]==s2[j]){
		return 1 + longest_comman_subsequence(s1,s2,i-1,j-1);
	}
	else{
		int s11 = longest_comman_subsequence(s1,s2,i,j-1);
		int s22 = longest_comman_subsequence(s1,s2,i-1,j);

		return max(s11,s22);
	}
}



int main(){

	string s1,s2;
	cin>>s1>>s2;

	cout<<(longest_comman_subsequence(s1,s2,s1.size()-1,s2.size()-1));

	return 0;

}
