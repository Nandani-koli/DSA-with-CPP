/* Program 1_____
#include<stdio.h>
int main()
{
int a = 1;
a = 5, 2, 3;
printf("%d", a);
return 0;
}
________OUTPUT = 5_______
*/

/* Program 2
#include<stdio.h>
int main()
{
int a;
a = (1, 2, 3);
printf("%d", a);
return 0;
}
________OUTPUT = 3___
*/


/* Program 3
#include<stdio.h>
int main()
{
int x = 2;
(x & 1) ? printf("true") : printf("false");
return 0;
}