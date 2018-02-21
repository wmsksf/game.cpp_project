
#include <string>
#include <stdarg.h>
#include <memory>
#include <cstring>
#include <iterator>
#include <sstream>
#include <iostream>
#include "Utils.h"
#include "Random.h"

std::string string_format(const std::string fmt_str, ...)
{
	/* Reserve two times as much as the length of the fmt_str */
	int final_n, n = ((int)fmt_str.size()) * 2;
	std::unique_ptr<char[]> formatted;
	va_list ap;

	while(1)
	{
		formatted.reset(new char[n]); /* Wrap the plain char array into the unique_ptr */

		strcpy(&formatted[0], fmt_str.c_str());
		va_start(ap, fmt_str);
		final_n = vsnprintf(&formatted[0], n, fmt_str.c_str(), ap);
		va_end(ap);
		if (final_n < 0 || final_n >= n)
			n += abs(final_n - n + 1);
		else
			break;
	}
	return std::string(formatted.get());
}

std::vector<std::string> split(const std::string &str, const std::string &delim)
{
	std::vector<std::string> tokens;
	size_t prev = 0, pos = 0;
	do
	{
		pos = str.find(delim, prev);
		if (pos == std::string::npos) pos = str.length();
		std::string token = str.substr(prev, pos-prev);
		if (!token.empty()) tokens.push_back(token);
		prev = pos + delim.length();
	}
	while (pos < str.length() && prev < str.length());
	return tokens;
}

int experienceForLevelUp(int level)
{
	return 100 * ( level * level + 2 * level);
}

int max(int a, int b)
{
	if(a > b)
		return a;
	return b;
}

int monsterLevel(double averageHeroLevel)
{
	return randomInRange(max(averageHeroLevel - 5, 1), averageHeroLevel + 5);
}

std::string join(std::vector<std::string> args, std::string separator)
{
	std::string str = "";
	if(args.size() > 0)
		str = args[0];

	for(int i = 1; i < args.size(); i++)
	{
		str = str + separator + args[i];
	}

	return str;
}

bool is_number(const std::string& s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}