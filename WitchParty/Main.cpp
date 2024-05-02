# include "Common.hpp"
# include "TitleScene.hpp"

void Main()
{
	Window::Resize(WindowSize);
	Window::SetTitle(WindowTitle);

	App manger;
	manger.add<TitleScene>(State::Title);

	FontAsset::Register(U"title", 50, FontFilePath, FontStyle::Bitmap);
	FontAsset::Register(U"defo", 30, FontFilePath, FontStyle::Bitmap);

	while (System::Update()) {
		if (not manger.update()) {
			break;
		}
	}
}
