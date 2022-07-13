#include <stdio.h>
#include <math.h>

int main() {
    // Recebe os valores de capacidade da cabine(C) e número de alunos(A)
    int C, A;
    scanf("%d", &C);
    scanf("%d", &A);

    // Número de alunos por viagem
    int X = C - 1;
    
    // Número de viagens e índice do for    
    int i;

    // Loop enquanto o número de alunos(A) é maior que o número de alunos por viagem(X)
    for(i = 1; X < A; i++) {
            A = A - X;
    }
   
    // Imprime o valor de viagens(i)
    printf("%d\n", i);
    return 0;
}