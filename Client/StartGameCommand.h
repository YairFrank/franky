//
// Created by yair on 02/01/18.
//

#ifndef ROOT_STARTGAMECOMMAND_H
#define ROOT_STARTGAMECOMMAND_H


#include "PlayerCommand.h"

class StartGameCommand : public PlayerCommand{
public:

    StartGameCommand();


    virtual void execute(vector <string> cd, int sid);
};


#endif //ROOT_STARTGAMECOMMAND_H
