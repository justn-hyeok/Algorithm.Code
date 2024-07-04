#include <stdio.h>

void eratosteneschae(int a, int b){
    int so_soo[b+1];

    // 소수 여부 저장, 초기값은 모두 소수로 가정
    for (int i = 2; i <= b; i++) {
        so_soo[i] = 1;
    }

    // 에라토스테네스 체
    for (int i = 2; i*i <= b; i++) {
        if (so_soo[i]) {
            for (int j = i * i; j <= b; j += i) {
                so_soo[j] = 0;
            }
        }
    }

    // 프라임출력
    for (int i = a; i <= b; i++) {
        if (so_soo[i]) {
            printf("%d ", i);
        }
    }
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    eratosteneschae(a, b);

    return 0;
}
