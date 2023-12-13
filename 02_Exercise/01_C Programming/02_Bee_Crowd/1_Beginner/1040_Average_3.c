#include <stdio.h>
int main()
{
    float n1, n2, n3, n4, n5, weighted_sum;
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    weighted_sum = (n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1);
    int total_weight = 2 + 3 + 4 + 1;
    float weighted_avg;
    weighted_avg = weighted_sum / total_weight;
    printf("Media: %.1f\n", weighted_avg);
    if (weighted_avg >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if (weighted_avg < 5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");
        scanf("%f", &n5);
        printf("Nota do exame: %.1f\n", n5);

        float new_weighted_avg;

        new_weighted_avg = (weighted_avg + n5) / 2;

        // Check the new average after the exam
        if (new_weighted_avg >= 5.0)
        {
            printf("Aluno aprovado.\n"); // Approved student
            // Print the final average after the exam
            printf("Media final: %.1f\n", new_weighted_avg);
        }
        else
        {
            printf("Aluno reprovado.\n"); // Reproved student
        }
    }
    return 0;
}
/*
#include <stdio.h>
#include <math.h>

int main() {
    float n1, n2, n3, n4, n5, weighted_sum;
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    weighted_sum = (n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1);
    int total_weight = 2 + 3 + 4 + 1;
    float weighted_avg;
    weighted_avg = weighted_sum / total_weight;
    printf("Media: %.1f\n", weighted_avg);
    if (weighted_avg >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if (weighted_avg < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        scanf("%f", &n5);
        printf("Nota do exame: %.1f\n", n5);

        float new_weighted_sum;
        new_weighted_sum = (weighted_sum + (n5 * 1));

        float new_weighted_avg;
        new_weighted_avg = new_weighted_sum / (total_weight + 1);

        // Round the final average to one decimal place
        float final_average = roundf(new_weighted_avg * 10.0) / 10.0;

        // Check the new average after the exam
        if (final_average >= 5.0) {
            printf("Aluno aprovado.\n"); // Approved student
        } else {
            printf("Aluno reprovado.\n"); // Reproved student
        }

        // Print the final average rounded to one decimal place
        printf("Media final: %.1f\n", final_average);
    }
    return 0;
}

*/