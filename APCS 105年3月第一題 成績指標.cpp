#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int num,max=61,min=59;
	cin>>num;
	int grade[num];
	for(int i=0;i<num;i++){
		cin>>grade[i];
	}
	sort(grade,grade+num);
	for(int i=0;i<num;i++){
		if(grade[i]<60){
			max=grade[i];
		}else if(grade[i]>=60){
			min=grade[i];
			break;
		}
	}
	for(int i=0;i<num-1;i++){
		cout<<grade[i]<<" ";
	}
	
	cout<<grade[num-1]<<endl;
	if(max!=61){
		cout<<max<<endl;
	}else{
		cout<<"best case\n";
	}
	if(min!=59){
		cout<<min;
	}else{
		cout<<"worst case";
	}

return 0;
}
