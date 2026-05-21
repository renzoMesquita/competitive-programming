#include <stdio.h>

int main(){
    int codDisc, ra, melhorCod, piorCod;
    char sexo;
    float media, melhorMedia, piorMedia;

    // controles por disciplina
    float somaMulheres, somaHomens, somaDisc;
    int contMulheres, contHomens, contAlunos;

    // flag para primeira disciplina
    int primeira = 1;

    printf("Cod. da Disciplina: ");
    scanf("%d", &codDisc);

    while(codDisc != -1){

        somaMulheres = somaHomens = somaDisc = 0;
        contMulheres = contHomens = contAlunos = 0;

        printf("RA: ");
        scanf("%d", &ra);

        while(ra != -1){

            // valida sexo
            do{
                printf("Sexo: ");
                scanf(" %c", &sexo);
            }while(sexo != 'f' && sexo != 'm' && sexo != 'F' && sexo != 'M');

            // valida media
            do{
                printf("Media: ");
                scanf("%f", &media);
            }while(media < 0 || media > 10);

            // acumula
            somaDisc += media;
            contAlunos++;

            if(sexo == 'f' || sexo == 'F'){
                somaMulheres += media;
                contMulheres++;
            } else {
                somaHomens += media;
                contHomens++;
            }

            printf("RA: ");
            scanf("%d", &ra);
        }

        // calcula medias
        float mediaMulheres = contMulheres > 0 ? somaMulheres/contMulheres : 0;
        float mediaHomens   = contHomens   > 0 ? somaHomens/contHomens     : 0;
        float mediaDisc     = contAlunos   > 0 ? somaDisc/contAlunos       : 0;

        printf("Media das mulheres: %.2f\n", mediaMulheres);
        printf("Media dos homens: %.2f\n",   mediaHomens);
        printf("Media da disciplina: %.2f\n", mediaDisc);

        // desempenho
        if(mediaDisc < 3)
            printf("Desempenho Ruim\n");
        else if(mediaDisc < 5)
            printf("Desempenho Regular\n");
        else if(mediaDisc < 7)
            printf("Desempenho Bom\n");
        else
            printf("Desempenho Excelente\n");

        // atualiza melhor e pior
        if(primeira){
            melhorMedia = piorMedia = mediaDisc;
            melhorCod   = piorCod   = codDisc;
            primeira = 0;
        } else {
            if(mediaDisc > melhorMedia){
                melhorMedia = mediaDisc;
                melhorCod   = codDisc;
            }
            if(mediaDisc < piorMedia){
                piorMedia = mediaDisc;
                piorCod   = codDisc;
            }
        }

        printf("\nCod. Disciplina: ");
        scanf("%d", &codDisc);
    }

    printf("\nMelhor: Cod: %d, Media: %.2f\n", melhorCod, melhorMedia);
    printf("Pior:   Cod: %d, Media: %.2f\n",   piorCod,   piorMedia);

    return 0;
}