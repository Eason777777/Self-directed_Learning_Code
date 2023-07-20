#include<iostream>
#include<string>
using namespace std;
int f(string x);
int g(string x,string y);
int h(string x,string y,string z);
bool isint=false;
string get(){
	isint=false;
	string a;
	cin>>a;
	if(a=="f"){
		string b=get();
		return to_string(f(b));
	}
	else if(a=="g"){
		string b=get();
		string c=get();
		return to_string(g(b,c));
	}
	else if(a=="h"){
		string b=get();
		string c=get();
		string d=get();
		return to_string(h(b,c,d));
	}
	else{
		isint=true;
		return a;
	}
	
}

int f(string x)
{
	//2x-3
	if(isint){
		return 2*stoi(x)-3;
	}
}
int g(string x,string y)
{
	//2x+y-7
	if(isint){
		return 2*stoi(x)+stoi(y)-7;
	}
}
int h(string x,string y,string z)
{
	//3x-2y+z
	if(isint){
		return 3*stoi(x)-2*stoi(y)+stoi(z);
	}
}
int main(){
	cout<<get();
return 0;
}

