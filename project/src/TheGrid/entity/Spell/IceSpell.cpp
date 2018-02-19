
#include "IceSpell.h"
#include "../../manage/Random/Random.h"

IceSpell::IceSpell(const std::string &name)

		:Spell(name, randomInRange(50, 100),
		        randomInRange(5, 12), randomInRange(10, 20),
		        randomInRange(8, 15), randomInRange(18, 25)) {}