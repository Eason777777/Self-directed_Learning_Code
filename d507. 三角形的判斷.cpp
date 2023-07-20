#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int num[3];
	for(int i=0;i<3;i++){
		cin>>num[i];
	}
	sort(num,num+3);
	if(num[0]*num[0]+num[1]*num[1]==num[2]*num[2]){
	cout<<"right triangle";	
	}
	else if(num[0]*num[0]+num[1]*num[1]>num[2]*num[2]){
		cout<<"acute triangle";
	}
	else if(num[0]*num[0]+num[1]*num[1]<num[2]*num[2]){
		cout<<"obtuse triangle";
	}
return 0;
}

