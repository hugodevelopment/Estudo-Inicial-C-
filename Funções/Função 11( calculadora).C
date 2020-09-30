#include <iostream>

using namespace std;

float Soma(float num1, float num2);
float Subtracao(float num1, float num2);
float Multiplacao(float num1, float num2);
float Divisao(float num1, float num2);



int main()

{    float num1, num2;
    
    cout << "Digite o primeiro numero" << endl;
    cin >> num1;
    
    cout << "Digite o segundo numero" << endl;
    cin >> num2;
    
    cout << "Resultado das operaçoes " << endl;
    
    cout << "Soma: " << Soma(num1, num2) << endl;
    cout << "Subtracao: " << Subtracao(num1,num2) << endl;
    cout << "Multiplacao: " << Multiplacao(num1,num2) << endl;
    cout << "Divisao: " << Divisao(num1,num2) << endl;
    
    system("Pause");
    return 0;
}    
    
    float Soma(float num1, float num2)
    
    {
        return num1 + num2;
    }
    
    float Subtracao(float num1, float num2)
    
    {
        return num1 - num2;
    }    
    
    float Multiplacao(float num1, float num2)
    {
        return num1 * num2;
    }
    
    float Divisao(float num1, float num2)
    {
        return num1 / num2;
    }    
    