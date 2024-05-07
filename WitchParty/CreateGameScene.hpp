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

	Button prev_character_button{
		{30,575},
		{25,25},
		U"<",
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
	Button next_character_button{
		{30,575},
		{25,25},
		U">",
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
	Button game_start_button{
		{30,575},
		{25,25},
		U"ゲームをはじめる",
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
