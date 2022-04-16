#pragma once
// #include "Player.h" ----> Player _player를 안쓰면 이 설계도 가져올 필요 없다.
// Player* _player를 위해 클래스 선언을 해주어야 한다. 


class Player;
// 전방선언, 플레이어라는 클래스가 나중에 등장할 것이다. 

// is - a
// has - a 

class Game
{
public:
	Game();
	~Game();

	void Init();
	void Update();

private:

	//Player _player;
	Player* _player;
	//Player _player 의미는 Game class를 만들 때 Player 객체도 반드시 만들어진다는 것.
	// Knight 혹은 Archer, Mage를 직접적으로 저장할 수 없다.
	// 
	//Player* _player;
	// _player는 [4-8바이트 바구니] -----> 객체는 [힙 영역]에 저장되어있다.
	// _player는 주소값만 저장되어 있다.
};

