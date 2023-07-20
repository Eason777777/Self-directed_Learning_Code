#include <iostream>
#include <string>
using namespace std;
int f(), g(), h();

int f()
{
	string get;
	cin >> get;
	if (get == "f")
	{
		return 2 * f() - 3;
	}
	else if (get == "g")
	{
		return 2 * g() - 3;
	}
	else if (get == "h")
	{
		return 2 * h() - 3;
	}
	else
	{
//		cout<<2 * stoi(get) - 3<<endl;
		return 2 * stoi(get) - 3;
	}
}
int g()
{
	string get1, get2;
	cin >> get1;
	if (get1 == "f")
	{
		cin >> get2;
		if (get2 == "f")
		{
			return 2 * f() + f() - 7;
		}
		else if (get2 == "g")
		{
			return 2 * f() + g() - 7;
		}
		else if (get2 == "h")
		{
			return 2 * f() + h() - 7;
		}
		else
		{
			return 2 * f() + stoi(get2) - 7;
		}
	}
	else if (get1 == "g")
	{
		cin >> get2;
		if (get2 == "f")
		{
			return 2 * g() + f() - 7;
		}
		else if (get2 == "g")
		{
			return 2 * g() + g() - 7;
		}
		else if (get2 == "h")
		{
			return 2 * g() + h() - 7;
		}
		else
			return 2 * g() + stoi(get2) - 7;
	}
	else if (get1 == "h")
	{
		cin >> get2;
		if (get2 == "f")
			return 2 * h() + f() - 7;
		else if (get2 == "g")
			return 2 * h() + g() - 7;
		else if (get2 == "h")
			return 2 * h() + h() - 7;
		else
			return 2 * h() + stoi(get2) - 7;
	}
	else
	{
		cin >> get2;
		if (get2 == "f")
			return 2 * stoi(get1) + f() - 7;
		else if (get2 == "g")
			return 2 * stoi(get1) + g() - 7;
		else if (get2 == "h")
			return 2 * stoi(get1) + h() - 7;
		else
			return 2 * stoi(get1) + stoi(get2) - 7;
	}
}

