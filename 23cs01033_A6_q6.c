#include <stdio.h>

#define cities 3
#define days 7

void calculateavg(int temperatures[cities][days], float avgs[cities]) {
    for (int i = 0; i < cities; i++) {
        int sum = 0;
        for (int j = 0; j < days; j++) {
            sum += temperatures[i][j];
        }
        
        avgs[i] = (float) sum / days;
    }
}

int main() {
    int temperatures[cities][days];

    printf("Enter temperatures for a week:\n");
    for (int i = 0; i < cities; i++) {
        printf("City %d:\n", i + 1);
        for (int j = 0; j < days; j++) {
            printf("Day %d: ", j + 1);
            scanf("%d", &temperatures[i][j]);
        }
    }

    float avgs[cities];
    calculateavg(temperatures, avgs);

    printf("\navg temperatures for each city:");
    for (int i = 0; i < cities; i++) {
        printf("City %d: %.2f\n", i + 1, avgs[i]);
    }

    return 0;
}