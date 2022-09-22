#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    int target = -1;
    int array[4] = {a, b, c, d};
    for (int i = 0; i<4; i++) {
            for (int j = 0; j<4; j++) {
                if (array[i] < array[j]) {
                    break;
                } else {
                    if (array[i] > array[j]) {
                        if (j==3) {
                            target = array[i];
                        }
                    }else if (i == 3) {
                        target = array[i];
                    }
                }
            }
    }
    
    return target;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}