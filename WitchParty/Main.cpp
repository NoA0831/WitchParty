# include "Common.hpp"
# include "TitleScene.hpp"
# include "CreateGameScene.hpp"

void Main()
{
	Window::Resize(WindowSize);
	Window::SetTitle(WindowTitle);

	App manger;
	manger.add<TitleScene>(State::Title);
	manger.add<CreateGameScene>(State::GameCreate);

	manger.init(State::GameCreate);

	FontAsset::Register(U"title", 50, FontFilePath, FontStyle::Bitmap);
	FontAsset::Register(U"standard", 20, FontFilePath, FontStyle::Bitmap);
	FontAsset::Register(U"mini", 15, FontFilePath, FontStyle::Bitmap);

	while (System::Update()) {
		if (not manger.update()) {
			break;
		}
	}
}
