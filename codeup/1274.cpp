#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    if (n < 2) { // 0이랑 1 치우기
        printf("not prime");
        return 0;
    }
    
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) {
            printf("not prime");
            return 0;
        }
    }

    printf("prime");
    return 0;
}