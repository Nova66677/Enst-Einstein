#include <stdio.h>

int main() {
    int password = 0;
    char buffer[10];

    printf("Saisissez votre mot de passe : ");
    scanf("%s", buffer);

    if (password) {
        printf("Mot de passe correct\n");
    } else {
        printf("Mot de passe incorrect\n");
    }    
}