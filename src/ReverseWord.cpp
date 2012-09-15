
//<pre style="background-color:#ffc;border:2px solid gray;">
#include<iostream>
using namespace std;

void reverseWord(char *str,int start,int end)
{
	int i=start,j=end;
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
void sentence(char *str)
{
	int i,j;
	i=0;
	j=0;
	while(str[j]!='\0')
	{
		if(str[j]==' ')
		{
			reverseWord(str,i,j-1);//ignore space
			if(str[j+1]!='\0')
				i=j+1;
			else
				i=j;
		}
		j++;
	}
	//for last word
	reverseWord(str,i,j-1);//ignore null character at end
}
int main()
{
	char str[]=" programming and data structure ";
	cout<<"Original String:"<<endl;
	cout<<"\""<<str<<"\""<<endl;
	sentence(str);
	cout<<"Reversing each word in sentence:"<<endl;
	cout<<"\""<<str<<"\""<<endl;
}

/*Output
Original String:
" programming and data structure "
Reversing each word in sentence:
" gnimmargorp dna atad erutcurts "
 */
//</pre>
