#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int s=(a+b+c)/2.0;
	int area=s*(s-a)*(s-b)*(s-c);
	cout<<area;
return 0;
}

