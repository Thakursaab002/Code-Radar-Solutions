#include <stdio.h>

void trackPlayerRanks(int ranked[], int player[], int n, int m, int result[]);

int main() {
    int n, m;
    scanf("%d", &n);
    int ranked[n];
    for (int i = 0; i < n; i++) scanf("%d", &ranked[i]);

    scanf("%d", &m);
    int player[m];
    for (int i = 0; i < m; i++) scanf("%d", &player[i]);

    int result[m];
    trackPlayerRanks(ranked, player, n, m, result);

    for (int i = 0; i < m; i++) printf("%d\n", result[i]);

    return 0;
}

void trackPlayerRanks(int ranked[], int player[], int n, int m, int result[]) {
    int uniqueRanks[n], rank = 1, index = 0;
    uniqueRanks[0] = ranked[0];

    for (int i = 1; i < n; i++) {
        if (ranked[i] != ranked[i - 1]) {
            uniqueRanks[++index] = ranked[i];
        }
    }

    int uniqueCount = index + 1;
    int i = uniqueCount - 1, j = 0;

    while (j < m) {
        while (i >= 0 && player[j] >= uniqueRanks[i]) i--;
        result[j] = i + 2;
        j++;
    }
}
