#pragma once

#include <iostream>
#include <map>

using std::string;
using std::cout;
using std::endl;
using std::map;

#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
	private:
		Warlock();
		Warlock(const Warlock &other);
		Warlock &operator=(const Warlock &other);

		string name;
		string title;
		map<string, ASpell *> arr;
	public:
		Warlock(const string &_name, const string &_title);
		~Warlock();

		const string &getName() const;
		const string &getTitle() const;

		void setTitle(const string &str);
		
		void introduce() const;

		void learnSpell(ASpell *ptr);
		void forgetSpell(string name);
		void launchSpell(const string name, const ATarget &ref);
};
