
#include "GetWeaponCommand.h"
#include "../../TheGrid.h"

GetWeaponCommand::GetWeaponCommand()
                :Command("getWeapon", "[getWeapon] Command to get weapon from inventory") {}

bool GetWeaponCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    Hero* hero = theGrid->getParty()->getHero(args[0]);

    Weapon* weapon = getWeapon(hero);

    if(weapon == nullptr)
        return false;
    else
        hero->equipWeapon(weapon);

    return true;
}

Weapon* GetWeaponCommand::getWeapon(Hero *hero)
{
    if(hero->getInventory().noWeapons())
    {
        std::cout << "Your inventory is empty... Cannot get any weapon." << std::endl;
        return nullptr;
    }

    std::cout << "Which weapon do you want to get <weapon_name>?" << std::endl;

    hero->printItemsofInventory("Weapon");

    std::string name;
    std::cin >> name;

    Item* item = hero->getItem(name);

    while(item == nullptr)
    {
        std::cout << "Unknown weapon..." << std::endl;
        std::cout << "You may have given the name wrong..." << std::endl;
        std::cout << "Please check your inventory once again." << std::endl;

        hero->printItemsofInventory("Weapon");

        std::cin >> name;
        item = hero->getItem(name);
    }

    return (Weapon*)item;
}