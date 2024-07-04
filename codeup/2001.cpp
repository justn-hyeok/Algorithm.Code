#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int a[3];
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    sort(a, a+3);
    
    int n, m;
    scanf("%d %d", &n, &m);
    
    int tmp = min(n, m);
    printf("%.1f", (float)(a[0] + tmp) * 1.1);
}

// 난 사랑할 거 같애. 씨쁠쁠을,