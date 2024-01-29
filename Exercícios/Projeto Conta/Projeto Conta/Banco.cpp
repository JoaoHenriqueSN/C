#include <iostream>
#include "conta.h"
#include <string>


int main()
{
	
	//Criamos um objeto ContaCliente01 do tipo Conta
	//Esta alocado na Stack
	Conta ContaCliente01;
	//Criamos um objeto ContaCliente02 do tipo Conta
	//Esta alocado na Stack
	Conta ContaCliente02;

	std::cout << "Enederco de Memoria Objeto ContaCliente01: " << &ContaCliente01 << "\n";
	std::cout << "Enederco de Memoria Objeto ContaCliente02: " << &ContaCliente02 << "\n";

	ContaCliente01.SetBanco("Bradesco");
	ContaCliente01.SetAgencia(1234);
	ContaCliente01.SetNumConta(9999);
	ContaCliente01.SetTitular("Fulani");
	ContaCliente01.Depositar(14690);
	ContaCliente01.Sacar(1500);

	ContaCliente02.SetBanco("Banco do Brasil");
	ContaCliente02.SetAgencia(5678);
	ContaCliente02.SetNumConta(1111);
	ContaCliente02.SetTitular("Beltrano");
	
	//o objeto ContaCliente02 será enviado como argumento para a fun~ção transferir
	ContaCliente01.Transferir(ContaCliente02, 2000);
	ContaCliente02.Sacar(500);
	ContaCliente02.Sacar(5000);





	system("PAUSE");
	return 0;
}
