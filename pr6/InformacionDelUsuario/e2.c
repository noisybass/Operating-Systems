#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>

int main( int argc, char **argv )
{
	printf("-> UID Real: %d\n", getuid());
	printf("-> UID Efectivo: %d\n", geteuid());

	return 0;
}
