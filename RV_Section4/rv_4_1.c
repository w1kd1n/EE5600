#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "coeffs.h"

void T(char *str, int len);

int  main(void) //main function begins
{


T("T.dat",1000000);
printf("4_1 Distribution Generated\n");




return 0;
}

//Defining the function for generating uniform random numbers
void T(char *str, int len)
{
int i;
FILE *fp;

fp = fopen(str,"w");
//Generate numbers
for (i = 0; i < len; i++)
{
fprintf(fp,"%lf\n",(double)rand()/RAND_MAX + (double)rand()/RAND_MAX);
}
fclose(fp);

}

