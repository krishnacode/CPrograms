/* Enter your code here. Read input from STDIN. Print output to STDOUT */
/* Interview STreet Humanity Problem*/
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
int main()
{
    int Test,i,j,f;
    char D[100001];
    char V[100001];
    scanf("%d",&Test);
    while(Test>0)
    {
        scanf("%s %s",D,V);
        i=0;
        j=0;
        while(D[i]!='\0')
        {
                if(D[i]==V[j])
                {
                    j++;
                }
                else if(f==0)
                {
                    j++;
                    f=1;
                }
                else
                {
                	j=0;
                }
                if(V[j]=='\0')
                	printf("%d ",i-j+1);


              i++;

        }
        printf("\n");
        Test--;
    }
   // system("pause");
   return 0;
}
