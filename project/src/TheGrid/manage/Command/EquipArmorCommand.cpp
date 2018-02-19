
#include "EquipArmorCommand.h"
#include "../../TheGrid.h"

EquipArmorCommand::EquipArmorCommand()
                :Command("equipArmor", "[equipArmor] Command to equip armor"){}

bool EquipArmorCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    Hero* hero = theGrid->getParty()->getHero(args[0]);

    Armor* armor = getArmor(hero);

    if(armor == nullptr)
        return false;
    else
        hero->equipArmor(armor);

    return true;
}

Armor* EquipArmorCommand::getArmor(Hero* hero)
{
    if(hero->getInventory().noArmors())
    {
        std::cout << "Your inventory is empty... Cannot get any armor." << std::endl;
        return nullptr;
    }

    std::cout << "Which armor do you want to equip <armor_name>?" << std::endl;

    hero->printItemsofInventory("Armor");

    std::string name;
    std::cin >> name;

    Item* item = hero->getItem(name);

    while(item == nullptr)
    {
        std::cout << "Unknown armor..." << std::endl;
        std::cout << "You may have given the name wrong..." << std::endl;
        std::cout << "Please check your inventory once again." << std::endl;

        hero->printItemsofInventory("Armor");

        std::cin >> name;
        item = hero->getItem(name);
    }

    return (Armor*)item;
}