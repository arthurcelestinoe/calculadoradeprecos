/*
Autor: Arthur Celestino da Silva
Ano: 2025
Funcionalidade: Calcular automaticamente os precos da Gasolina e do Etanol Ipimax Aditivados a partir do preco dos seus
respectivos comuns e calcular os precos com o acrescimo TicketLog/GoodCard.
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

    std::cout << "Bem-Vindo!\nEste programa calcula os precos do GoodCard/TicketLog e dos combustiveis aditivados automaticamente." << std::endl;
    std::cout << "IMPORTANTE! Para que este programa funcione corretamente use . para separar as casas decimais do inteiro. EX.: 4.60, 6.15 7.29" << std::endl;
    std::cout << "Para comecarmos informe o preco da Gasolina Comum Original: R$ " << std::endl;
    std::cin >> gascom;
    std::cout << "Agora informe o preco do Etanol Comum Original: R$ " << std::endl;
    std::cin >> etacom;
    std::cout <<"-----------------------------------------------------------" <<std::endl;

    etaipi = etacom + 0.15;
    gasipi = gascom + 0.20;

    gascomt = gascom + 0.20;
    gasipit = gasipi + 0.20;
    etacomt = etacom + 0.20;
    etaipit = etaipi + 0.20;

    std::cout << "O preco do Etanol Ipimax Aditivado e R$ " << etaipi << std::endl;
    std::cout << "O preco da Gasolina Ipimax Aditivada e R$ " << gasipi <<std::endl;
    std::cout << "----------------------------------------------------------" <<std::endl;
    std::cout << "O preco da Gasolina Original Comum no TicketLog e R$ " << gascomt <<std::endl;
    std::cout << "O preco da Gasolina Ipimax Aditivada no TicketLog e R$ " << gasipit <<std::endl;
    std::cout << "O preco do Etanol Original Comum no TicketLog e R$ " << etacomt <<std::endl;
    std::cout << "O preco do Etanol Ipimax Aditivado no TicketLog e R$ " << etaipit <<std::endl;

    std::cout << "Pressione ENTER para sair...";
    std::cin.ignore();  // Limpa o \n que ficou no buffer (caso exista)
    std::cin.get();
    return 0;
}