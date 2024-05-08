# pragma once
# include "Common.hpp"
# include "Button.hpp"

class CreateGameScene : public App::Scene
{
public:

	CreateGameScene(const InitData& init);

	void update() override;

	void draw() const override;

private:

	int now_select_charactor = 0;
	Button prev_character_button{
		{200,560},
		{25,25},
		U"<",
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
	Button next_character_button{
		{400,560},
		{25,25},
		U">",
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
	Button game_start_button{
		{300,560},
		{140,25},
		U"ゲームをはじめる",
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
	Button back_title_button{
		{40,40},
		{25,25},
		U"←",
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
};
