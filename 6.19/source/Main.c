#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void simulateDiceRolls(int numSimulations) {
    // ﹍て翴计参璸皚
    int pointCounts[11] = {0};  // 212翴皚ま010癸莱翴计212

    // 砞﹚睹计贺
    srand(time(NULL));

    for (int i = 0; i < numSimulations; ++i) {
        // щ耏ㄢΩ浑
        int roll1 = rand() % 6 + 1;
        int roll2 = rand() % 6 + 1;

        // 璸衡翴计羆㎝
        int totalPoints = roll1 + roll2;

        // 参璸翴计瞷Ω计
        pointCounts[totalPoints - 2]++;
    }

    // 块挡狦
    printf("翴计\t瞷Ω计\t诀瞯\n");
    printf("-----------------------\n");
    for (int i = 2; i <= 12; ++i) {
        double probability = (double)pointCounts[i - 2] / numSimulations;
        printf("%d\t%d\t\t%.4f\n", i, pointCounts[i - 2], probability);
    }
}

int main() {
    // 家览щ耏ㄢ聋浑 36,000 Ω
    simulateDiceRolls(36000);

    return 0;
}
