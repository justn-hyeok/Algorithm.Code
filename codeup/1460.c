#include <stdio.h>

int main(){
	int arr[100][100];
	int n,num=1;
	scanf("%d",&n);

	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			arr[i][j] = num++;
			printf("%d ",arr[i][j]); 
		}
		puts("");
	}
	
    return 0;
}