int h()
{
	string get1, get2, get3;
	cin >> get1;
	if (get1 == "f")
	{
		cin >> get2;
		if (get2 == "f")
		{
			cin >> get3;
			if (get3 == "f")
			{
				return 3 * f() - 2 * f() + f();
			}
			else if (get3 == "g")
			{
				return 3 * f() - 2 * f() + g();
			}
			else if (get3 == "h")
			{
				return 3 * f() - 2 * f() + h();
			}
			else
			{
				return 3 * f() - 2 * f() + stoi(get3);
			}
		}
		else if (get2 == "g")
		{
			cin >> get3;
			if (get3 == "f")
			{
				return 3 * f() - 2 * g() + f();
			}
			else if (get3 == "g")
			{
				return 3 * f() - 2 * g() + g();
			}
			else if (get3 == "h")
			{
				return 3 * f() - 2 * g() + h();
			}
			else
			{
				return 3 * f() - 2 * g() + stoi(get3);
			}
		}
		else if (get2 == "h")
		{
			cin >> get3;
			if (get3 == "f")
			{
				return 3 * f() - 2 * h() + f();
			}
			else if (get3 == "g")
			{
				return 3 * f() - 2 * h() + g();
			}
			else if (get3 == "h")
			{
				return 3 * f() - 2 * h() + h();
			}
			else
			{
				return 3 * f() - 2 * h() + stoi(get3);
			}
		}
		else
		{
			cin >> get3;
			if (get3 == "f")
			{
				return 3 * f() - 2 * stoi(get2) + f();
			}
			else if (get3 == "g")
			{
				return 3 * f() - 2 * stoi(get2) + g();
			}
			else if (get3 == "h")
			{
				return 3 * f() - 2 * stoi(get2) + h();
			}
			else
			{
				return 3 * f() - 2 * stoi(get2) + stoi(get3);
			}
		}
	}
	else if (get1 == "g")
	{
		cin >> get2;
		if (get2 == "f")
		{
			cin >> get3;
			if (get3 == "f")
			{
				return 3 * g() - 2 * f() + f();
			}
			else if (get3 == "g")
			{
				return 3 * g() - 2 * f() + g();
			}
			else if (get3 == "h")
			{
				return 3 * g() - 2 * f() + h();
			}
			else
			{
				return 3 * g() - 2 * f() + stoi(get3);
			}
		}
		else if (get2 == "g")
		{
			cin >> get3;
			if (get3 == "f")
			{
				return 3 * g() - 2 * g() + f();
			}
			else if (get3 == "g")
			{
				return 3 * g() - 2 * g() + g();
			}
			else if (get3 == "h")
			{
				return 3 * g() - 2 * g() + h();
			}
			else
			{
				return 3 * g() - 2 * g() + stoi(get3);
			}
		}
		else if (get2 == "h")
		{
			cin >> get3;
			if (get3 == "f")
			{
				return 3 * g() - 2 * h() + f();
			}
			else if (get3 == "g")
			{
				return 3 * g() - 2 * h() + g();
			}
			else if (get3 == "h")
			{
				return 3 * g() - 2 * h() + h();
			}
			else
			{
				return 3 * g() - 2 * h() + stoi(get3);
			}
		}
		else
		{
			cin >> get3;
			if (get3 == "f")
			{
				return 3 * g() - 2 * stoi(get2) + f();
			}
			else if (get3 == "g")
			{
				return 3 * g() - 2 * stoi(get2) + g();
			}
			else if (get3 == "h")
			{
				return 3 * g() - 2 * stoi(get2) + h();
			}
			else
			{
				return 3 * g() - 2 * stoi(get2) + stoi(get3);
			}
		}
	}
	else if (get1 == "h")
	{
		cin >> get2;
		if (get2 == "f")
		{
			cin >> get3;
			if (get3 == "f")
			{
				return 3 * h() - 2 * f() + f();
			}
			else if (get3 == "g")
			{
				return 3 * h() - 2 * f() + g();
			}
			else if (get3 == "h")
			{
				return 3 * h() - 2 * f() + h();
			}
			else
			{
				return 3 * h() - 2 * f() + stoi(get3);
			}
		}
		else if (get2 == "g")
		{
			cin >> get3;
			if (get3 == "f")
			{
				return 3 * h() - 2 * g() + f();
			}
			else if (get3 == "g")
			{
				return 3 * h() - 2 * g() + g();
			}
			else if (get3 == "h")
			{
				return 3 * h() - 2 * g() + h();
			}
			else
			{
				return 3 * h() - 2 * g() + stoi(get3);
			}
		}
		else if (get2 == "h")
		{
			cin >> get3;
			if (get3 == "f")
			{
				return 3 * h() - 2 * h() + f();
			}
			else if (get3 == "g")
			{
				return 3 * h() - 2 * h() + g();
			}
			else if (get3 == "h")
			{
				return 3 * h() - 2 * h() + h();
			}
			else
			{
				return 3 * h() - 2 * h() + stoi(get3);
			}
		}
		else
		{
			cin >> get3;
			if (get3 == "f")
			{
				return 3 * h() - 2 * stoi(get2) + f();
			}
			else if (get3 == "g")
			{
				return 3 * h() - 2 * stoi(get2) + g();
			}
			else if (get3 == "h")
			{
				return 3 * h() - 2 * stoi(get2) + h();
			}
			else
			{
				return 3 * h() - 2 * stoi(get2) + stoi(get3);
			}
		}
	}

	else
	{
		cin >> get2;
		if (get2 == "f")
		{
			cin >> get3;
			if (get3 == "f")
			{
				return 3 * stoi(get1) - 2 * f() + f();
			}
			else if (get3 == "g")
			{
				return 3 * stoi(get1) - 2 * f() + g();
			}
			else if (get3 == "h")
			{
				return 3 * stoi(get1) - 2 * f() + h();
			}
			else
			{
				return 3 * stoi(get1) - 2 * f() + stoi(get3);
			}
		}
		else if (get2 == "g")
		{
			cin >> get3;
			if (get3 == "f")
			{
				return 3 * stoi(get1) - 2 * g() + f();
			}
			else if (get3 == "g")
			{
				return 3 * stoi(get1) - 2 * g() + g();
			}
			else if (get3 == "h")
			{
				return 3 * stoi(get1) - 2 * g() + h();
			}
			else
			{
				return 3 * stoi(get1) - 2 * g() + stoi(get3);
			}
		}
		else if (get2 == "h")
		{
			cin >> get3;
			if (get3 == "f")
			{
				return 3 * stoi(get1) - 2 * h() + f();
			}
			else if (get3 == "g")
			{
				return 3 * stoi(get1) - 2 * h() + g();
			}
			else if (get3 == "h")
			{
				return 3 * stoi(get1) - 2 * h() + h();
			}
			else
			{
				return 3 * stoi(get1) - 2 * h() + stoi(get3);
			}
		}
		else
		{
			cin >> get3;
			if (get3 == "f")
			{
				return 3 * stoi(get1) - 2 * stoi(get2) + f();
			}
			else if (get3 == "g")
			{
				return 3 * stoi(get1) - 2 * stoi(get2) + g();
			}
			else if (get3 == "h")
			{
				return 3 * stoi(get1) - 2 * stoi(get2) + h();
			}
			else
			{
				return 3 * stoi(get1) - 2 * stoi(get2) + stoi(get3);
			}
		}
	}
}
int main()
{
	string in;
	cin >> in;
	if (in == "f")
	{
		cout << f();
	}
	else if (in == "g")
	{
		cout << g();
	}
	else if (in == "h")
	{
		cout << h();
	}
	return 0;
}
