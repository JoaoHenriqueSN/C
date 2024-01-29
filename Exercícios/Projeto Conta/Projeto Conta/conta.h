#pragma once
#include <iostream>

//Este é o arquivo .h. É onde existem apenas as delcarações dos atributos e
//métodos da classe. Aqui não existem as definições , implementações das funções, 
//pois será feito no arquivo .cpp
//É a separação do O QUÊ (.h) você vai fazer do COMO(.cpp)

class Conta {

	//Indica que o acesso a estes membros abaixo de private:
	//só será permitido de dentro do código da classe
	private:
		std::string Banco;
		int Agencia;
		int NumConta;
		std::string Titular;
		double Saldo{0.0};

	//Indica que os membros abaixo podem ser acessados pelo 
	//objeto da classe Conta fora do código da classe conta

	public:
		bool Sacar(double Valor);
		void Depositar(double Valor);
		//Neste caso o parâmetro Destino recebe apenas uma cópia do 
		// valor do Objeto. Ele não tem como alterar o objeto
		//pois só recebeu uma cópia dele
		//Logo podemos usar o conceito de referência para passar a 
		//referência do objeto e com isso Destino vai poder alterar
		//este objeto pois será realizada uma passagem de argumentos por 
		//referência e não mais por valor
		void Transferir(Conta &Destino, double Valor);
		double ConsultarSaldo();
		std::string GetBanco();
		int GetAgencia();
		int GetNumConta();
		std::string GetTitular();
		void GetEnderecoThis();
		void SetBanco(std::string Banco);
		void SetAgencia(int Agencia);
		void SetTitular(std::string Titular);
		void SetNumConta(int NumConta);

};




