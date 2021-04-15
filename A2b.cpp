#include<iostream>
using namespace std;
int main()
{
	int i, size;
	string s= "abcd";
	size = s.size();
	for(i=0;i<size;i++)
	{
		cout << s[i];
	}
	cout << endl << s;
}
