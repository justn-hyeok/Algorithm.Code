#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
    int n[7];
    int maxEven = 0, maxOdd = 0;
    for(int i = 0; i < 7; i++) {
        scanf("%d", &n[i]);
        if(n[i] % 2 == 0) { // 짝수
            maxEven = max(maxEven, n[i]);
        } else { // 홀수
            maxOdd = max(maxOdd, n[i]);
        }
    }
    
    printf("%d\n", maxEven + maxOdd); 
    
    return 0;
}