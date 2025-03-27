#include <stdio.h>

// Function to remove duplicates from the leaderboard
int removeDuplicates(int arr[], int n) {
    int uniqueCount = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            arr[uniqueCount++] = arr[i];
        }
    }
    return uniqueCount;
}

int findRank(int leaderboard[], int size, int score) {
    int left = 0, right = size - 1, rank = size + 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (leaderboard[mid] <= score) {
            rank = mid + 1;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return rank;
}

int main() {
    int n, m;

    scanf("%d", &n);
    int leaderboard[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &leaderboard[i]);
    }

    int uniqueSize = removeDuplicates(leaderboard, n);
    scanf("%d", &m);
    int gameScores[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &gameScores[i]);
    }
    for (int i = 0; i < m; i++) {
        printf("%d\n", findRank(leaderboard, uniqueSize, gameScores[i]));
    }

    return 0;
}
