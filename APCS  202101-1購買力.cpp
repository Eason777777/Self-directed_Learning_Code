#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
	int n,d;
	cin>>n>>d;
	int count,ans=0;
	for(int i=0;i<n;i++){
		int price[3];
		int sum=0;
		for(int j=0;j<3;j++){
			cin>>price[j];
			sum+=price[j];
		}
		sort(price,price+3);
		if(price[2]-price[0]>=d){
			count++;
			ans+=(sum/3);
		}
	}
	cout<<count<<" "<<ans;
	
return 0;
}

