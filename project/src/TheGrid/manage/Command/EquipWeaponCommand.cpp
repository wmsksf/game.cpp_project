
#include "EquipWeaponCommand.h"
#include "../../TheGrid.h"
#include "../Random/Utils.h"

EquipWeaponCommand::EquipWeaponCommand()
                :Command("equipWeapon", "[equipWeapon <hero_name> <weapon_name>] Command to get weapon from inventory") {}

bool EquipWeaponCommand::execute(TheGrid *theGrid, std::vector<std::string> &args)
{
    if(args.size() < 1)
    {
        return invalidUsage();
    }

    std::vector<std::string> weaponParts(args.begin() + 1, args.end());

    Hero* hero = theGrid->getParty()->getHero(args[0]);

    if(args.size() == 1)
    {
        std::cout << std::endl << "You should pick a weapon!" << std::endl;

        hero->printItemsByCategory("Weapon");

        return false;
    }

    std::string weaponName = join(weaponParts, " ");

    Item* item = hero->getItem(weaponName);

    if(item == nullptr)
    {
        std::cout << std::endl << "Unable to find weapon, please try another..."
                  << std::endl;
        return false;
    }

    if(item->getCategory().compare("Weapon") != 0)
    {
        std::cout << std::endl << "Please pick a weapon!!" << std::endl;
        return false;
    }

    if(hero->getLevel() < item->getRequiredLevel())
    {
        std::cout << std::endl << "Level too low!" << std::endl;
        return false;
    }

    hero->equipWeapon((Weapon*)item);
    return true;
}