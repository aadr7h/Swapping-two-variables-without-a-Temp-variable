#include<stdio.h>
#include<math.h>

int isPrime(int n) {
	if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
		return 0;
	}
	return 1;
}

int main() {
	int num = 29;
	if (isPrime(num))
	printf("%d is a Prime Number\n", num);
	else 
	printf("%d is not a Prime Number\n", num);
	return 0;
}
