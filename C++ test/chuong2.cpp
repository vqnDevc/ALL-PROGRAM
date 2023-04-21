#include <stdio.h>
#include <limits.h>

int	main()
{
	unsigned long	big = ULONG_MAX;

	printf("minimum int = %i, ", INT_MIN);
	printf("maximum int = %i\n", INT_MAX);
	printf("maximum unsigned = %u\n", UINT_MAX);
	printf("maximum long int = %li\n", LONG_MAX);
	printf("maximum unsigned long = %lu\n", big);

	return 0;
}

