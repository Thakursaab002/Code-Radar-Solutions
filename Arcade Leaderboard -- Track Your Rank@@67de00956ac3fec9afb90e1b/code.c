#include <stdio.h>

void trackPlayerRanks(int ranked[], int player[], int n, int m, int result[]);

int main() {
    int n, m;
    scanf("%d", &n);
    int ranked[200000];
    for (int i = 0; i < n; i++) scanf("%d", &ranked[i]);

    scanf("%d", &m);
    int player[200000];
    for (int i = 0; i < m; i++) scanf("%d", &player[i]);

    int result[200000];
    trackPlayerRanks(ranked, player, n, m, result);

    for (int i = 0; i < m; i++) printf("%d\n", result[i]);

    return 0;
}

void trackPlayerRanks(int ranked[], int player[], int n, int m, int result[]) {
    int denseRanks[200000], rank = 1;
    denseRanks[0] = rank;

    for (int i = 1; i < n; i++) {
        if (ranked[i] != ranked[i - 1]) rank++;
        denseRanks[i] = rank;
    }

    int i = n - 1, j = 0;
    while (j < m) {
        while (i >= 0 && player[j] >= ranked[i]) i--;
        result[j] = i == -1 ? 1 : denseRanks[i] + 1;
        j++;
    }
}
