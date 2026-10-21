
#include <stdio.h>
#include <string.h>

int main() {
    char sampleID[20][20], tempID[20];
    float count[20][3], sum[3] = {0, 0, 0};
    float max[3], temp;
    const char *parameter[3] = {
        "RBC", "WBC", "Platelets"
    };
    int n, i, j, k;

    printf("Enter number of samples (max 20): ");
    scanf("%d", &n);

    if (n < 1 || n > 20) {
        printf("Invalid number of samples.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\nEnter sample ID: ");
        scanf("%19s", sampleID[i]);

        printf("Enter RBC count (million/uL): ");
        scanf("%f", &count[i][0]);

        printf("Enter WBC count (thousand/uL): ");
        scanf("%f", &count[i][1]);

        printf("Enter platelet count (thousand/uL): ");
        scanf("%f", &count[i][2]);

        for (j = 0; j < 3; j++) {
            if (count[i][j] < 0) {
                printf("Counts cannot be negative.\n");
                return 1;
            }
        }
    }

    for (j = 0; j < 3; j++) {
        max[j] = count[0][j];
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < 3; j++) {
            sum[j] += count[i][j];

            if (count[i][j] > max[j]) {
                max[j] = count[i][j];
            }
        }
    }

    printf("\n--- Blood Cell Count Analysis ---\n");

    for (j = 0; j < 3; j++) {
        printf("Average %s count: %.2f\n",
               parameter[j], sum[j] / n);
        printf("Maximum %s count: %.2f\n",
               parameter[j], max[j]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(sampleID[j], sampleID[j + 1]) > 0) {
                strcpy(tempID, sampleID[j]);
                strcpy(sampleID[j], sampleID[j + 1]);
                strcpy(sampleID[j + 1], tempID);

                for (k = 0; k < 3; k++) {
                    temp = count[j][k];
                    count[j][k] = count[j + 1][k];
                    count[j + 1][k] = temp;
                }
            }
        }
    }

    printf("\n--- Samples Sorted by ID ---\n");

    for (i = 0; i < n; i++) {
        printf("%s: RBC=%.2f, WBC=%.2f, Platelets=%.2f\n",
               sampleID[i], count[i][0],
               count[i][1], count[i][2]);
    }

    return 0;
}
