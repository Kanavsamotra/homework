#include <stdio.h>
#include <string.h>  
void main()
{  
   int conu;
   float chg, surchg=0, gramt,netamt;
   char connm[25];
   printf("Input the unit consumed by the customer : ");
   scanf("%d",&conu);
   if (conu <100 )
	chg = 1.50;
   else	if (conu>=100 && conu<200)
		chg = 2.50;
	else if (conu>=200 && conu<500)
			chg = 3.50;
		else
			chg = 2.00;
   gramt = conu*chg;
   if (gramt>300)
	surchg = gramt*15/100.0;
   netamt = gramt+surchg;
   if (netamt  < 100)
	netamt =100;
   printf("Net Amount Paid By the Customer     :%8.2f\n",netamt);

}  
