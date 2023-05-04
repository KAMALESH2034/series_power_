#include<stdio.h>
#include<stdlib.h>
int main()
{
   int Nterm;
   scanf("%d",&Nterm);
   long long int res;
   int itr;


   if ( Nterm % 2 == 0)
   {
       // 3 s powerres = pow ( 3, ((Nterm/2)-1));
       for ( itr = 1, res = 1; itr <= ((Nterm/2)-1); res = res*3, itr+=1);

   }#include<stdio.h>
#include<stdlib.h>
int main()
{
   int Nterm;
   scanf("%d",&Nterm);
   long long int res;
   int itr;


   if ( Nterm % 2 == 0)
   {
       // 3 s powerres = pow ( 3, ((Nterm/2)-1));
       for ( itr = 1, res = 1; itr <= ((Nterm/2)-1); res = res*3, itr+=1);

   }
   else
   {
       // 2 s power
       res = pow( 2, (Nterm /2));
   }
   printf("%lld ", res);



    return EXIT_SUCCESS;
}
   else
   {
       // 2 s power
       res = pow( 2, (Nterm /2));
   }
   printf("%lld ", res);



    return EXIT_SUCCESS;
}
