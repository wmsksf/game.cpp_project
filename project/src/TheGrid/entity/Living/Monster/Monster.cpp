
#include <vector>
#include "Monster.h"
#include "../../../manage/Random/Random.h"
#include "../../Spell/Effect/Effect.h"

Monster::Monster(const std::string &name,
                 int minDamage, int maxDamage,
                 int defense, double dodgeProbability)

		: Living(name, 1000),
		  minDamage(minDamage),
		  maxDamage(maxDamage),
		  defense(defense),
		  dodgeProbability(dodgeProbability)
{
	level = randomInRange(1, 100);
}

void Monster::displayStats()
{
	Living::displayStats();

	std::cout << "[" << minDamage << ", " << maxDamage << " damage range]" << std::endl;
	std::cout << "[" << defense << " defense]" << std::endl;
	std::cout << "[" << dodgeProbability << " dodge probability]" << std::endl;
}

int Monster::getMinDamage() const
{
	return minDamage;
}

int Monster::getMaxDamage() const
{
	return maxDamage;
}

int Monster::getDefense() const
{
	return defense;
}

double Monster::getDodgeProbability() const
{
	return dodgeProbability;
}

/*
const std::vector<Effect *> &Monster::getEffects() const
{
	return effects;
}*/