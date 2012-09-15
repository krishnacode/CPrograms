/* Enter your code here. Read input from STDIN. Print output to STDOUT */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int Test;
    char arr[100001];
    int sum=0,j=0,k=0,i=0,count=0,l=0;
    scanf("%d",&Test);

    while(Test>0)
    {
        scanf("%s",arr);
        sum=j=strlen(arr);

        for(i=1;arr[i]!='\0';i++)
        {
         l=i;
         k=0;
         count=0;
         while( arr[l]!='\0' && arr[k]==arr[l] )
         {
          k++;
          l++;
          count++;
         }
         sum +=count;
        }
        printf("%d\n",sum);
        Test--;
    }
    //system("pause");
}
