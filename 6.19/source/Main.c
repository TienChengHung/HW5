#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void simulateDiceRolls(int numSimulations) {
    // ��l���I�Ʋέp�}�C
    int pointCounts[11] = {0};  // 2��12�I�A�}�C����0��10�����I��2��12

    // �]�w�üƺؤl
    srand(time(NULL));

    for (int i = 0; i < numSimulations; ++i) {
        // ���Y�⦸��l
        int roll1 = rand() % 6 + 1;
        int roll2 = rand() % 6 + 1;

        // �p���I���`�M
        int totalPoints = roll1 + roll2;

        // �έp�I�ƥX�{����
        pointCounts[totalPoints - 2]++;
    }

    // ��X���G
    printf("�I��\t�X�{����\t���v\n");
    printf("-----------------------\n");
    for (int i = 2; i <= 12; ++i) {
        double probability = (double)pointCounts[i - 2] / numSimulations;
        printf("%d\t%d\t\t%.4f\n", i, pointCounts[i - 2], probability);
    }
}

int main() {
    // �������Y������l 36,000 ��
    simulateDiceRolls(36000);

    return 0;
}
