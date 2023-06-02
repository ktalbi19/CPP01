#include "sed.hpp"

int main(int ac, char **av)
{
    if (ac != 4){
        std::cerr << "Bad use of args. exec / filename / s1 / s2" << std::endl;
    }
    else
    {
        Sed file(av[1]);
        file.replace(av[2], av[3]);
    }
    return (0);
}
