#include <iostream>  //<> CPP ���̺귯���� �ִ� �Ŵ� <> �� �ҷ��´�.
using namespace std;
#include "Game.h" // " " Ŀ�������� ���� ��������� �̷��� �ҷ��´�.
// ������ ���� : TextRPG #4

int main()
{
	Game game;
	game.Init();

	while (true)
	{
		game.Update();
	}


	return 0;
}