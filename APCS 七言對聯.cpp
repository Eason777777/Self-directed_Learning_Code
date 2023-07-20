#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int p[n*2][7];
	for(int i=0;i<2*n;i++){
		for(int j=0;j<7;j++){
			cin>>p[i][j];
		}
	}
	for(int i=0;i<2*n;i=i+2){
		bool hasoutput=false;
		if (p[i][1]==p[i][3]||p[i][1]!=p[i][5]||p[i+1][1]==p[i+1][3]||p[i+1][1]!=p[i+1][5]){
			cout<<"A";
			hasoutput=true;
		}
		if(p[i][6]==0||p[i+1][6]==1){
			cout<<"B";
			hasoutput=true;
		}
		if(p[i][1]==p[i+1][1]||p[i][3]==p[i+1][3]||p[i][5]==p[i+1][5]){
			cout<<"C";
			hasoutput=true;
		}
		if(hasoutput){
			cout<<endl;
		}
		else{
			cout<<"None\n";
		}
	}
	return 0;
}
