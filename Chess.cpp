//
// Created by Kenny on 5/19/2022.
//

#include "Chess.h"

piece::piece() {

}

piece::piece(pType name, bool isWhite) {

}


void Chess::initBoard() {
    bool isWhite = true;

    for(int i = 0; i < 8; i++) { board[1][i] = piece(pawn, isWhite); }
    board[0][0] = piece(rook, isWhite);
    board[0][1] = piece(knight, isWhite);
    board[0][2] = piece(bishop, isWhite);
    board[0][3] = piece(queen, isWhite);
    board[0][4] = piece(king, isWhite);
    board[0][5] = piece(bishop, isWhite);
    board[0][6] = piece(knight, isWhite);
    board[0][7] = piece(rook, isWhite);

    isWhite = false;

    for(int i = 0; i < 8; i++) { board[7][i] = piece(pawn, isWhite); }
    board[8][0] = piece(rook, isWhite);
    board[8][1] = piece(knight, isWhite);
    board[8][2] = piece(bishop, isWhite);
    board[8][3] = piece(queen, isWhite);
    board[8][4] = piece(king, isWhite);
    board[8][5] = piece(bishop, isWhite);
    board[8][6] = piece(knight, isWhite);
    board[8][7] = piece(rook, isWhite);
}


