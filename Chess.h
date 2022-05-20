//
// Created by Kenny on 5/19/2022.
//

#ifndef CHESS_CHESS_H
#define CHESS_CHESS_H

#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <experimental/filesystem>

using std::string;
using std::vector;
using std::cout;
using std::endl;

enum pType { pawn, rook, knight, bishop, queen, king, empty };

struct piece {
    piece();
    piece(pType name, bool isWhite);
    piece(piece const &val);

    pType name = empty;
    bool isWhite = NULL;
};

class Chess {
private:
    piece board[8][8];

public:
    Chess();
    ~Chess();

    void initBoard();
    bool makeMove(string start, string dest);
    bool checkCheck(string kingPos);
};


#endif //CHESS_CHESS_H
