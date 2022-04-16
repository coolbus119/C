#include <iostream>  //<> CPP 라이브러리에 있는 거는 <> 로 불러온다.
using namespace std;
#include "Game.h" // " " 커스텀으로 만든 헤더파일은 이렇게 불러온다.
// 오늘의 주제 : TextRPG #4

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