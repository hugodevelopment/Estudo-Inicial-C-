int main()
{
    int n, count=0, sum=0; // declarando as variáveis, importante atribuir zero as variaveis que serão iteradas
    
    cout << "Insira um numero inteiro positivo (0 ou um numero negativo para terminar o programa)" << endl; // mensagem que aparecerá na tela
    for (;;) // um lopp inderteminado
    {
        cout << "\t" << count + 1 << ":" ; // \t é o espaçamento, a contagem começa do zero + 1
        cin >> n; // operador de entrada que lerá a variável
        if (n <= 0) break;  // caso n for menor ou igual a zero o programa será encerrado
        ++ count;
        sum =+ n;
    }
 
 cout << "A media destes " << count << "Numeros inteiros positivos" << float(sum)/count << endl; // mensagem que aparecerá na tela ao final
    return 0;
}
