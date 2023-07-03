/*
Nombre: Juan Sebastian Leon Espinosa
Barras de carga
*/

#include <iostream>
#include <string>
#include <unistd.h>
#define TIME 15000

//  [########################################]  100%
void LoadingBar1(int size)
{
    char barra[size + 1];
    float porcentaje = (float)100 / (float)size;

    for (int i = 0; i < size; i++)
        barra[i] = ' ';
    barra[size] = '\0';

    for (int i = 0; i < size; i++)
    {
        barra[i] = '#';
        printf("\r\t [%s]  %.0f%%", barra, (i + 1) * porcentaje);
        fflush(stdout);
        usleep(TIME);
    }
    printf("\n");
}

// [=============================================-    ]  92%
void LoadingBar2(int size)
{
    char barra[size + 1];
    float porcentaje = (float)100 / (float)size;

    for (int i = 0; i < size; i++)
        barra[i] = ' ';
    barra[size] = '\0';

    for (int i = 0; i < size; i++)
    {
        barra[i] = '-';
        printf("\r\t [%s]  %.0f%%", barra, (i + 1) * porcentaje);
        fflush(stdout);
        usleep(TIME);
    
        barra[i] = '=';
        printf("\r\t [%s]  %.0f%%", barra, (i + 1) * porcentaje);
        if (i == size - 1)
            printf("\r\t [%s]  Stopped", barra);
        fflush(stdout);
        usleep(TIME);
    }
        printf("\n");
}

void loadingShort()
{
    char c[] ="\\|/- ";
    for (int i = 0; i <= 100; i++)
    {
        //contadorC== (i%5==0) ? i%5 : 0;
        printf("\r%c %3d %% ",c[i%5],i);
        //usleep(TIEMPO);
    }
}

//  [oooooooooooo\       ]  
void LoadingBar3(int size)
{
    char barra[size + 1];
    float porcentaje = (float)100 / (float)size;

    for (int i = 0; i < size; i++)
        barra[i] = ' ';
    barra[size] = '\0';

    for (int i = 0; i < size; i++)
    {
        char signo[] ="\\|/- ";
    for (int c = 0; c <5; c++)
    {
        barra[i]= signo[c];
        printf("\r\t [%s]  ", barra);
        usleep(TIME/2);
    }

        barra[i] = 'o';
        printf("\r\t [%s]  ", barra);
        usleep(TIME/2);
    }
    printf("\r\t [%s]  TIMEOUT ", barra);
    printf("\n");
}

/* [<-=->                                   ]
void LoadingBar4(int size, int veces)
*/
void LoadingBar4(int size, int veces)
{
    char barra[size + 1];
    float porcentaje = (float)100 / (float)size;

    for (int i = 0; i < size; i++)
        barra[i] = ' ';
    barra[size] = '\0';
    for(int t=0; t<veces;t++)
    {
        for (int i = 1; i < size-4; i++)
        {
            barra[i-1] = ' ';       
            barra[i] = '<';       
            barra[i+1] = '-';
            barra[i+2] = '=';
            barra[i+3] = '-';
            barra[i+4] = '>';


            printf("\r\t [%s]", barra+1);
            fflush(stdout);
            usleep(TIME);
        }
        for (int i = 1; size-5-i >= 1; i++)
        {
            barra[size-5-i] = '<';       
            barra[size-4-i] = '-';       
            barra[size-3-i] = '=';
            barra[size-2-i] = '-';
            barra[size-i-1] = '>';
            barra[size-i] = ' ';


            printf("\r\t [%s]", barra+1);
            fflush(stdout);
            usleep(TIME);
        }
    }
    printf("\n");
}

/*
[<<<<------------------------------------] DONE
LoadingBar5(int size, int veces)
*/
void LoadingBar5(int size, int veces)
{
    char barra[size + 1];
    float porcentaje = (float)100 / (float)size;

    for (int v = 0; v < veces; v++)
    {   
        for (int i = 0; i < size-3; i++)
        {
            for (int g = 0; g < size; g++)
                barra[g] = '-';
            barra[i] = '>';
            barra[i+1] = '>';
            barra[i+2] = '>';
            barra[i+3] = '>';
            printf("\r\t [%s] ", barra);
            fflush(stdout);
            usleep(TIME * 2);
        }

        for (int i = 0; i < size-3; i++)
        {
            for (int g = 0; g < size; g++)
                barra[g] = '-';
            barra[size-4-i] = '<';       
            barra[size-3-i] = '<';
            barra[size-2-i] = '<';
            barra[size-1-i] = '<';
            printf("\r\t [%s] ", barra);
            fflush(stdout);
            usleep(TIME * 2);
        }
    }
    printf("\rDONE");
    printf("\n");
}

void clearScreen() {
    cout << "\033[2J\033[1;1H";
}