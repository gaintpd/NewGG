#ifndef END_my_m_MT_R_1che1pao2pawn_B_2ma1pawn
#define END_my_m_MT_R_1che1pao2pawn_B_2ma1pawn
#include "..\\..\\chess.h"
#include "..\\..\\preGen.h"
 
#include "..\\..\\endgame\mat.h"
#include "1��1��2����2��1��.cpp"
#include "..\\..\\white.h"
#else
#include "..\\..\\black.h"
#endif 

////const int ADD_ChePaoXPawn_To_1Pao1Ma1Pawn_ByPawn[3]    =  { 96, 64, 32};  //����X��,��2��1��
////const int ADD_1Pao1Ma1Pawn_To_ChePaoXPawn_ByPawn[3]    =  { 96, 64, 32};  //����X��,��2��1��
//
//
void my_m_MT_R_1che1pao2pawn_B_2ma1pawn(typePOS &POSITION, EvalInfo &ei){
	// ADD_MY
	Square yk = your_king_pos;
	Bitboard bmp = m_and(bb_my_pawn,MyLowBB[StoY(yk)]);
	int pmok = (int)count_1s(bmp);
	MY_EV_ADD(pmok * ADD_ChePaoXPawn_To_2Ma1Pawn_ByPawn[your_shi_num]);
	// SUB
	Square mk = my_king_pos;
	Bitboard ymp = m_and(bb_your_pawn,MyUpBB[StoY(mk)]);
	int pyok = (int)count_1s(ymp);
	MY_EV_SUB(pyok * ADD_2Ma1Pawn_To_ChePaoXPawn_ByPawn[my_shi_num]);

}

//void m_MT_B_1che1pao2pawn_R_2ma1pawn(typePOS &POSITION, EvalInfo &ei){
//
//
//	Square rk = PieceListStart(board,RKING);
//	Square bk = PieceListStart(board,BKING);
//
//	for(int from = PieceListStart(board,RPAWN); from > 0x32; from = NextPiece(board,from)){
//		if(StoY(from) > StoY(bk)){
//			board->mulScore += ADD_2Ma1Pawn_To_ChePaoXPawn_ByPawn[board->B_shi];
//		}
//	}
//
//	for(int from = PieceListStart(board,BPAWN); from > 0x32; from = NextPiece(board,from)){
//		if(StoY(from) < StoY(rk)){
//			board->mulScore -= ADD_ChePaoXPawn_To_2Ma1Pawn_ByPawn[board->R_shi];
//		}
//	}
//
//
//
//	return 16;
//}