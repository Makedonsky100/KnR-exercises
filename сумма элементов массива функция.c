#include <stdio.h>
int ar_sum (int[], int);

int main(){
	int n;
	scanf("%d", &n);
	int ar[100]={1, 2, 3, 4, 5};
	
	int s = ar_sum(ar, n);
	printf("%d", s);
	return 0;
}
int ar_sum (int v[], int len){
	int s = 0;
	int i;
	for(i = 0; i<len; i = i + 1){
		s = s + v[i];
	}
	return s;
}

