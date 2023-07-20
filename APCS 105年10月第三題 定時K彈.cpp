#include<iostream>
#include<vector>
#include<ctime>
using namespace std;

int main(){
	time_t start,end;
	int N,M,K;
	
	cin>>N>>M>>K;
	vector <int> people;
	start=clock();
	for(int i=1;i<=N;i++){
		people.push_back(i);
	}
	int now=0;
	for(int i=0;i<K;i++){
		now=(now+M-1)%people.size();
//		cout<<now<<endl;
		people.erase(people.begin()+now);
//		for(int j=0;j<people.size();j++){
//			cout<<people.at(j)<<" ";
//		}
	}
	if(people.size()==1||now==people.size()){
		cout<<people.at(0); 
	}else{
		cout<<people.at(now);
	}
	end=clock();
	cout<<"time:"<<(end-start)/double(CLOCKS_PER_SEC);
return 0;
}

