#include <map>

using namespace std;

typedef enum {PEDRA, PAPEL, TESOURA} opcao;
typedef enum {JOGADOR1, JOGADOR2, EMPATE} ganhador;

map<opcao, opcao> regras {
	{PEDRA, TESOURA},
	{TESOURA, PAPEL},
	{PAPEL, PEDRA}
};

class JockenPo
{
public:
	
	ganhador jogar(opcao opcaoJogador1, opcao opcaoJogador2)
	{
		if(opcaoJogador1 == opcaoJogador2)
			return EMPATE;
		
		auto perdedor = regras[opcaoJogador1];

		return opcaoJogador2 == perdedor ? JOGADOR1 : JOGADOR2;
	}
};
