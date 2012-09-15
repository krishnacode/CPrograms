/*
 * Q. Implement an algorithm to determine if a string has all unique characters.
 * What if you can not use additional data structures?
 */
#include<iostream>
using namespace std;
static bool StrUnique(char *str)
{
	int arr[26]={0},i=0;
	while(str[i]!='\0')
	{
		if(str[i]!=' ')
			{
		      arr[str[i]-'a']++;
			}
		i++;
	}
	for(i=0;i<26;i++)
	{
		if(arr[i]>1)
			return false;
	}
	return true;
}
int main()
{

	const char *str=StrUnique("string")==1?"Unique":"Not Unique";
	cout<<str<<endl;
	str=StrUnique("sstring")==1?"Unique":"Not Unique";
	cout<<str<<endl;
	str=StrUnique("string abc")==1?"Unique":"Not Unique";
	cout<<str<<endl;
}


