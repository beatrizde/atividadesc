#include <stdio.h>
int main(){
    float notas,nota1,nota2,nota3,nota4, rs;
    
        printf("Digite nota do primeiro bimestre:\n");
        scanf("%f" ,&nota1);
    

        printf("Digite a nota do segundo bimestre:\n");
        scanf("%f" ,&nota2);
    
        printf("Digite a nota do terceiro bimestre:\n");
        scanf("%f" ,&nota3);
    
        printf("Digite a nota do quatro bimestre:\n");
        scanf("%f" ,&nota4);

        rs = (nota1 + nota2 + nota3 + nota4) / 4;

        if (rs < 6)
        {
        printf( " se o valor for menor que seis vocé  foi reprovado %f\n",rs);
        }
        else
        {
            printf(" se o valor for maior que seis vocé  foi aprovado %f\n",rs);
        }


    return 0;
}
    






