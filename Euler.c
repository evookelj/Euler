#include <stdio.h>

int prob1() {
	int i=999;
	int s=0;
	while (i>0) {
		if (!(i%5)) { s+=i; }
		else if (!(i%3)) { s+=i; }
		i--;
	}
	return s;
}

int main() {
	printf("%d\n", prob1());
}
