//
// Created by kostas on 2/12/18.
//

#include <string>
#include <stdarg.h>
#include <memory>
#include <cstring>
#include "Utils.h"


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
