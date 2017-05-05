#include <iostream>
#include <math.h>
#include <bitset>


using namespace std;

int menu();


int main(){
    bool salir = false;
    while (!salir){
        switch(menu()){
            case 1:{
                int numeroN, count = 0;

		cout << "Ingrese Un Numero: ";
		cin >> numeroN;
		for(int i = 0; i <= numeroN; i++){
			count = 0;
			string binary = bitset<8>(i).to_string();
			
			for(int j = 0; j < binary.size(); j++){
				if(binary[j] == '1'){
					count++;	
				}
			}
			if(count % 2 == 0){
				cout << i << ",";		
			}
		}
		cout << endl;
		cout << "---------------------------" << endl;
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

//pointless code;
/*while(no>0) {
	rem[i]=no%2;
	i++;
	no=no/2;
}
cout<<"Binary Number is :";
	for(j=i-1;j>=0;j--) {
		cout<<rem[j];
	}
}*/


int menu(){
    int opcion;
    bool valido = true;
    do{
        cout << "-----MENU------" << endl
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
	cout << "----------------------" << endl;
		
    }while(!valido);
    return opcion;
}

