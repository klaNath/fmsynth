#include "fmsynth.h"

int	fmsynth_phonicnumber;

void	fmrise(void){

	fmsynth_phonicnumber = 0;

}

int	fminit(*fmreg){

	if (fmreg->phnum == 0) return 0;

	fmreg = 0;
	fmsynth_phonicnumber -= 1;

	return 1;

}

int	fmstat(void){

	return	fmsynth_phonicnumber;

}

int	fmstart(*fmreg, unsigned short note){

	if (fmreg->phnum == 0)	return -1;

	if (note == 0) return -1;

	/*
	 *ノートに対応するfreqを算出するメソッドを実装する
	 *必要なステータスフラグを定めてセットする
	 *ヘッダーファイルのドキュメントも作る
	 */

	return 0;
}