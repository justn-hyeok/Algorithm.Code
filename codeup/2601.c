#include <stdio.h>
int n;
int p(int a){
	if(a == 1 || a == 2)
		return 1;
	return p(a-2) + p(a-1);
}
int main(){
	scanf("%d",&n);
	printf("%d",p(n));
	return 0;
}
// 1915 랑 문제가 똑같네요.
// 대신 시간이 많이 걸림; 이거때문에 재귀 안 쓰는 듯