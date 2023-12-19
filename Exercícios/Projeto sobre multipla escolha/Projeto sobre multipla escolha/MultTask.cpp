#include <iostream>
#include <locale.h>

//Criar um progtama de multipla escolha

int main()
{
	setlocale(LC_ALL, "portuguese");
	int Op;
	char s;
	char n;
	//Op = Opção

	std::cout << "	Você é um jovem aventureiro que vive na capital de Azrael, o reino do trono vazio. Seu sonho é se juntar com a cavalaria dos Guerreiros de Platina, mas pela sua idade e pouca experiência é algo quase impossível.  \n";

	std::cout << "	Agora você decidiu que as coisas não serão mais assim, você jurou pra si mesmo que fará algo para mudar seu	  destino. \n";

	std::cout << "	Seu primeiro passo foi ir até a mata solitária que fica nos entornos do reino, o capitão da guarda disse que lá vive uma pequena tribo de goblins que volta e meia causa problema a viajantes daquela região. Você decidiu investigar, munido de sua espada curta e seu arco longo.\n";

	std::cout << "	Chegando até o local futivamente, você avista dois malditos goblins guardando a porta da frente conversando sobre alguma bobagem qualquer. ";

	std::cout << "\n[1] Abordagem Furtiva\n";
	std::cout << "\n[2] Lutar como um homem\n";
	std::cin >> Op;

	switch (Op)
	{
	case 1: 
		system("CLS");
		std::cout << "\n	Você usa a mata para passar sorrateiramente pelos goblins e ir até a porta. Quer tentar matar eles com o arco?[s][n]\n";
		if (s) {
			std::cout << "	Você atira rapidamente com o arco e mata os dois goblins sem muitos problemas, Azrael deve estar ao seu lado. Você ganhou todo o loot deles [loot]";
		}
		else (n); {
			std::cout << "	Você passa por eles sem muitos problemas.";
		}
		break;
	case 2:
		system("CLS");
		std::cout << "\n	Você se anuncia para os dois goblins tirando a espada da bainh.\n";
		std::cout << "\n	Eles grunem babando e rindo. ''Humano imbecil, foi muito tolo ter vindo até aqui hehe'' - diz um deles.\n";
		break;
	}


	system("PAUSE");
	return 0;
}

