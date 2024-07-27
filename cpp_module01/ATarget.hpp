#pragma once

// #include "Warlock.hpp"
#include "ASpell.hpp"

#include <iostream>
#include <map>

using std::string;
using std::cout;
using std::endl;
using std::map;

class ASpell;

class ATarget
{
	string type;
	public:
		ATarget();
		ATarget(const string &_type);
		ATarget(const ATarget &other);
		ATarget &operator=(const ATarget &other);
		virtual ~ATarget();

		const string &getType() const;

		void getHitBySpell(const ASpell &ref) const;

		virtual ATarget *clone() const = 0;
};
