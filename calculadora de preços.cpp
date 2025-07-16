/*
Autor: Arthur Celestino da Silva
Ano: 2025
Funcionalidade: Calcular automaticamente os preços da Gasolina e do Etanol Ipimax Aditivados a partir do preço dos seus
respectivos comuns e calcular os preços com o acrescimo TicketLog/GoodCard.
*/

#include <iostream>

int main(){
    double gascom = 0.0;
    double etacom = 0.0;
    double etaipi = 0.0;
    double gasipi = 0.0;
    double gascomt = 0.0;
    double etacomt = 0.0;
    double etaipit = 0.0;
    double gasipit = 0.0;

    std::cout << "Bem-Vindo!\nEste programa calcula os preços do GoodCard/TicketLog e dos combustíveis aditivados automaticamente." << std::endl;
    std::cout << "IMPORTANTE! Para que este programa funcione corretamente use . para separar as csas decimais do inteiro. EX.: 4.60, 6.15 7.29" << std::endl;
    std::cout << "Para começarmos informe o preço da Gasolina Comum Orignal: R$ " << std::endl;
    std::cin >> gascom;
    std::cout << "Agora infome o preço do Etanol Comum Original: R$ " << std::endl;
    std::cin >> etacom;
    std::cout <<"-----------------------------------------------------------" <<std::endl;

    etaipi = etacom + 0.15;
    gasipi = gascom + 0.20;

    gascomt = gascom + 0.20;
    gasipit = gasipi + 0.20;
    etacomt = etacom + 0.20;
    etaipit = etaipi + 0.20;

    std::cout << "O Preço do Etanol Ipimax Aditivado é R$ " << etaipi << std::endl;
    std::cout << "O preço da Gasolina Ipimax Aditivada é R$ " << gasipi <<std::endl;
    std::cout << "----------------------------------------------------------" <<std::endl;
    std::cout << "O preço da Gasolina Original Comum no TicketLog é R$ " << gascomt <<std::endl;
    std::cout << "O preço da Gasolina Ipimax Aditivada no TicketLog é R$ " << gasipit <<std::endl;
    std::cout << "O Preço do Etanol Original Comum no TicketLog é R$ " << etacomt <<std::endl;
    std::cout << "O Preço do Etanol Ipimax Aditivado no TicketLog é R$ " << etaipit <<std::endl;

    std::cout << "Pressione ENTER para sair...";
    std::cin.ignore();  // Limpa o \n que ficou no buffer (caso exista)
    std::cin.get();
    return 0;
}