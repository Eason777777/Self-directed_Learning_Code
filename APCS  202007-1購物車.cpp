#include<iostream>
using namespace std;

int main(){
	int a,b,n,ans=0,buy;
	cin>>a>>b>>n;
	for(int i=0;i<n;i++){
		int buya=0,buyb=0;
		while(1){
			cin>>buy;
			if(buy==0){
				if(buya>0&&buyb>0){
					ans++;
				}
				break;
			}
			if(buy==a){
				buya++;
			}
			if(buy==-a){
				buya--;
			}
			if(buy==b){
				buyb++;
			}
			if(buy==-b){
				buyb--;
			}
		}
	}
	cout<<ans<<endl;
return 0;
}

