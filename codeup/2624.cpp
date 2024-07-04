#include <stdio.h>

int main() {
    int a, sum = 0;

    scanf("%d", &a);
    if (a == 0) return 0;

    for (int i = 2; i <= a; i++) {
        int so_soo = 1;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                so_soo = 0;
                break;
            }
        }

        if (so_soo) sum += i;
    }

    printf("%d", sum);
    return 0;
}
// 어, 영남중학교의 남자, 김해시주촌면의 남자, 황준혁
// 결국 이 문제를 풀어버렸지 모야
// 나의 사랑. 어디에 있는가?