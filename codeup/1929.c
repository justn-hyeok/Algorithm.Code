#include <stdio.h>
int p(int a){
	(a==1) ? : ((a%2 != 0) ? p(a*3+1) : p(a/2));
	printf("%d\n",a);
}

int main(){
	int n;
	scanf("%d",&n);
	p(n);
	return 0;
}