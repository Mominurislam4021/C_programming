/*program to convert temperature from degree F to degree C */

#include<stdio.h>
int main()
{
	float f,c;
	printf(" input the f value?");
	scanf("%f",&f);
	c=5.0/9.0*(f-32);
        printf("value in c =%6.2f\n",c);
	return 0;
}
