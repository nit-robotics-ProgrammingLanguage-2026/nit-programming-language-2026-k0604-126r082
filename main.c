#include <stdio.h>

int main(void)
{
    int limit;
    if (scanf("%d", &limit) != 1) {
        return 0;
    }
    if (limit < 0) {
        printf("NG");
        return 0;
    }

    long long total = 0;
    // 1から入力された上限まで順番に調べる。
    for (long long number = 1; number <= limit; number++) {
        // 3でも5でも割り切れない数を合計に加える。
        if (number % 3 != 0 && number % 5 != 0) {
            total += number;
        }
    }
    printf("%lld", total);
    return 0;
}