#pragma once
#include"Scene.h"
#include"../World/World.h"

//���\�[�X�ǂݍ��ݐ�p�V�[��
class GamePlayScene :public Scene {
public:
	GamePlayScene();

	void start()override;
	void update(float deltaTime) override;
	void draw()const override;
	void end()override;

private:
	World world_;
};