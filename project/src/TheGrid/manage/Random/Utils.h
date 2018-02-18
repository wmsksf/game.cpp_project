
#ifndef NONO_UTILS_H
#define NONO_UTILS_H

#include <vector>

std::string string_format(const std::string fmt_str, ...);

std::vector<std::string> split(const std::string &str, const std::string &delim);

int experienceForLevelUp(int level);

int max(int a, int b);

int monsterLevel(double averageHeroLevel);

#endif //NONO_UTILS_H