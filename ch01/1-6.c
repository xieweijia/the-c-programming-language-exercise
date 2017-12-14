#include <stdio.h>

main() {
	if ((getchar() != EOF) == 1) {
		printf("1\n");
	}
	else if ((getchar() != EOF) == 0) {
		printf("0\n");
	}

}