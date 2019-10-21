#include <cstdio>
#include <string>
#include <cmath>
using namespace std;

int main()
{
   int n,day=0,st=0,a=1;
   scanf("%d",&n);
   if (n==1)
   {
       printf("1");
   }
   else
   {
       do
       {
           if (a>=n)
                st=n;
            else
           {
               a*=2;
           }
           day++;
       }while (a<n);
       day++;
    printf("%d",day);
   }
}
