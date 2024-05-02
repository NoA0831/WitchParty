# include "TitleScene.hpp"

TitleScene::TitleScene(const InitData& init)
	: IScene{ init } {}

void TitleScene::update() {

}

void TitleScene::draw() const{

	// 上下の揺れ幅を設定
	constexpr double amplitude = 8.0;

	// 上下に揺れる効果を適用したY座標を計算
	double offsetY = amplitude * Periodic::Sine0_1(3s);

	// ロゴの描画位置を計算し、描画
	FontAsset(U"title")(AppTitle).drawAt(300, 100 + offsetY, Palette::Black);
	FontAsset(U"title")(AppTitle).drawAt(300 + 2, 100 + offsetY + 2, Palette::Plum);
}
