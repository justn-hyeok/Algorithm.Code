#include <stdio.h>

int p(int a){
	printf("%d\n",a);
	if(a == 1) return 0;
	a%2==1 ? p(a*3+1):p(a/2);
}

int main(){
	int n;
	scanf("%d",&n);
	p(n);
	return 0;
}