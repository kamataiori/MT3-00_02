#include "Result.h"

Result::Result()
{
}

void Result::Updata()
{
}

void Result::Draw()
{
	MatrixScreenPrint(0, 0, resultAdd);
	MatrixScreenPrint(0, kRowHeight * 5, resultSubtract);
	MatrixScreenPrint(0, kRowHeight * 5 * 2, resultMultiply);
	MatrixScreenPrint(0, kRowHeight * 5 * 3, InverseM1);
	MatrixScreenPrint(0, kRowHeight * 5 * 4, InverseM2);
	MatrixScreenPrint(kColumnWidth * 5, 0, transposeM1);
	MatrixScreenPrint(kColumnWidth * 5, kRowHeight * 5, transposeM2);
	MatrixScreenPrint(kColumnWidth * 5, kRowHeight * 5 * 2, identity);
}
