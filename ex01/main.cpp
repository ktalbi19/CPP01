#include "Zombie.hpp"

#define N 5

int main(void)
{
    std::string name;
    Zombie  *zomb = zombieHorde(N, "Maurice");

    for(int i; i < N; i++)
        zomb[i].announce();

    delete [] zomb;
    return (0);
}
