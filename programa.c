/*
Monroy Fernandez Jose Luis 
1BM1
INTELIGENCIA ARTIFICIAL
02/10/2021
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char DatosLibro[35][7][199] = {
        {"1", "Anécdota de un día", "8.5", "3.18", "Tahoma black", "2"},
        {"2", "Burros Blancos", "7.5", "0.74", "Agency", "140"},
        {"3", "Cien años y uno mas", "6.5", "0.3", "Abscissa", "57"},
        {"4", "Diamantes y dados", "5.5", "0.14", "HP Simplified", "27"},
        {"5", "El avestrus", "4.5", "0.58", "Arial", "23"},
        {"6", "El cuento", "3.5", "0.46", "Calibri", "176"},
        {"7", "Elefantes", "2.5", "1.46", "Impact", "65"},
        {"8", "Fiestas", "1.5", "1.9", "alanis hand", "67"},
        {"9", "Gatoman", "0.5", "2.34", "Jasmine UPC", "22"},
        {"10", "Hipopotamos en su habitat", "0.5", "2.78", "Latha", "41"},
        {"11", "Italia, un nuevo mundo", "1.5", "3.22", "Kaiti", "175"},
        {"12", "Juanacatlan, pueblo magico", "2.5", "3.66", "Nyala", "190"},
        {"13", "Kids, where are them?", "3.5", "4.1", "Verdana", "68"},
        {"14", "La niña", "4.5", "4.54", "Tahoma", "145"},
        {"15", "Metafisica", "5.5", "4.98", "Modern	173"},
        {"16", "Nuevos horizontes", "6.5", "5.42", "Univers", "195"},
        {"17", "Osos polares", "7.5", "5.86", "Yu Gothic", "192"},
        {"18", "Pato Hood", "8.5", "6.3", "Ravie", "23"},
        {"19", "Poblaciones vulnerables", "9.5", "6.74", "OCRB", "137"},
        {"20", "Quo duo", "10.5", "7.18", "Selawik", "160"},
        {"21", "Robin Hood", "11.5", "7.62", "Perpetua", "56"},
        {"22", "Significado de la vida", "12.5", "8.06", "Times", "157"},
        {"23", "Soberanos", "13.5", "8.5", "Webdings", "135"},
        {"24", "Trasatlantico", "14.5", "8.94", "Sweet Pea", "55"},
        {"25", "Trasportes en el futuro", "15.5", "9.38", "Bell MT", "191"},
        {"26", "Trotamundos", "16.5", "9.82", "Ebrima", "127"},
        {"27", "Uvas para el vino", "17.5", "10.26", "Mangal", "20"},
        {"28", "Verduras y frutas", "18.5", "10.7", "Cambria", "124"},
        {"29", "Viajando ando", "19.5", "11.14", "Dotum", "54"},
        {"30", "Walter Cross, ¿Quién fue?", "20.5", "11.58", "Papyrus", "124"},
        {"31", "Xcaret, un lugar magico", "21.5", "12.02", "Arial Black", "189"},
        {"32", "Yardas", "22.5", "12.46", "Georgia", "168"},
        {"33", "Zapato Viejo", "23.5", "12.9", "French script", "146", 0},
    };
    //Pregunatr sobre el como se hace la división automatica de arreglos
    int opcionUsuario;
    int libroSeleccionado;
    int caracteristicam;
    int libroModif;
    do
    {

        puts("Seleccione el punto de la práctica:");
        puts("1.- Modificar datos de libro");
        puts("2.- Mostrar lista de los libros y sus datos");
        puts("3.- Salir del Programa");
        fflush(stdin);
        scanf("%d", &opcionUsuario);
        switch (opcionUsuario)
        {
        case 1:
            printf("Seleccione el libro a modificar:\n"); // Preguntar como se hace la sobreescritura
            fflush(stdin);
            scanf("%d", &libroSeleccionado);
            printf("Seleccione la opción a modificar\n");
            puts("1-Titulo");
            puts("2-Alto");
            puts("3-Ancho");
            puts("4-Fuente");
            puts("5-Precio");
            fflush(stdin);
            scanf("d", &caracteristicam);
            printf("Porfavor escriba el nuevo valor o texto:\n");
            fflush(stdin);
            scanf("s", &libroModif);
            break;

        case 2:
            for (int i = 0; i < 33; i++)
            {
                int posicion = i + 1;
                printf("Los datos del libro %d son:\n", posicion);
                for (int j = 0; j < 6; j++)
                {
                    puts(DatosLibro[i][j]);
                }
            }
            break;

        default:
            puts("Fin del programa");
            break;
        }
    } while (opcionUsuario != 3);
}