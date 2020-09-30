#include<iostream>

using namespace std;


int SomaAUmNumero(int Numero, int NumeroAsersomado)

{
    return Numero + NumeroAsersomado;
}

int main()
{
    int Numero, NumeroAsersomado;
    cout << "Digite um numero" << endl;
    cin >> Numero;

    cout << "Digite o numero a ser somado" << endl;
    cin >> NumeroAsersomado;

    cout << "A soma deste numero:" << Numero << "com o Numero" << NumeroAsersomado <<
    "Sera: " << SomaAUmNumero(Numero, NumeroAsersomado);
    system("PAUSE");
    return 0;
}