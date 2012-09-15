/*
 * Anagram.cpp
 *
 *  Created on: Aug 28, 2012
 *      Author: krishna
 *      anagram c code
 */
#include<iostream>
using namespace std;
static void toLowerCase(char *str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]=str[i]+'a'-'A';
		}
		i++;
	}
}

bool anagram(char *str1,char *str2)
{
	int i,arr[26]={0};
	toLowerCase(str1);
	toLowerCase(str2);
	while(str1[i]!='\0' || str2[i]!='\0')
	{
		if(str1[i]=='\0' || str2[i]=='\0')
			return false;
		else
		{
			arr[str1[i]-'a']++;
			arr[str2[i]-'a']--;
		}
		i++;
	}
	for(i=0;i<26;i++)
	{
		if(arr[i]!=0)
			return false;
	}
	return true;
}

int main()
{
	char *str1="abc";
	char *str2="cba";
	cout<<"String_1:"<<endl;
	cout<<"\""<<str1<<"\""<<endl;
	cout<<"String_2:"<<endl;
	cout<<"\""<<str2<<"\""<<endl;
	bool test=anagram(str1,str2);
	if(test)
	{
		cout<<"Anagram"<<endl;
	}
	else
	{
		cout<<"Not Anagram"<<endl;
	}

}

/*Output:

 String_1:
"abc"
String_2:
"cba"
Anagram

 */
