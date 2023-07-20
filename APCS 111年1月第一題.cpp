#include<iostream>
using namespace std;

int main(){
	int n,t,s,maxscore=-1,maxscoretime=0,countfalse=0,ans=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t>>s;
		if(s==-1){
			countfalse++;
		}
		else if(s>maxscore){
			maxscore=s;
			maxscoretime=t;
		}
	}
	ans=maxscore-n-countfalse*2;
	if (ans<0){
		ans=0;
	}
	cout<<ans<<" "<<maxscoretime;
return 0;
}

