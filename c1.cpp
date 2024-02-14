#include <stdio.h>
int main()
{
float l, m, e;
float p, et;
printf("Enter Inter arrival time of customers per hours:");

scanf("%f", &l);
printf("Enter The average time spent by cutomers perhour: ");

scanf("%f", &m);
p = 1 - l / m;
e = l / (m - l);
et = 1 / (m - l);
et = et * 60;
printf("\nThe probability That a customer wont't have to wait at counter: %.2f ", p);

printf("\nExpected number of customer: %.2f", e);
printf("\nExpected time to be spent in bank: %.2f minutes", et);

printf("\n\n");
return 0;
}
