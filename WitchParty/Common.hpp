#pragma once
#include <Siv3D.hpp>

const String WindowTitle = U"Watch Party!!";
const Size WindowSize{ 600,600 };

const String APP_TITLE = U"Watci Party!!!";
const String FontFilePath = U"misaki_gothic.ttf";


struct CharactorsInfo {
	String display_name;
	String assets_name;
	String img_path;
};

const Array<String> CHAR_IMG_PATHS {
	U"img/charactors/santa.png",
	U"img/charactors/girl-1.png"
	U"img/charactors/girl-2.png"
	U"img/charactors/witch-1.png"
	U"img/charactors/witch-2.png"
	U"img/charactors/witch-3.png"
};

Array<Charactors> charactors{

}

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
