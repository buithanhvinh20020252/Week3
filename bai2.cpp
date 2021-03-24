#include<iostream>
using namespace std;
int main()
{
	string s;
	int i, j;
	cin >> s;
	int test =0;
	int length=s.size();
	for (i=0;i<length;i++)
	{
		if(s[i] != s[length-i-1])
		{
			test=1;
			break;
		}
	}
	
		if(test)
		{
			cout << "No";
		}
		else
		{
			cout << "Yes";
		}
	
}
