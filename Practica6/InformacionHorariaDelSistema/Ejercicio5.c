// Para time y localtime
#include <time.h>
// Para printf
#include <stdio.h>

int main( int argc, char **argv )
{
	time_t fecha = time(NULL);

	// struct tm *localtime(const time_t *time)
	struct tm *ltime = localtime(&fecha);

	printf("-> Estamos en el año %d\n", ltime->tm_year+1900);

	return 0;
}
