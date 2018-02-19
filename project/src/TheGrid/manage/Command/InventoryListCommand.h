
#ifndef NONO_INVENTORYLISTCOMMAND_H
#define NONO_INVENTORYLISTCOMMAND_H

#include "Command.h"

class InventoryListCommand : public Command
{
public:
    InventoryListCommand();

    bool execute(TheGrid *theGrid, std::vector<std::string> &args) override;
};

#endif //NONO_INVENTORYLISTCOMMAND_H