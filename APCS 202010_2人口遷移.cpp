#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int R,C,k,m,ans1=101,ans2=-1;
	cin>>R>>C>>k>>m;
	int city[R+2][C+2],citychange[R][C]={};
	for(int i=0;i<R+2;i++){
		for(int j=0;j<C+2;j++){
			city[i][j]=-1;
		}
	}
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			cin>>city[i+1][j+1];
		}
	}
	for(int i=0;i<R+2;i++){
		for(int j=0;j<C+2;j++){
			cout<<city[i][j]<<" ";
		}
		cout<<endl;
	}
	for(int time=0;time<m;time++){
		for(int i=0;i<R;i++){
			for(int j=0;j<C;j++){
				if(city[i][j]==-1){
					continue;
				}
				if(city[i-1][j]!=-1){
					citychange[i-1][j]+=floor(city[i][j]/k);
					citychange[i][j]-=floor(city[i][j]/k);
				}
				if(city[i+1][j]!=-1){
					citychange[i+1][j]+=floor(city[i][j]/k);
					citychange[i][j]-=floor(city[i][j]/k);
				}
				if(city[i][j-1]!=-1){
					citychange[i][j-1]+=floor(city[i][j]/k);
					citychange[i][j]-=floor(city[i][j]/k);
				}
				if(city[i][j+1]!=-1){
					citychange[i][j+1]+=floor(city[i][j]/k);
					citychange[i][j]-=floor(city[i][j]/k);
				}
				
				
			}
		}
		for(int i=0;i<R;i++){
			for(int j=0;j<C;j++){
				city[i+1][j+1]+=citychange[i][j];
				cout<<citychange[i][j]<<" "; 
			}
			cout<<endl;
		}
		for(int i=0;i<R+2;i++){
		for(int j=0;j<C+2;j++){
			cout<<city[i][j]<<" ";
		}
		cout<<endl;
	}
	}
	
	
	
	for(int i=1;i<R;i++){
		for(int j=1;j<C;j++){
			if(city[i][j]!=-1){
				ans1=min(city[i][j],ans1);
				ans2=max(city[i][j],ans2);
			} 
		}
	}
	cout<<ans1<<endl<<ans2;
return 0;
}

