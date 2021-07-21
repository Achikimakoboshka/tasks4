#include <stdio.h>
int min (int a, int b) {

	if (a == b) {
		printf ("a = b = %d\n", a);
	}
    
	if (a != b) {
		if (a < b) {
		printf ("%d\n", a);
	}
	else{
		printf ("%d\n", b);
	}
	}
}