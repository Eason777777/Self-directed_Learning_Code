#include<iostream>
#include<string.h> 
using namespace std;

long long int max_hi=0;
long long int heightotal=0;
int root;

int h(int data[100000][100],int node){
	long long int height=0;
	int index=node-1;
	if(data[index][1]==0){
		return 0;
	}
	
	else{
		for(int i=2;i<=data[index][1]+1;i++){
			long long int temp=h(data,data[index][i])+1;
			height=max(temp,height);
		}
		return height;
	}
}
int main(){
	int n,first,tem;
	scanf("%d",&n);
	int data[n][100];
	for(int i=0;i<n;i++){
		scanf("%d",&first);
		data[i][0]=i+1;
		data[i][1]=first;
		if(first>0){
			for(int j=2;j<=(first+1);j++){
				scanf("%d",&tem);
				data[i][j]=tem;
			}
		}
	}
	for(int i=1;i<n;i++){
		long long int hi=h(data,i);
		if(hi>max_hi){
			max_hi=hi;
			root=i;
		}
		heightotal+=hi;
	}
	cout<<root<<endl<<heightotal;

return 0;
}

