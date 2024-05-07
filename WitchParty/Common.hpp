#pragma once
#include <Siv3D.hpp>

const String WindowTitle = U"Watch Party!!";
const Size WindowSize{ 600,600 };

const String AppTitle = U"Watci Party!!!";
const String FontFilePath = U"misaki_gothic.ttf";

enum class State {
	Title,
	GameCreate,
	SaveDataList,
	Game,
	Credits,
	Help
};
struct GameData {

};
using App = SceneManager<State, GameData>;
