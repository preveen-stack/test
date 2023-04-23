#include <stdio.h>

int my_function(int argc, char* argv[])
{
	int i;

	for(i=0; i<argc; i++) {
		printf("%s\n", argv[i]);
	}
	return 0;
}

int main()
{
	char* args[] = {"-a", "0x7e", "-b", "0xbb", "-c", "0xcc"};

	my_function(6, args);
}
