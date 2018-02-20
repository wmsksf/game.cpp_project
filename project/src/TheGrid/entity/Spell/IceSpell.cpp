
#include "IceSpell.h"
#include "../../manage/Random/Random.h"
#include "Effect/IceSpellEffect.h"

IceSpell::IceSpell(const std::string &name)

		:Spell(name, randomInRange(50, 100),
		        randomInRange(5, 12), randomInRange(10, 20),
		        randomInRange(8, 15), randomInRange(18, 25)) {}

Effect *IceSpell::getEffect() {
	return new IceSpellEffect();
}

Spell *IceSpell::clone() {
	return new IceSpell(*this);
}
