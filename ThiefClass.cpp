#include "ThiefClass.h"
#include <iostream>

void Thief::Attack()
{
    std::cout << "Dagger strike! " << PATK << " Damege Dealt!\n" << std::endl;
}

void Thief::Move()
{
    std::cout << "Move at " << MoveSpeed << " Speed!\n" << std::endl;
}

void Thief::ShowInformation()
{
    std::cout << "Class : " << Jobname << std::endl;
    std::cout << "Level : " << Level << std::endl;
    std::cout << "Hit Points : " << HP << std::endl;
    std::cout << "Mana Points : " << MP << std::endl;
    std::cout << "Physical Attack : " << PATK << std::endl;
    std::cout << "Magic Attack : " << MATK << std::endl;
    std::cout << "Physical Defense : " << PDEF << std::endl;
    std::cout << "Magic Defense : " << MDEF << std::endl;
    std::cout << "Physical Accuracy : " << PACC << std::endl;
    std::cout << "Magic Accuracy : " << MACC << std::endl;
    std::cout << "MoveSpeed : " << MoveSpeed << std::endl << std::endl;
}