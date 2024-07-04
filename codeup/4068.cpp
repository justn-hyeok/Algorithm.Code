#include <stdio.h>

int arr[8000001], idx, a;

int main() {
    scanf("%d", &a);
    for (int i = 2; i <= 7900000; i++) {
        if (arr[i] == 1) continue;
        idx++;
        if (idx == a) {
            printf("%d", i);
            return 0;
        }
        for (int j = i * 2; j <= 7900000; j += i) {
            arr[j] = 1;
        }
    }
    return 0;
}
