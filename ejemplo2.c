#include <stdio.h>
int main(int argc, char const *argv[])
{
    FILE *archivo;
    char unCaracter;

    if ((archivo = fopen("Datos.txt", "w"))!=NULL)
    {
        fputs("Este es el nuevo contenido del archivo", archivo);
    }else
    {
        if ((archivo = fopen("Datos.txt", "w"))!=NULL)
        {
            while (!feof(archivo))
            {
                unCaracter = fgetc(archivo);
                putchar(unCaracter);
            }
        }
        
    }
    
    


    fclose(archivo);

    return 0;
}