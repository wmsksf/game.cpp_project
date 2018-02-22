
#include "EquipArmorCommand.h"
#include "../../TheGrid.h"
#include "../Random/Utils.h"

EquipArmorCommand::EquipArmorCommand()
                :Command("equipArmor", "[equipArmor <hero_name> <armor_name>] Command to equip armor"){}

bool EquipArmorCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    if(args.size() < 1)
    {
        return invalidUsage();
    }

    std::vector<std::string> armorParts(args.begin() + 1, args.end());

    Hero* hero = theGrid->getParty()->getHero(args[0]);

    if(args.size() == 1)
    {
        std::cout << std::endl << "You should pick an armor!" << std::endl;

        hero->printItemsByCategory("Armor");

        return false;
    }

    std::string armorName = join(armorParts, " ");

    Item* item = hero->getItem(armorName);

    if(item == nullptr)
    {
        std::cout << std::endl << "Unable to find armor, please try another..."
                  << std::endl;
        return false;
    }

    if(item->getCategory().compare("Armor") != 0)
    {
        std::cout << std::endl << "Please pick an Armor!!" << std::endl;
        return false;
    }

    if(hero->getLevel() < item->getRequiredLevel())
    {
        std::cout << "Level too low!" << std::endl;
        return false;
    }

    hero->equipArmor((Armor*)item);
    return true;
}