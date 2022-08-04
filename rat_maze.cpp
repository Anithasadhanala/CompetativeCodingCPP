  // Two directional either right or down 

// It is a Good Day

#include<bits/stdc++.h>
using namespace std;

int unique_paths(int i,int j,int r,int c,string s){

	if(i>r || j>c)	return 0;

	if(i==r && j==c){
		cout<<s<<endl;
		return 1;
	} 

	int right = unique_paths(i,j+1,r,c,s+'R');
	int down = unique_paths(i+1,j,r,c,s+'D');

	return right+down;
}


int main(){

	int r,c;
	cin>>r>>c;

	cout<<(unique_paths(0,0,r-1,c-1,""));
	
	return 0;

}














//  Four directional like + su=ymbol 
// here i used a 2d vector for neglecting the circles in the maze




// It is a Good Day

#include<bits/stdc++.h>
using namespace std;

int unique_paths(int i,int j,int r,int c,string s,vector<vector<int>>&v){

	if(i>r || j>c || i<0 || j<0 || v[i][j]==1) return 0;

	if(i==r && j==c){
		cout<<s<<endl;
		return 1;
	} 
	v[i][j] = 1;
	int right = unique_paths(i,j+1,r,c,s+'R',v);
	int down = unique_paths(i+1,j,r,c,s+'D',v);
	int left = unique_paths(i,j-1,r,c,s+'L',v);
	int top = unique_paths(i-1,j,r,c,s+'T',v);
	v[i][j]=0;
	return right+down+left+top;
}


int main(){

	int r,c;
	cin>>r>>c;
	vector<vector<int>>v(r,vector<int>(c,0));
	cout<<(unique_paths(0,0,r-1,c-1,"",v));
	
	return 0;

}









// without using  the left+top+... we can write a for loop as 



// It is a Good Day

#include<bits/stdc++.h>
using namespace std;

int unique_paths(int i,int j,int r,int c,string s,vector<vector<int>>&v,int arr_i[],int arr_j[],string &direc){

	if(i>r || j>c || i<0 || j<0 || v[i][j]==1) return 0;

	if(i==r && j==c){
		cout<<s<<endl;
		return 1;
	} 

	v[i][j] = 1;
	int  sum=0;
	for(int x=0;x<4;x++){
		sum+=unique_paths(i+arr_i[x],j+arr_j[x],r,c,s+direc[x],v,arr_i,arr_j,direc);
	}
	
	v[i][j]=0;
	return sum;
}


int main(){

	int r,c;
	cin>>r>>c;
	int arr_i[4] = {1,0,-1,0};
	int arr_j[4] = {0,1,0,-1};
	string direc = "DRUL";
	vector<vector<int>>v(r,vector<int>(c,0));
	cout<<(unique_paths(0,0,r-1,c-1,"",v,arr_i,arr_j,direc));
	
	return 0;

}














//   



