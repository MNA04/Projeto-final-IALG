#include <iostream>
#include <fstream>
using namespace std;

struct personagem{
	string nome;
	float recompensa;
	string arco;
	string organizacao;
	string apelido;
};
getline(cin,nome);

int main(){
	personagem OnePiece;
	ifstream leitura("aquivo.txt");
	for(int i= 0; i <; i++){
		leitura >> OnePiece.nome;
		leitura >> OnePiece.recompensa;
		leitura >> OnePiece.arco;
		leitura >> OnePiece.organizacao;
		leitura >> getline(cin,OnePiece.apelido);
	
} 
	
return 0;
}
