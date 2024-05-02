#include "button.hpp"



Button::Button(const Vec2& _center_pos, const Size _size, const String& _text, const String& _font_asset_name,const Color& _text_color, const Color& _background_color, const Color& _border_color, const int& _border_stroke_width)
	: center_pos { _center_pos },
	size{ _size },
	text{ _text },
	font_asset_name { _font_asset_name },
	text_color{ _text_color },
	background_color{ _background_color },
	border_color{ _border_color },
	border_stroke_width{ _border_stroke_width } {}

void Button::draw() const {

	RectF{{ center_pos.x - size.x / 2, center_pos.y - size.y / 2},size }.draw(background_color).drawFrame(border_stroke_width,border_color);
	FontAsset(font_asset_name)(text).drawAt(center_pos,text_color);
}

bool Button::leftClicked() const {
	return true;
}
