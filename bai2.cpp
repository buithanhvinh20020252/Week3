#include<iostream>
using namespace std;
int main()
{
	string s;
	int i, j;
	cin >> s;
	int test =0;
	if(s.size()%2==0)
	{
		for (i=0;i<(s.size()/2)-1;i++)
		{
			for (j=s.size()-1-i;j>=s.size()/2;j--)
			{
				if (s[i]==s[j])
				{
					test=1;
				}
			
			}
		}
		if(test==1)
		{
			cout << "Yes";
		}
		else
		{
			cout << "No";
		}
	}
	if(s.size()%2!=0)
	{
		for(i=0;i<(s.size()/2)-2;i++)
		{
			for(j=s.size()-1-i;j>s.size()/2;j--)
			{
				if(s[i]==s[j])
				{
					test=1;
				}
			}
		}
		if(test==1)
		{
			cout << "Yes";
		}
		else
		{
			cout << "No";
		}
	}
}
