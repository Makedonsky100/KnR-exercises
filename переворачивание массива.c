
#include <stdio.h>
#define AR_LEN 100 

int main () {
	int array[AR_LEN];
	int n;
	scanf("%d", &n);
	int i;
	for (i = 0; i < n; i = i + 1) {
		scanf("%d", &array[i]);
	}

    int j;
	for (j = n - 1; j >= 0; j = j - 1){
		printf("%d ", array[j]);
	}
	






