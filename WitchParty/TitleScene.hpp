# pragma once
# include "Common.hpp"
# include "Button.hpp"

class TitleScene : public App::Scene
{
public:

	TitleScene(const InitData& init);

	void update() override;

	void draw() const override;

private:

	Button new_game_button{
		{300,360},
		{130,50},
		U"はじめから",
		U"standard",
		Palette::White,
		Palette::Black,
		Palette::White,
		2
	};
	Button show_save_datas_button{
		{300,430},
		{130,50},
		U"つづきから",
		U"standard",
		Palette::White,
		Palette::Black,
		Palette::White,
		2
	};
	Button exit_button{
		{300,500},
		{130,50},
		U"終了する",
		U"standard",
		Palette::White,
		Palette::Black,
		Palette::White,
		2
	};
};
