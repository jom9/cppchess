#include "Engine.h"
#include "../game_cache/CreateGame.h"
#include "../logic/Chess.h"
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main(int argc,char ** argv){

  char player =argv[1][0];
  char* board = argv[3];
  int depth = atoi(argv[2]);
  //cout<<xs<<ys<<"\n";
  Chess* C = CreateGame::GetGameFromString(board,player);
  Engine E(*C,depth);
  E.SuggestMove();



}
