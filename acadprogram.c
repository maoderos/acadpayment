#include <stdio.h>
#include <string.h>

int main()
{
    int genero;
    int idade;
    int mensalidade = 100;

    printf("Gênero Masculino - 1\nGênero Feminiro -2\nQual seu genero:");
    scanf("%d", &genero);
    printf("\nQual sua idade:");
    scanf("%d", &idade);
    if (genero == 1) {
        if (idade >= 22) {
            printf("Você não tem desconto!!\n Sua mensalidade será %d", mensalidade);
        } else {
             float mensa_desc = mensalidade - 0.20*mensalidade;
             printf("Você tem desconto!!\n Sua mensalidade será %f", mensa_desc);
        }
    } else if(genero == 2) {
        if (idade > 15){
            int mensa_desc = mensalidade - 0.15*mensalidade; 
            printf("você terá desconto!! \n Sua mensalidade será %d", mensa_desc);
        } else {
            int mensa_desc = mensalidade - 0.10*mensalidade;
            printf("Você terá desconto! \n Sua mensalidade será %d", mensa_desc); 
            }
    } else {
        printf("ALGUM DADO FOI INSERIDO INVALIDAMENTE");
    }
    return 0;
}