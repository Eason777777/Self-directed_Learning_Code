#include<iostream>
#include<string>
using namespace std;
int f(string x);
int g(string x,string y);
int h(string x,string y,string z);
string get(){
	string a;
	cin>>a;
	return a;
}

f(string x)//2x-3
{
	if(x=="f"){
		return 2*f(get())-3;
	}
	else if(x=="g"){
		return 2*g(get(),get())-3;
	}
	else if(x=="h"){
		return 2*h(get(),get(),get())-3;
	}
	else{
		return 2*stoi(x)-3;
	}
}

g(string x,string y)//2x+y-7
{
	string temp;
	temp=y;
	y=x;
	x=temp;
	if(x=="f"){
		string inn;
		cin>>inn;
		if(inn=="f"){
			return 2*f(y)+f(get())-7; 
		}
		else if(inn=="g"){
			return 2*f(y)+g(get(),get())-7; 
		}
		else if(inn=="h"){
			return 2*f(y)+h(get(),get(),get())-7;
		}
		else{
			return 2*f(y)+stoi(inn)-7;
		}	
	}
	else if(x=="g"){
		string inn1,inn2;
		cin>>inn1>>inn2;
		if(inn2=="f"){
			return 2*g(inn1,y)+f(get())-7; 
		}
		else if(inn2=="g"){
			return 2*g(inn1,y)+g(get(),get())-7; 
		}
		else if(inn2=="h"){
			return 2*g(inn1,y)+h(get(),get(),get())-7;
		}
		else{
			return 2*g(inn1,y)+stoi(inn2)-7;
		}
	}
	else if(x=="h"){
		string inn1,inn2,inn3;
		cin>>inn1>>inn2>>inn3;
		if(inn3=="f"){
			return 2*h(inn2,inn1,y)+f(get())-7; 
		}
		else if(inn3=="g"){
			return 2*h(inn2,inn1,y)+g(get(),get())-7; 
		}
		else if(inn3=="h"){
			return 2*h(inn2,inn1,y)+h(get(),get(),get())-7;
		}
		else{
			return 2*h(inn2,inn1,y)+stoi(inn3)-7;
		}
	}
	else{
		if(y=="f"){
			return (2*stoi(x)+f(get())-7);
		}
		else if(y=="g"){
			return (2*stoi(x)+g(get(),get())-7);
		}
		else if(y=="h"){
			return (2*stoi(x)+h(get(),get(),get())-7);
		}
		else{
			return (2*stoi(x)+stoi(y)-7);
		}	
	}
}
h(string x,string y,string z)//3x-2y+z
{
	string temp;
	temp=z;
	z=x;
	x=temp;
	if(x=="f"){
		if(y=="f"){
			if(z=="f"){
				string in1,in2;
				cin>>in1>>in2;
				if(in2=="f"){
					return 3*f(y)-2*f(in1)+f(get()); 
				}
				else if(in2=="g"){
					return 3*f(y)-2*f(in1)+g(get(),get()); 
				} 
				else if(in2=="h"){
					return 3*f(y)-2*f(in1)+h(get(),get(),get()); 
				}
				else{
					return 3*f(y)-2*f(in1)+stoi(in2);
				}
			}
			else if(z=="g"){
				string in1,in2,in3;
				cin>>in1>>in2>>in3;
				if(in3=="f"){
					return 3*f(y)-2*g(in2,in1)+f(get()); 
				}
				else if(in3=="g"){
					return 3*f(y)-2*g(in2,in1)+g(get(),get());
				}
				else if(in3=="h"){
					return 3*f(y)-2*g(in2,in1)+h(get(),get(),get());
				}
				else{
					return 3*f(y)-2*g(in2,in1)+stoi(in3);
				}
			}
			else if(z=="h"){
				string in1,in2,in3,in4;
				cin>>in1>>in2>>in3>>in4;
				if(in4=="f"){
					return 3*f(y)-2*h(in3,in2,in1)+f(get());
				}else if(in4=="g"){
					return 3*f(y)-2*h(in3,in2,in1)+g(get(),get());
				}else if(in4=="h"){
					return 3*f(y)-2*h(in3,in2,in1)+h(get(),get(),get());
				}else{
					return 3*f(y)-2*h(in3,in2,in1)+stoi(in4);
				}
			}
			else{
				string in;
				cin>>in;
				if(in=="f"){
					return 3*f(y)-2*stoi(z)+f(get()); 
				}
				else if(in=="g"){
					return 3*f(y)-2*stoi(z)+g(get(),get()); 
				} 
				else if(in=="h"){
					return 3*f(y)-2*stoi(z)+h(get(),get(),get()); 
				}
				else{
					return 3*f(y)-2*stoi(z)+stoi(in);
				}
			}
		}
		else if(y=="g"){
			if(z=="f"){
				string inn1,inn2;
				cin>>inn1;
				string getgx=to_string(f(inn1));
				cin>>inn2;
				return 3*g(getgx,inn2)-2;
			}
			else if(z=="g"){
				
			}
			else if(z=="h"){
				
			}
			else{
				
			}
		}
		else if(y=="h"){
			if(z=="f"){
				
			}
			else if(z=="g"){
				
			}
			else if(z=="h"){
				
			}
			else{
				
			}
		}
		else{
			if(z=="f"){
				
			}
			else if(z=="g"){
				
			}
			else if(z=="h"){
				
			}
			else{
				
				return 3*f(y)-2;
			}
		}
		
	}
	else if(x=="g"){
		
	}
	else if(x=="h"){
		
	}
	else{
		
		return 3*stoi(x)-2*stoi(y)+stoi(z);
	}
}

int main(){
	string in;
	cin>>in;
	if(in=="f"){
		cout<<f(get());
	}
	else if(in=="g"){
		cout<<g(get(),get());
	}
	else if(in=="h"){
		cout<<h(get(),get(),get());
	}
return 0;
}

