#include <iostream>
using namespace std;

int main(){ 
// Defini��o das vari�veis
    int a, b, c,d,e,z;
    
    // Solicita��o para o usu�rio inserir os valores
    cout << "Digite o valor de a: ";
    cin >> a;
    
    cout << "Digite o valor de b: ";
    cin >> b;
    
    cout << "Digite o valor de c: ";
    cin >> c;
    
    cout << "Digite o valor de d: ";
    cin >> d;
    
    cout << "Digite o valor de e: ";
    cin >> e;
    
    // Express�o alg�brica: z = a+b*c/d-e
    z = a+b*c/d-e;
    
    // Sa�da do resultado
    cout << "O resultado da express�o z =a+b*c/d-e  �: " << z << endl;
    
    return 0;

}
