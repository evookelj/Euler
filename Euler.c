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

int fibN(int n) {
	if (n==1 || n==2) { return n; }
	return fibN(n-1) + fibN(n-2);
}

int prob2() {
	int n=1;
	int s=0;
	while (1) {
		int temp = fibN(n);
		if (!(temp%2)) { s+=temp; }
		if (temp>4000000) { return s; }
	}
}

int main() {
	printf("%d\n%d\n", prob1(), prob2());
}
