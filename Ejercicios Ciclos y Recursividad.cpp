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
            system("pause");//se lo pedi a chatgpt ahora aprendi a como pausar menus xd
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
    int dinero, cuenta100=0, cuenta50=0, cuenta20=0,cuenta10=0;
    cout<<"Ingrese la cantidad de dinero a retirar: ";
    cin >> dinero;
    if (dinero>0 && dinero % 10 == 0){
        
        cuenta100=dinero / 100;
        dinero = dinero % 100;
        
        cuenta50 = dinero / 50;
        dinero = dinero % 50;
        
        cuenta20=dinero / 20;
        dinero = dinero % 20;

        cuenta10 = dinero / 10;
        dinero = dinero % 10;

        cout << "\nBilletes de 100: " << cuenta100 << endl;
        cout << "Billetes de 50: " << cuenta50 << endl;
        cout << "Billetes de 20: " << cuenta20 << endl;
        cout << "Billetes de 10: " << cuenta10 << endl;
    }else{
        cout<<"No se puede si no es multiplo de 10";
    }
}

void ejercicio2()
{
    //ide al usuario un año. 
    //Usa condicionales lógicos para determinar si es bisiesto 
    //(recuerda la regla: es divisible por 4, pero no por 100, a menos que también sea divisible por 400). 
    //Además, imprime a qué siglo pertenece ese año.
    int anio;
    cout<<"Ingrese el año a evaluar: ";
    cin >> anio;

    if (anio % 100 ==0){
        cout << "Pertenece al siglo " << anio / 100;
    }else {
        cout <<"Pertenece al siglo " <<  (anio / 100) + 1;
    }

    if ((anio %4 == 0 && anio % 100 != 0) || anio % 400 == 0) {
        cout<<"Es bisiesto"<< endl;
    }else{
        cout<<"No es bisiesto"<< endl;
    }
}

void ejercicio3()
{
    //Pide un número N (entre 1 y 9). Usa ciclos anidados (for o while) 
    //para imprimir en consola una pirámide de números de N pisos. 
    //Por ejemplo, si N=3, debe verse así: 

    //aqui nomas recicle lo de la tarea anterior, si tenia flojera perdon....

    int col, n, fil;
    cout << "\nIngrese el numero N (del 1 al 9): ";
    cin>>n;
    cout << "" << endl;
    for (fil = 1; fil <= n; fil++)
    {   
        for (col = 1; col<=fil; col++){
            cout << fil<< " ";
        }
        cout << ""<< endl;
    }
}

void ejercicio4()
{
    //Pide al usuario que ingrese 10 números enteros y guárdalos en un arreglo. 
    //Recorre el arreglo para encontrar e imprimir todos los "picos". 
    //Un pico es un número que es estrictamente mayor que el número a su izquierda
    //y mayor que el número a su derecha. (Ignora el primer y último elemento para no complicarlo).
    int numeros[10];

    cout << "Ingrese 10 numeros enteros:\n";

    for (int i = 0; i < 10; i++){
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }
    cout << "\nPicos encontrados: ";
    for (int i = 1; i < 9; i++){
        if (numeros[i] > numeros[i - 1] && numeros[i] > numeros[i + 1]){
            cout << numeros[i] << " ";
        }
    }
}

void ejercicio5()
{
    //ya no quiero repetir instrucciones 
    double precio, subtotal = 0, descuento = 0, total;
    int cantidad = 0;
    cout << "\nIngrese el precio de cada articulo.";
    cout << "\nIngrese 0 cuando haya terminado.\n";

    do{
        cout << "Precio del articulo: ";
        cin >> precio;

        if (precio > 0)
        {
            subtotal = subtotal + precio;
            cantidad++;
        }
        else if (precio < 0)
        {
            cout << "El precio no puede ser negativo.\n";
        }
    }while(precio != 0);

    if (subtotal > 100){
        descuento = subtotal * 0.10;
    }

    total = subtotal - descuento;
    cout << "\n========== TICKET ==========\n";
    cout << "Articulos comprados: " << cantidad << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Descuento: $" << descuento << endl;
    cout << "Total a pagar: $" << total << endl;
}

void ejercicio6()
{
    char frase[100];

    cout << "\nIngrese una frase: ";
    cin.ignore();
    cin.getline(frase, 100);

    for (int i = 0; i <= 100; i++)
    {
        if (frase[i] == 'a' || frase[i] == 'e' ||frase[i] == 'i'|| frase[i] == 'o'||frase[i] == 'u' || frase[i] == 'A' ||frase[i] == 'E'||frase[i] == 'I' ||frase[i] == 'O' || frase[i] == 'U')
        {
            frase[i] = '*';
        }
    }

    cout << "\nFrase censurada: " << frase << endl;
}

void ejercicio7()
{
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k, temp;
    cout << "\nArreglo original:\n";
    for (int i = 0; i < 10; i++){
        cout << numeros[i] << " ";
    }
    cout << "\nIngrese K: ";
    cin >> k;
    k = k % 10;
    for (int j = 0; j < k; j++){
        temp = numeros[9];

        for (int i=9; i > 0; i--){
            numeros[i] = numeros[i - 1];
        }

        numeros[0] = temp;
    }

    cout << "\nArreglo resultante: ";
    for (int i = 0; i < 10; i++){
        cout << numeros[i] << " ";
    }

    cout << endl;
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