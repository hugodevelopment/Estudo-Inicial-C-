#include<iostream>

using namespace std;

int main ()

{
  char Anime; //Declarando um caractere	
  
   cout << "Qual anime você mais gosta ?" << endl; // Aparecerá na tela
   cout << "Naruto., Bleach., One Piece., Yu Yu Hakusho., HxH., SnK., ? (N| B | O | Y | H | S)" << endl; // Aparecerá na tela
  
   cin >> Anime;
  
   if (Anime == 'N'|| 'n') //
  
  cout << " Naruto clássico é muito bom, mas no shippuden deu uma caída" << endl;
   
   else if (Anime == 'B'|| 'b')
   
   cout << " Bleach teve um ótimo começo, mas foi caindo de qualidade" << endl;
   
   else if ( Anime == 'O' || 'o')
   
   cout << " One Piece é incrível, será que o Luffy será o rei dos piratas ?" << endl;
   
    else if (Anime == 'Y'|| 'y')
   
      cout << " Yu Yu Hakusho é um dos melhores disparado" << endl;
   
   else if (Anime == 'H'|| 'h')
    
	cout << " HxH é o meu preferido também" << endl;
	
	else if (Anime == 'S'|| 's' )
	
	cout << " Um dos melhores sem dúvida, mas ainda não vi tudo" << endl;
   
   else cout << "Ainda preciso ver mais" << endl;
   
   }