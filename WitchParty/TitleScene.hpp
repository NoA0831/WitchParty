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
		{300,320},
		{130,50},
		U"はじめから",
		U"standard",
		Palette::White,
		Palette::Black,
		Palette::White,
		Palette::Black,
		Palette::White,
		Palette::Black,
		2,
		4
	};
	Button show_save_datas_button{
		{300,390},
		{130,50},
		U"つづきから",
		U"standard",
		Palette::White,
		Palette::Black,
		Palette::White,
		Palette::Black,
		Palette::White,
		Palette::Black,
		2,
		2
	};
	Button exit_button{
		{300,460},
		{130,50},
		U"終了する",
		U"standard",
		Palette::White,
		Palette::Black,
		Palette::White,
		Palette::Black,
		Palette::White,
		Palette::Black,
		2,
		4
	};
	Button show_credits_button{
		{95,575},
		{80,25},
		U"クレジット",
		U"mini",
		Palette::White,
		Palette::Black,
		Palette::White,
		Palette::Black,
		Palette::White,
		Palette::Black,
		2,
		2
	};
	Button show_help_button{
		{30,575},
		{25,25},
		U"?",
		U"standard",
		Palette::White,
		Palette::Black,
		Palette::White,
		Palette::Black,
		Palette::White,
		Palette::Black,
		2,
		2
	};
};
