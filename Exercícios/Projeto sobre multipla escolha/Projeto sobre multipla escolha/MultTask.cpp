#include <iostream>
#include <locale.h>

//Criar um progtama de multipla escolha

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Op;
	char s;
	char n;
	//Op = Op��o

	std::cout << "	Voc� � um jovem aventureiro que vive na capital de Azrael, o reino do trono vazio. Seu sonho � se juntar com a cavalaria dos Guerreiros de Platina, mas pela sua idade e pouca experi�ncia � algo quase imposs�vel.  \n";

	std::cout << "	Agora voc� decidiu que as coisas n�o ser�o mais assim, voc� jurou pra si mesmo que far� algo para mudar seu	  destino. \n";

	std::cout << "	Seu primeiro passo foi ir at� a mata solit�ria que fica nos entornos do reino, o capit�o da guarda disse que l� vive uma pequena tribo de goblins que volta e meia causa problema a viajantes daquela regi�o. Voc� decidiu investigar, munido de sua espada curta e seu arco longo.\n";

	std::cout << "	Chegando at� o local futivamente, voc� avista dois malditos goblins guardando a porta da frente conversando sobre alguma bobagem qualquer. ";

	std::cout << "\n[1] Abordagem Furtiva\n";
	std::cout << "\n[2] Lutar como um homem\n";
	std::cin >> Op;

	switch (Op)
	{
	case 1: 
		system("CLS");
		std::cout << "\n	Voc� usa a mata para passar sorrateiramente pelos goblins e ir at� a porta. Quer tentar matar eles com o arco?[s][n]\n";
		if (s) {
			std::cout << "	Voc� atira rapidamente com o arco e mata os dois goblins sem muitos problemas, Azrael deve estar ao seu lado. Voc� ganhou todo o loot deles [loot]";
		}
		else (n); {
			std::cout << "	Voc� passa por eles sem muitos problemas.";
		}
		break;
	case 2:
		system("CLS");
		std::cout << "\n	Voc� se anuncia para os dois goblins tirando a espada da bainh.\n";
		std::cout << "\n	Eles grunem babando e rindo. ''Humano imbecil, foi muito tolo ter vindo at� aqui hehe'' - diz um deles.\n";
		break;
	}


	system("PAUSE");
	return 0;
}

