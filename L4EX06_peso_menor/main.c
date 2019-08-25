#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, count = 1;
    float pesoPacoteMenor, pesoPacote;
    char resp = 's';

    do{
        if(resp == 's'){
            printf("\nInforme o peso do %d pacote: ", count);
            scanf("%f", &pesoPacote);
            if(i == 0){
                pesoPacoteMenor = pesoPacote;
                i++;
            } else if(pesoPacote < pesoPacoteMenor){
                pesoPacoteMenor = pesoPacote;
            }
            printf("\nDeseja informar outro pacote?\n");
            scanf(" %c", &resp);
            count++;
        }
    } while(resp == 's');
    printf("\nO pacote mais leve e %.2f", pesoPacoteMenor);
    return 0;
}
