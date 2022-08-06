#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "coeffs.h"

int  main(void) //main function begins
{
 FILE *fp;
 double x, x1=0.0, mu=0.0, temp1 = 0.0;
int i=0;


printf("Mean and Variance of Uniform Distribution\n");
//Gaussian random numbers
gaussian("gau.dat", 1000000);

//Mean
mu = mean("gau.dat");
printf("Mean=%lf\n",mu);

//Variance
fp = fopen("gau.dat","r");

while(fscanf(fp,"%lf",&x)!=EOF)
{
i=i+1;
x1 = (x-mu)*(x-mu);
temp1 = temp1 + x1;
}

fclose(fp);
temp1 = temp1/(i-1);

printf("Variance=%lf\n",temp1);
return 0;
}


