/*
 * CountOne.cpp
 *
 *  Created on: Sep 4, 2012
 *      Author: krishna
 */
#include<iostream>
using namespace std;
int pSquare(int num)
{
	int i;
	for(i=0;i<=31 && pow(2,i<=num);i++)
	{
		if((int)pow(2,i)==num)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int t,c;
	int a,b,i,j;
	int count;
	cin>>t;
	//--
	//-+
	//++
	while(t>=0)
	{
		count=0;
		cin>>a>>b;
		if(a >=0 && b >=0)
		{
			for(i=b;i<=a;i++)
			{
				for(i=31;i>=0;i++)
				{
					if(a>>i&1)
						count++;
				}
			}

		}
		else if(a >= 0 && b<=0)
		{
		      if(abs(b)>a)
		      {
		    	  count +=32*(a+1);
		    	  a=-a-2;
		    	  if(a<b)
		    	  {
		    		  a=b=0;
		    		  break;
		    	  }
		      }
		      else
		      {
		    	  count +=32*int(abs(b));
		    	  b=abs(b);
		      }
		      for(i=b;i<=a;i++)
		      			{
		      				for(i=31;i>=0;i++)
		      				{
		      					if(a>>i&1)
		      						count++;
		      				}
		      			}
		}
		else if(a<=0 && b<=0)
		{

			for(i=b;i<=a;i++)
						{
							for(i=31;i>=0;i++)
							{
								if(a>>i&1)
									count++;
							}
						}

		}
		cout<<count<<endl;
		t--;
	}
}






