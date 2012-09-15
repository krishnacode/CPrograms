/* Interview Street String Reduction Problem*/
#include<stdio.h>
#include<stdlib.h>
int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}
int countChar(char str[])
{
    int arr[3]={0},i=0;
    while(str[i] !='\0')
    {
        arr[str[i]-'a']++;
        i++;
    }
    while(1)
    {
        qsort (arr, 3, sizeof(int), compare);
        if(arr[1]<=0)
            break;

        else
        {
            arr[2]--;
            arr[1]--;
            arr[0]++;
        }

    }

    return arr[2];
}


int main()
{
    int Test;
    char arr[101];
    scanf("%d",&Test);
    while(Test>0)
    {
        scanf("%s",arr);
        printf("%d\n",countChar(arr));
        Test--;
    }
   // system("pause");
}
