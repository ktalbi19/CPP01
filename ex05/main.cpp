#include "Harl.hpp"

int main(void)
{
    std::string input = "";
    Harl        harl;

    while(input.compare("exit")){
        std::cout << "Choose: DEBUG, INFO, WARNING, ERROR" << std::endl;
        std::cin >> input;
        harl.complain(input);
    }
    return (0);
}
