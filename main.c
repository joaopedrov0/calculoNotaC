#include <stdio.h>

float calculoMedia(float nota1, float nota2){
  return (nota1 + nota2) / 2;
}

int main() {
    int userCommand;
    float nota1;
    float nota2;
    float media;
    while(1){
      printf("O que voc%c deseja fazer?\nDigite [1] para calcular uma nova m%cdia e [0] para sair do programa\n", 136, 130);
      scanf("%d", &userCommand);
      if(userCommand == 1){
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        media = calculoMedia(nota1, nota2);
        if (media >= 6){
          printf("O aluno ficou com %.2f de m%cdia final. Aprovado!\n", media, 130);
        } else {
          float gap = 6 - media;
          printf("O aluno ficou com %.2f de m%cdia final. Reprovado por %.2f!\n", media, 130, gap);
        }
        continue;
      } else {
        break;
      }
    }
}