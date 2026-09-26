#include <iostream>
#include <cstdlib>
using namespace std;

void ejercicio1();
void ejercicio2();
void ejercicio3();
void ejercicio4();
void ejercicio5();
void ejercicio6();
void ejercicio7();
void ejercicio8();
void ejercicio9();
void ejercicio10();

int main()
{
    int opcion;

    do
    {
        cout << "\n========== MENU ==========\n";
        cout << "1. El cajero automatico\n";
        cout << "2. Calculadora de anios bisiestos\n";
        cout << "3. La piramide de numeros\n";
        cout << "4. El detector de picos\n";
        cout << "5. La caja registradora\n";
        cout << "6. El censor de texto\n";
        cout << "7. El carrusel (Rotacion)\n";
        cout << "8. El detector de palindromos\n";
        cout << "9. El sumador de digitos\n";
        cout << "10. Compresion de texto basica\n";
        cout << "0. Salir\n";
        cout << "==========================\n";

        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion)
        {
            case 1:
                ejercicio1();
                break;

            case 2:
                ejercicio2();
                break;

            case 3:
                ejercicio3();
                break;

            case 4:
                ejercicio4();
                break;

            case 5:
                ejercicio5();
                break;

            case 6:
                ejercicio6();
                break;

            case 7:
                ejercicio7();
                break;

            case 8:
                ejercicio8();
                break;

            case 9:
                ejercicio9();
                break;

            case 10:
                ejercicio10();
                break;

            case 0:
                cout << "\nSaliendo del programa...\n";
                break;

            default:
                cout << "\nOpcion no valida.\n";
        }

        if(opcion != 0)
        {
            system("pause");
        }

    } while(opcion != 0);

    return 0;
}


void ejercicio1()
{
    //Pide al usuario una cantidad de dinero a retirar 
    //(valida que sea un número mayor a cero y múltiplo de 10). 
    //Usando operaciones matemáticas simples y condicionales, calcula y 
    //muestra cuántos billetes de 100, 50, 20 y 10 se le deben entregar 
    //para darle la menor cantidad de billetes posibles.
}

void ejercicio2()
{
    // Aqui va el ejercicio 2
}

void ejercicio3()
{
    // Aqui va el ejercicio 3
}

void ejercicio4()
{
    // Aqui va el ejercicio 4
}

void ejercicio5()
{
    // Aqui va el ejercicio 5
}

void ejercicio6()
{
    // Aqui va el ejercicio 6
}

void ejercicio7()
{
    // Aqui va el ejercicio 7
}

void ejercicio8()
{
    // Aqui va el ejercicio 8
}

void ejercicio9()
{
    // Aqui va el ejercicio 9
}

void ejercicio10()
{
    // Aqui va el ejercicio 10
}