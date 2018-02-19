
#include "MonsterFactory.h"
#include "../Random/Utils.h"

MonsterFactory::MonsterFactory()
{
    nameFactory = new NameFactory("Resources/Monsters.txt");
}

std::vector<Monster*>* MonsterFactory::createMonsters(HeroParty *party)
{
    std::vector<Monster*>* monsters = new std::vector<Monster*>();
    int numberOfMonsters = randomInRange(2, 5);

    for( int i = 0; i < numberOfMonsters; i++)
    {
        int monsterType = randomInt(3);

        switch(monsterType)
        {
            case 0:
                monsters->push_back(createExoskeleton(party));
                break;
            case 1:
                monsters->push_back(createSpirit(party));
                break;
            case 2:
                monsters->push_back(createDragon(party));
                break;
        }
    }

    return monsters;
}

Exoskeleton* MonsterFactory::createExoskeleton(HeroParty* party)
{
    return new Exoskeleton(nameFactory->createName("Exoskeleton"), monsterLevel(party->getAverageLevel()));
}

Spirit* MonsterFactory::createSpirit(HeroParty* party)
{
    return new Spirit(nameFactory->createName("Spirit"), monsterLevel(party->getAverageLevel()));
}

Dragon* MonsterFactory::createDragon(HeroParty* party)
{
    return new Dragon(nameFactory->createName("Dragon"), monsterLevel(party->getAverageLevel()));
}