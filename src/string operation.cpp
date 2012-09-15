/*
 * StrRverse.cpp
 *
 *  Created on: Aug 26, 2012
 *      Author: krishna
 */

#include<iostream>
using namespace std;

/* Write a method to find length of a string.*/

int Length(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}
/* Write a method to reverse  a string.*/
void Reverse(char *str)
	{
		int i=0,j=Length(str)-1;
		char ch;
		while(i<j)
		{
			ch=str[i];
			str[i]=str[j];
			str[j]=ch;
			i++;
			j--;
		}

	}

/* Write a method to remove space  in a string.*/
	void removeSpace(char str[])
	{
		int i=0,j=0;
		while(str[i]!='\0')
		{
			if(str[i]==' ')
			{
				i++;
				continue;
			}
			str[j]=str[i];
			i++;
			j++;
		}
		str[j]='\0';
	}
	/* Write a method to remove duplicate character in a string.*/
	void duplicateChar(char *str)
	{
		int i=0,j=0,flag,k=0;
		while(str[i]!='\0')
		{
			flag=0;
			for(j=0;j<i;j++)
			{
				if(str[i]==str[j])
					{
					 flag=1;
					 break;
					}
			}
			 if(flag!=1)
				{
				   	 str[k]=str[i];
				  	 k++;
				}
		   i++;
		}
		str[k]='\0';
	}

/* Write a method to remove duplicate character in a string.*/
	void removeDup(char *str)
	{
		char arr[26]={0};
		int i=0,j=0;
		void toLower(char *str);
		toLower(str);
		while(str[i]!='\0')
		{
			arr[str[i]-'a']++;
		    if(arr[str[i]-'a']<=1)
		    {
		    	str[j]=str[i];
		    	j++;
		    }
			i++;
		}
		str[j]='\0';
	}

	void toLower(char *str)
	{
		int i=0;
		while(str[i]!='\0')
		{
			if(str[i]>=65 &&str[i]<=90)
			{
				str[i]=str[i]+'a'-'A';
			}
			i++;
		}
	}

/* Write a method to replace all spaces in a string with ‘%20’.*/

void replaceAll(char *str)
{
	int i=0,j=0,sp=0;

	while(str[i]!='\0')
	{
		if(str[i]==' ')
		     sp++;
		i++;
	}
	j=i+2*sp;
	j++;
	str[j]='\0';
	while(i>=0)
	{
		if(str[i]==' ')
		{
			str[j-1]='0';
			str[j-2]='2';
			str[j-3]='%';
			j--;
			j--;
			j--;
		}
		else
		{
			str[j-1]=str[i];
			j--;
		}
		i--;
	}

}

int main()
{
	char str[]=" Krishna Mohan Sinha ";
	char str2[]=" Programming Algorithm ";
	cout<<"Original String :"<<str<<endl;
    Reverse(str);
    cout<<"Reverse :"<<str<<endl;
    removeSpace(str);
    cout<<"Removing Space :"<< str<<endl;
    duplicateChar(str);
    cout<<"Removing Duplicate Character :"<< str<<endl;
    removeDup(str2);
    cout<<"Removing Duplicate Character :"<< str2<<endl;
    replaceAll(str2);
    cout<<"Replace ALl Space :"<< str2<<endl;
}

