#include <stdio.h>


double c(double f)
{
	return (f - 32.0) * 5.0 / 9.0;
}

double f(double c)
{
	return 9.0 * c / 5.0 + 32.0;
}

int main()
{
	printf("-40 deg f is %f deg c\n", c(-40.0));
	printf("-40 deg c is %f deg f\n", f(-40.0));
	return 0;
}
