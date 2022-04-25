#include <stdio.h>

<<<<<<< HEAD


int main(void)

{

int n;

int a[5];
int *p;

a[2] = 1024;
p = &n;
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);

=======
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
>>>>>>> 8b99d87936f09b03e326e425c38554921f457694
}
