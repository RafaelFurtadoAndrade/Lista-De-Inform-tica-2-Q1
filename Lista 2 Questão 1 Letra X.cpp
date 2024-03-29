#include <iostream>
using namespace std;

int main(){ 
// Definição das variáveis
    int a, b, c,d,e,z;
    
    // Solicitação para o usuário inserir os valores
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
    
    // Expressão algébrica: z = a+b*c/d-e
    z = a+b*c/d-e;
    
    // Saída do resultado
    cout << "O resultado da expressão z =a+b*c/d-e  é: " << z << endl;
    
    return 0;

}
