#include <stdio.h>
#include <stdlib.h>

int longueurChaine(char* chaine);
void afficherChaine(char* chaine);

int main()
{
    char chaine[] = "TeSt76";
    char caracteres[] = "abcdefghijklmnopqrstuvwxyz0123456789";

    char *result = malloc(sizeof(char) * longueurChaine(chaine));

    for(int i = 0; i < longueurChaine(chaine); i++) {
        for(int j = 0; j < longueurChaine(caracteres); j++) {
            if(chaine[i] == caracteres[j]) {
                result[i] = caracteres[j];
                // printf("STOP\n");
                break;
            }
            if(chaine[i] == toupper(caracteres[j])) {
                result[i] = toupper(caracteres[j]);
                // printf("STOP\n");
                break;
            }
            // printf("%c\n", caracteres[j]);
        }
    }

    printf("Chaine resultat : ");
    afficherChaine(result);
}

int longueurChaine(char* chaine) {
    int sum = 0;
    for(int i = 0; chaine[i] != '\0'; i++) {
        sum++;
    }
    return sum;
}

void afficherChaine(char* chaine) {
    for(int i = 0; i < longueurChaine(chaine); i++) {
        printf("%c", chaine[i]);
    }
}
