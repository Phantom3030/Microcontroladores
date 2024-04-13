#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main() 
{
    FILE *file = fopen("datos.txt", "wt"); 
    char *input = (char *)malloc(100 * sizeof(char));
    if (input == NULL) 
    {
        exit(1);
    }
    printf("Ingrese los datos que desea guardar en el archivo: ");
    fgets(input, 100, stdin);
    if (file == NULL) 
    {
        printf("Error: no se pudo abrir el archivo.");
        return 1;
    }
    fprintf(file, "%s", input);
    fclose(file);
    free(input);
    printf("Se creo el archivo de texto.\n");
    return 0;
}