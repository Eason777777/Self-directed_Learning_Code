#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n,max,min;
	cin>>n;
	int busstop[n][2];
	for(int i=0;i<n;i++){
		for(int j=0;j<2;j++){
			cin>>busstop[i][j];
		}
	}
	max=abs(busstop[0][0]-busstop[0+1][0])+abs(busstop[0][1]-busstop[0+1][1]);
	min=abs(busstop[0][0]-busstop[0+1][0])+abs(busstop[0][1]-busstop[0+1][1]);
	for(int i=1;i<n-1;i++){
		int x=abs(busstop[i][0]-busstop[i+1][0])+abs(busstop[i][1]-busstop[i+1][1]);
		if(x>max)
			max=x;
		else if(x<min)
			min=x;
	}
	cout<<max<<" "<<min;
return 0;
}

