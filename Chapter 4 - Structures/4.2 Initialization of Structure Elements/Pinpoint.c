#include <stdio.h>

int main() {

	struct myStruct {

		int x;
		double y;

	};

	struct myStruct s = { 4, 3.4 };

	printf("s.x = %d   ", s.x);
	printf("s.y = %.11f", s.y);
}