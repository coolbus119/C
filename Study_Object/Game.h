#pragma once
// #include "Player.h" ----> Player _player�� �Ⱦ��� �� ���赵 ������ �ʿ� ����.
// Player* _player�� ���� Ŭ���� ������ ���־�� �Ѵ�. 


class Player;
// ���漱��, �÷��̾��� Ŭ������ ���߿� ������ ���̴�. 

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
	//Player _player �ǹ̴� Game class�� ���� �� Player ��ü�� �ݵ�� ��������ٴ� ��.
	// Knight Ȥ�� Archer, Mage�� ���������� ������ �� ����.
	// 
	//Player* _player;
	// _player�� [4-8����Ʈ �ٱ���] -----> ��ü�� [�� ����]�� ����Ǿ��ִ�.
	// _player�� �ּҰ��� ����Ǿ� �ִ�.
};

