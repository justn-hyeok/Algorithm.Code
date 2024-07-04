#include <stdio.h>

int main(){
	int k,n,c=0, a;
	scanf("%d %d", &k, &n);
	while(k>=n){
		a=((k/n));
		k-=(a*n);
		k+=a;
		c+=a;
	}
	printf("%d\n", c);
	return 0;
}