#include<iostream>
#include<string>
using namespace std;

int jlValidarUsuario(string user1, string cont1, string user2, string cont2, string&intentoUsuario)
{
    string nomUsuario[] = {user1, user2};
    string nomContrasena[] = {cont1, cont2};

    string intentoContrasena=" ";
    char caracter=' ';
    int intento=0;
    do{
        cout << "................." << endl;
        cout << "+ Usuario: " << endl;
        cin >> intentoUsuario;
        cout << "+ Clave: " << endl;
        cin >> intentoContrasena;
        cout << "................." << endl;
    

        if ((intentoUsuario == nomUsuario[0] && intentoContrasena == nomContrasena[0]) ||
            (intentoUsuario == nomUsuario[1] && intentoContrasena == nomContrasena[1]))
        {
             int size = intentoUsuario.length();
             for (int w = 0; w < size; w++) 
                intentoUsuario[w]=toupper(intentoUsuario[w]);
       

            cout << "Bienvenido " <<intentoUsuario<< endl;
            return 1;
        }
        else
        {
            intento++;
            cout << "*Nro de intentos: " << intento << endl << endl;
        }

    }while(intento <3);
    cout <<"Lo sentimos tu usuario y clave son incorrectos..! " <<endl;
    return 0;    
}

