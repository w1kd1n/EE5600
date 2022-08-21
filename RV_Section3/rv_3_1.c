#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "coeffs.h"

void V(char *str, int len);

int  main(void) //main function begins
{


V("V.dat",1000000);
printf("3_1 Distribution Generated\n");




return 0;
}

//Defining the function for generating uniform random numbers
void V(char *str, int len)
{
int i;
FILE *fp;

fp = fopen(str,"w");
//Generate numbers
for (i = 0; i < len; i++)
{
fprintf(fp,"%lf\n",-2*log(1-((double)rand()/RAND_MAX)));
}
fclose(fp);

}

