
#include "../logic/Chess.h"
#include "../logic/BitBoard.h"



#include "Heuristic.h"

// Include doubly linked list implementation
#include "dlist.h"
class Node{
  public:
    float Value;
    Chess * Game;
    Node * Parent;
    int move[4];
    void GenChildren();
    LList<Node *> Children;

    void WhitePawnMoves(int x,int y);
    void WhiteKnightMoves(int x, int y);
    void WhiteBishopMoves(int x, int y);
    void WhiteRookMoves(int x, int y);
    void WhiteQueenMoves(int x,int y);
    void WhiteKingMoves(int x,int y);

    void BlackPawnMoves(int x,int y);
    void BlackKnightMoves(int x, int y);
    void BlackBishopMoves(int x, int y);
    void BlackRookMoves(int x, int y);
    void BlackQueenMoves(int x,int y);
    void BlackKingMoves(int x,int y);

    Node(Chess *G,int xs,int ys,int xd,int yd);
};


class Engine{
  public:
    Chess CurrentGame;
    int depth;
    Engine(Chess G,int d);
    float alphabeta(Node *N, int depth, float alpha, float beta, bool maximizingPlayer);
    void SuggestMove();

};
