#include <stdio.h>

int divisionReste(int,int);
int testSup(int,int);
void menuDab();
int main() {
    printf("%d\n",divisionReste(1,2));
    printf("%d\n",testSup(1,2));
    menuDab();
    return 0;
}

int divisionReste(int n1,int n2)
{
    return n1%n2;
}

void menuDab() {
    int saisie=0;
    printf("1-Debiter\n");
    printf("2-Voir le solde des comptes\n");
    printf("3-Quitter\n");
    scanf("%d\n",&saisie);
}

int testSup(int n1, int n2) {
    if(n1>n2)
        return n1;
    else
        if(n2>n1)
            return n2;
    return 0;
}



