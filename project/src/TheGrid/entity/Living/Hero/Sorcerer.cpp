#include "Sorcerer.h"

Sorcerer::Sorcerer(const std::string& name)

            :Hero(name,Random(250, 150),
                  Random(400, 600), Random(300, 400)) {}