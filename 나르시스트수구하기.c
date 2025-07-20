#include <stdio.h>
#define SIZE 10000

int main(){
	int i, j, k, cnt, tmp, sum, n, digit;
	for(i=1; i<SIZE; i++){
		cnt=0;
		j = i;
		while(j>0){
			j /= 10;
            cnt++;
		}

		sum = 0;
		n = i;
		
		for(k=0; k<cnt; k++){
			tmp = 1;
			digit = n % 10;
			for(int p=0; p<cnt; p++){
				tmp *= digit;
			}
			sum += tmp;
			j /= 10;
		}
		
		if(sum==i){
			printf("%d\n", i);
		}
	}
	return 0;
}
