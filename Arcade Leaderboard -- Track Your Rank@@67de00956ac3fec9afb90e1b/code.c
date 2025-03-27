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

// Function to find rank using binary search
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

    // Read leaderboard size and scores
    scanf("%d", &n);
    int leaderboard[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &leaderboard[i]);
    }

    // Remove duplicates and get unique leaderboard size
    int uniqueSize = removeDuplicates(leaderboard, n);

    // Read number of games and game scores
    scanf("%d", &m);
    int gameScores[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &gameScores[i]);
    }

    // Process each game score and print its rank
    for (int i = 0; i < m; i++) {
        printf("%d\n", findRank(leaderboard, uniqueSize, gameScores[i]));
    }

    return 0;
}
