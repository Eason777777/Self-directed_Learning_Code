#include<iostream>
using namespace std;

int main(){
	int n,amount,ans=0;
	cin>>n;
	for(int i=1;i<n+1;i++){
		cin>>amount;
		ans=ans+i*amount;
	}
	cout<<ans;
return 0;
}

