
#ifndef NONO_UTILS_H
#define NONO_UTILS_H

#include <vector>

std::string string_format(const std::string fmt_str, ...);

std::vector<std::string> split(const std::string &str, const std::string &delim);

int experienceForLevelUp(int level);

int max(int a, int b);

int monsterLevel(double averageHeroLevel);

std::string join(std::vector<std::string> args, std::string separator);

bool is_number(const std::string& str);

#endif //NONO_UTILS_H