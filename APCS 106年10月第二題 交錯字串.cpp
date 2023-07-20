#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	string str;
	int k;
	cin >> k >> str;
	int strlength = str.length();
	int nowans = 0, finalans = 0, count1 = 0, count0 = 0;

	for (int i = 0; i < strlength; i++)
	{
		if (isupper(str[i]))
		{
			str[i] = '1';
		}
		else
		{
			str[i] = '0';
		}
	}

	if (str[0] == '1')
	{
		count1 = 1;
		if (k == 1)
		{
			nowans = k;
			finalans = k;
		}
	}
	else
	{
		count0 = 1;
		if (k == 1)
		{
			nowans = k;
			finalans = k;
		}
	}

	for (int i = 1; i < strlength; i++)
	{
		if (str[i] == '1' && str[i - 1] == '1')
		{
			count1++;
			count0 = 0;

			if (count1 == k)
			{
				nowans += k;
				if (nowans > finalans)
				{
					finalans = nowans;
				}
			}
			if (count1 > k)
			{
				nowans = k;
			}
			
		}
		else if (str[i] == '0' && str[i - 1] == '0')
		{
			count0++;
			count1 = 0;
			if (count0 == k)
			{
				nowans += k;
				if (nowans > finalans)
				{
					finalans = nowans;
				}
			}
			if (count0 > k)
			{
				nowans = k;
			}
		
		}
		else if (str[i] == '1' && str[i - 1] == '0')
		{
			if (count0 < k)
			{
				nowans = 0;
			}
			count1 = 1;
			count0 = 0;
			if (k == 1)
			{
				nowans = nowans + 1;
				if (nowans > finalans)
				{
					finalans = nowans;
				}
			}
			
		}
		else if (str[i] == '0' && str[i - 1] == '1')
		{
			if (count1 < k)
			{
				nowans = 0;
			}
			count1 = 0;
			count0 = 1;
			if (k == 1)
			{
				nowans = nowans + 1;
				if (nowans > finalans)
				{
					finalans = nowans;
				}
			}
		
		}
	}
	cout << finalans;

	return 0;
}
