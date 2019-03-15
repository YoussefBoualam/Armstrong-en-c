#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{   int i,j,k,N;
    for (i=1;i<=9;i++)
    {   for (j=0;j<=9;j++)
            {      for(k=0;k<=9;k++)
                   {N=i*100+j*10+k;
                   if (N==(i*i*i)+(j*j*j)+(k*k*k))
                   printf("%d\n",N);
                   }
            }
    }
  
  system("PAUSE");	
  return 0;
}
