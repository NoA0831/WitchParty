# include "CreateGameScene.hpp"

CreateGameScene::CreateGameScene(const InitData& init)
	: IScene{ init } {}

void CreateGameScene::update() {

	if (prev_character_button.leftClicked()) {
		now_select_charactor = (now_select_charactor - 1 + CHAR_IMG_PATHS.size()) % CHAR_IMG_PATHS.size();
	}
	if (next_character_button.leftClicked()) {
		now_select_charactor = (now_select_charactor + 1) % CHAR_IMG_PATHS.size();
	}
}

void CreateGameScene::draw() const {

	prev_character_button.draw();
	next_character_button.draw();
	game_start_button.draw();
	//back_title_button.draw();
	ClearPrint();
	Print << now_select_charactor;

	String assets_name = CHAR_IMG_PATHS[ now_select_charactor ].name;
	TextureAsset(assets_name)( 0, 0, 32, 32).scaled(3.0).drawAt(300, 300);

}
