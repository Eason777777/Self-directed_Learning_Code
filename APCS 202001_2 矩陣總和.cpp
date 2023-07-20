#include<iostream>
#include<math.h>
using namespace std;

int main(){

	int s,t,n,m,r,smallsum=0,bigsum=0,countans=0,ansnum=2147483646;
	bool find=false;
	cin>>s>>t>>n>>m>>r;
	int small[s][t],big[n][m];
	for(int i=0;i<s;i++){
		for(int j=0;j<t;j++){
			cin>>small[i][j];
			smallsum+=small[i][j];
		} 
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>big[i][j];
		}
	}
	int CountNotSame=0;
	for(int k=0;k<=n-s;k++){
		for(int l=0;l<=m-t;l++){
			CountNotSame=0;
			bigsum=0;
			for(int i=0;i<s;i++){
				for(int j=0;j<t;j++){
					if(small[i][j]!=big[i+k][j+l]){
						CountNotSame+=1;
					}
					bigsum+=big[i+k][j+l];
				}
			}
			if(CountNotSame<=r){
				find=true;
				countans++;
				ansnum=min(abs(smallsum-bigsum),ansnum);
			}
		} 
	}
	if(find){
		cout<<countans<<endl<<ansnum;
	}else{
		cout<<countans<<endl<<-1;
	}

return 0;
}

