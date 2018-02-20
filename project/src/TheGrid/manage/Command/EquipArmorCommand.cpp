
#include "EquipArmorCommand.h"
#include "../../TheGrid.h"

EquipArmorCommand::EquipArmorCommand()
                :Command("equipArmor", "[equipArmor <hero_name> <armor_name>] Command to equip armor"){}

bool EquipArmorCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    if(args.size() < 1)
    {
        return invalidUsage();
    }

    Hero* hero = theGrid->getParty()->getHero(args[0]);

    if(args.size() == 1)
    {
        std::cout << "You should pick an armor!" << std::endl;
        hero->printItemsByCategory("Armor");
        return false;
    }

    std::string armorName = args[1];

    Item* item = hero->getItem(armorName);

    if(item == nullptr)
    {
        std::cout << "Unable to find armor, please try another..." << std::endl;
        return false;
    }

    if(item->getCategory().compare("Armor") != 0)
    {
        std::cout << "Please pick an Armor!!" << std::endl;
        return false;
    }

    if(hero->getLevel() < item->getRequiredLevel())
    {
        std::cout << "Level too low" << std::endl;
        return false;
    }

    hero->equipArmor((Armor*)item);
    return true;
}