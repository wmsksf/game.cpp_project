
#include "EquipWeaponCommand.h"
#include "../../TheGrid.h"

EquipWeaponCommand::EquipWeaponCommand()
                :Command("equipWeapon", "[equipWeapon <hero_name> <weapon_name>] Command to get weapon from inventory") {}

bool EquipWeaponCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    if(args.size() < 1)
    {
        return invalidUsage();
    }

    Hero* hero = theGrid->getParty()->getHero(args[0]);

    if(args.size() == 1)
    {
        std::cout << "You should pick a weapon!" << std::endl;
        hero->printItemsByCategory("Weapon");
        return false;
    }

    std::string weaponName = args[1];

    Item* item = hero->getItem(weaponName);

    if(item == nullptr)
    {
        std::cout << "Unable to find weapon, please try another..." << std::endl;
        return false;
    }

    if(item->getCategory().compare("Weapon") != 0)
    {
        std::cout << "Please pick a Weapon !!" << std::endl;
        return false;
    }

    if(hero->getLevel() < item->getRequiredLevel())
    {
        std::cout << "Level too low" << std::endl;
        return false;
    }

    hero->equipWeapon((Weapon*)item);
    return true;
}
