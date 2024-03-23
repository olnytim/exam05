#pragma once

#include "ASpell.hpp"

class SpellBook
{
	private:
		map<string, ASpell *> arr;

		SpellBook(const SpellBook &other);
		SpellBook &operator=(const SpellBook &other);

	public:
		SpellBook();
		~SpellBook();

		void learnSpell(ASpell *ptr);
		void forgetSpell(const string &name);
		ASpell  *createSpell(const string &name);
};
