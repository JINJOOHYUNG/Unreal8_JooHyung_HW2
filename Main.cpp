#include <iostream>
#include "WarriorClass.h"
#include "MagicianClass.h"
#include "ArcherClass.h"
#include "ThiefClass.h"

int main()
{
    Player* player = nullptr;
    int choice = 0;

    std::cout << "| 1. Warrior | 2. Magician | 3. Thief | 4. Archer |\n";
    std::cin >> choice;

    switch (choice)
    {
    case 1:
        player = new Warrior();
        break;

    case 2:
        player = new Magician();
        break;

    case 3:
        player = new Thief();
        break;

    case 4:
        player = new Archer();
        break;

    default:
        std::cout << "Invalid choice.\n";
        return 0;
    }

    player->Attack();
    player->Move();
    player->ShowInformation();

    delete player;
    player = nullptr;

    return 0;
}