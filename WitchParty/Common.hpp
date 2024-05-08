#pragma once
#include "Charactors.hpp"
#include <Siv3D.hpp>

const String WindowTitle = U"Watch Party!!";
const Size WindowSize{ 600,600 };

const String APP_TITLE = U"Watci Party!!!";
const String FontFilePath = U"misaki_gothic.ttf";

/*
struct CharactorsInfo {
	String display_name;
	String assets_name;
	String img_path;
};
*/

struct AssetsInfo {
	String name;
	String file_path;
};

const Array<AssetsInfo> CHAR_IMG_PATHS {
	{ U"santa",  U"img/charactors/santa.png",},
	{ U"girl-1", U"img/charactors/girl-1.png" },
	{ U"girl-2", U"img/charactors/girl-2.png" },
	{ U"witch-1",U"img/charactors/witch-1.png" },
	{ U"witch-2",U"img/charactors/witch-2.png" },
	{ U"witch-3",U"img/charactors/witch-3.png" }
};
const int CHAR_NUM = 6;
/*
Array<Character> charactors{

}
*/

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
