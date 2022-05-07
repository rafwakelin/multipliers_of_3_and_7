//
//  main.c
//  multiplosde_3_e_7
//
//  Created by Rafael Queiroz on 06/05/2022.
//

#include <stdio.h>
int main()
{
    int num;
    printf ("Informe um número.\n");
    scanf ("%d", &num);
    if (num % 3 ==0)
    {
        printf ("O número %d, é múltiplo de 3.\n", num);
    }
    else
    {
        printf("O número %d, não é múltiplo de 3.\n", num);
    }
    if (num % 7 == 0)
    {
        printf ("O número %d, é múltiplo de 7.\n", num);
    }
    else
    {
        printf ("O número %d, não é múltiplo de 7.\n", num);
    }
    return 0;
}
