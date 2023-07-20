#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int A=0,B=0;
	for(int i=0;i<s.length();i++){
		if(i%2!=0){
			A=A+s.at(i)-48;
		}else{
			B=B+s.at(i)-48;
		}
	}
	cout<<abs(A-B)<<endl;
return 0;
}

