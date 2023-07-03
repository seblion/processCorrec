/*
Nombre: Juan Sebastian Leon Espinosa
Validacion de entrada
*/

#include<iostream>
#include <string>
#include<unistd.h>
#include <vector>
#include <ctype.h>

#define TIEMPO 10000
using namespace std;



//cambio de mayuscalas a minusculas o al reves de acuerdo a cedula
void jlCambioMayus(string cedula, string&correo, string&nombre)
{
    int sizeCed=cedula.length();
    int sizeCo=correo.length();
    int sizeNom=nombre.length();
    if(cedula[sizeCed-1]%2!=0)
   {    
        for (int i = 0; i < sizeCo; i++) 
        {
            correo[i]=tolower(correo[i]);
        }
        for (int i = 0; i < sizeNom; i++) 
        {
            nombre[i]=toupper(nombre[i]);
        }
    }
}

// determina si una palabra es valida
int validarPalabra(string palabra)
{
   for (int i=0; i< palabra.length();i++) //cual es el error en esta linea?
        {
        
        if (!isalpha(palabra[i]))
            return false; //no es una palabra
        }  
        return true; //es una palabra
        
    return 0;
}

/* getPalabra(frase de entrada, nombre de la variable);
    
    EJEMPLO:
    string nombre = "";
    getPalabra("ingrese su nombre: ", nombre);
*/
void getPalabra( string label, string& frase)
{
    int valid = 0;  
     do
     {
        cout << label;
        cin >> frase; 
        valid = validarPalabra(frase);
     } while (!valid);

}

// determina si un numero es valido
bool jlValidarNumero(string numero)
{
   for(int i=0; i< numero.length();i++) 
        if (!isdigit(numero[i]))
            return false; //no es un numero
        return true; //es un numero
}

void getNumeroPositivo(string label, int& number) 
{
    string str;
    do
    {
         do {
            cout << label;
            cin >> str;
            bool comi= jlValidarNumero(str);
         }while(!jlValidarNumero(str));
    number = stoi(str);
    } while (number <= 0 );
}


