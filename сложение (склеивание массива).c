#include <stdio.h>
#define AR_LEN 100
int main (){
	int to[AR_LEN] = {1, 2, 3, 0};
	int from[AR_LEN] = {4, 5, 0};
	
	int i = 0;

	while(to[i]!=0){
		i = i + 1;
	}
	int j = i;
	while(from[j]!=0){
		to[i] = from[i];
		j = j + 1;
		
	}
	return 0;
}
	
