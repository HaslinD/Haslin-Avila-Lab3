#include <iostream>

using namespace std;

int main(){
    bool salir = false;
    while (!salir){
        switch(menu()){
            case 1:{
                
                break;}

            case 2:{
     		        	
                break;}

            case 3:
                salir = true;
                break;
        }//Fin switch
    }//Fin while

    return 0;
}

int menu(){
    int opcion;
    bool valido = true;
    do{
        cout << "    MENU" << endl
             << "1.- Ejercicio 1" << endl
             << "2.- Ejercicio 2" << endl
             << "3.- Salir" << endl;

        cout << " Ingrese una opción: ";
        cin >> opcion;

        if (opcion > 0 && opcion < 4)
            valido = true;
        else {
            cout << "Opción no válida, intente de nuevo ..." << endl;
        }


    }while(!valido);
    return opcion;
}

