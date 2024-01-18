#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE *archivo;
    char unCaracter;

    archivo = fopen("Datos.txt","r");

while (!feof(archivo))
{
    unCaracter=fgetc(archivo);
    putchar(unCaracter);
}

fclose(archivo);    

    return 0;
}
