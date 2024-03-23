#pragma once

#include "Warlock.hpp"
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	string name;
	string effects;
	public:
		ASpell();
		ASpell(const string &_name, const string &_effects);
		ASpell(const ASpell &other);
		ASpell &operator=(const ASpell &other);
		virtual ~ASpell();

		const string &getName() const;
		const string &getEffects() const;

		void launch(const ATarget &ref) const;

		virtual ASpell *clone() const = 0;
};
