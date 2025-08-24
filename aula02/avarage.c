#include <stdio.h>
 
int main() {

    float A;
    float B;
    float C;
    float D;
    float MEDIA;
    float EXAM_SCORE;
    float MEDIA_FINAL;

    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);
    scanf("%f", &D);

    MEDIA = (
        ((A * 2) + (B * 3) + (C * 4) + (D * 1)) / 10
    );

    printf("Media: %.1f\n", MEDIA);

    if (MEDIA > 7.0){
        printf("Aluno aprovado.\n");
    } else if (MEDIA < 5.0){
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        
        scanf("%f", &EXAM_SCORE);
        printf("Nota do exame: %.1f\n", EXAM_SCORE);

        MEDIA_FINAL = (MEDIA + EXAM_SCORE) / 2;

        if (MEDIA_FINAL >= 5.0){
        printf("Aluno aprovado.\n");
        } else if (MEDIA_FINAL < 5.0){
        printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n", MEDIA_FINAL);
    }
 
    return 0;
}