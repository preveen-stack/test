#include <stdio.h>

void bit_show(unsigned int value) {
    int i;
	printf("showing bit pattern for %u[%#16x]\n", value, value);
	
	for (i=31; i>=0; i--) {
	    printf ("%s ", (value & (1<<i)? "[]" : "  ") );
	}
	printf("\n");
		for (i=31; i>=0; i--) {
	    printf ("%02d ", i );
	}
	printf("\n\n");
}

int main(void) {
	bit_show(1<<29);
	bit_show(29<<29);
	bit_show(1<<30);
	bit_show(30<<30);
	bit_show(1<<24);
	bit_show(24<<24);
	bit_show(1<<25);
	bit_show(25<<25);
	bit_show(1<<31);
	bit_show(31<<31);

	return 0;
}
