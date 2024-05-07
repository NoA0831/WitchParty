# include "TitleScene.hpp"

TitleScene::TitleScene(const InitData& init)
	: IScene{ init } {}

void TitleScene::update() {

	//新しいゲームを始める画面へ遷移
	if (new_game_button.leftClicked()) {
		
	}
	//セーブデータ一覧を選択、ロードできる画面へ遷移
	if (show_save_datas_button.leftClicked()) {
	
	}
	//ゲームを終了する
	if (exit_button.leftClicked()) {
		System::Exit();
	}
	//クレジット表示画面へ遷移する
	if (show_credits_button.leftClicked()) {
		
	}
	//ヘルプ画面(ゲーム説明)へ遷移する
	if (show_help_button.leftClicked()) {
		
	}
}

void TitleScene::draw() const{

	// 上下の揺れ幅を設定
	constexpr double amplitude = 8.0;

	// 上下に揺れる効果を適用したY座標を計算
	double offsetY = amplitude * Periodic::Sine0_1(3s);

	// ロゴの描画位置を計算し、描画
	FontAsset(U"title")(APP_TITLE).drawAt(300, 100 + offsetY, Palette::Black);
	FontAsset(U"title")(APP_TITLE).drawAt(300 + 2, 100 + offsetY + 2, Palette::Plum);

	new_game_button.draw();
	show_save_datas_button.draw();
	exit_button.draw();
	show_credits_button.draw();
	show_help_button.draw();
}
