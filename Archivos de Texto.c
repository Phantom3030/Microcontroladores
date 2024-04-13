#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

char Palabra[20];

int main()
{
    printf("Escriba que quiere guardar en el txt.");
    scanf("%s", Palabra);
    FILE *arch=fopen("datos1.txt","wt");
    if (arch==NULL)
        exit(1);
    fputs("Primer linea\n",arch);
    fputs("Segunda linea\n",arch);
    fprintf(arch,"%s", Palabra); // Escribir la palabra en el archivo
    fclose(arch);
    printf("Se creo el archivo de texto con tres lineas de texto.");
    getch();
    return 0;
}