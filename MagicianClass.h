#pragma once
#include "BasicClass.h"
#include <iostream>

class Magician :public Player
{
public:
    Magician()
        :Player("Magician", 1, 30, 100, 5, 20, 5, 5, 50, 100, 70.0f)
    {
    }
   
    void Attack() override;
    void Move() override;
    void ShowInformation() override;

    ~Magician()
    {
        std::cout << "Magician destroyed\n";
    }
};