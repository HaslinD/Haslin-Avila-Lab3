#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

int menu();


int main(){
    bool salir = false;
    while (!salir){
        switch(menu()){
            case 1:{
                int numeroN, count = 0;
		stringstream stringN1, stringN2;
		string binary;

		cout << "Ingrese Un Numero: ";
		cin >> numeroN;
		for(int i = 0; i < numeroN; i++){
			stringN1 << convert(i);
			binary = stringN1.str();
			
			for(int j = 0; j < binary.size(); j++){
				if(binary[j] == '1'){
					count++;	
				}
			}
			if(count % 2 == 0){
				stringN2 << i << ",";		
			}
		}
		
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

