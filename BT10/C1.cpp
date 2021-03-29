#include <iostream>
#include <string>

using namespace std;

struct zString
{
	int n;

	char* my_string;

	zString(const char* s)
	{
		n = strlen(s);
		my_string = new char;
		for (int i = 0; i < n; ++i)
		{
			my_string[i] = s[i];
		}
	}

	~zString()
	{
		//delete my_string;
	}

	void print()
	{
		for (int i = 0; i < n; ++i)cout << my_string[i];
	}

	void append(const char* mAppend)
	{
		char* temp = new char;
		for (int i = 0; i < n; ++i)
		{
			temp[i] = my_string[i];
		}
		for (int i = n; i < n + strlen(mAppend); ++i)
		{
			temp[i] = mAppend[i - n];
		}
		my_string = temp;
		n = n + strlen(mAppend);
	}

};

int main()
{
	zString gString("hi");
	gString.append(" there");
	gString.print();
	return 0;
}