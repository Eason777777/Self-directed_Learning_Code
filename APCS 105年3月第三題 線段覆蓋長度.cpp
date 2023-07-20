#include <iostream>
#include <cmath>
//#include<ctime>
using namespace std;

int main()
{
	int N, minpart, maxpart;
	//	time_t start,end;
	cin >> N;
	int partmin[N], partmax[N];
	cin >> partmin[0] >> partmax[0];
	minpart = partmin[0];
	maxpart = partmax[0];
	for (int i = 1; i < N; i++)
	{
		cin >> partmin[i] >> partmax[i];
		minpart = min(minpart, partmin[i]);
		maxpart = max(maxpart, partmax[i]);
	}
	//	start=clock();
	int len = maxpart - minpart;
	if (len != 0)
	{
		int save[len] = {0};
		for (int i = 0; i < N; i++)
		{
			for (int j = partmin[i] - minpart; j < partmax[i] - minpart; j++)
			{
				save[j] = 1;
			}
		}
		int count = 0;
		for (int i = 0; i < len; i++)
		{
			if (save[i] == 1)
				count++;
		}
		cout << count;
	}
	else
	{
		cout << 0;
	}
	//	end=clock();
	//	cout<<"time:"<<(end-start)/double(CLOCKS_PER_SEC);
	return 0;
}
