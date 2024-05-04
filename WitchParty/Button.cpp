#include "button.hpp"



Button::Button(const Vec2& _center_pos, const Size _size, const String& _text, const String& _font_asset_name,const Color& _text_color, const Color& _background_color, const Color& _border_color, const Color& _mouse_over_text_color,const Color& _mouse_over_background_color,const Color& _mouse_over_border_color,const int& _border_stroke_width,const int& _border_radius_size)
	: center_pos { _center_pos },
	size{ _size },
	text{ _text },
	font_asset_name { _font_asset_name },
	text_color{ _text_color },
	background_color{ _background_color },
	border_color{ _border_color },
	mouse_over_text_color { _mouse_over_text_color },
	mouse_over_background_color { _mouse_over_background_color },
	mouse_over_border_color { _mouse_over_border_color },
	border_stroke_width{ _border_stroke_width },
	border_radius_size { _border_radius_size } {}

void Button::draw() const {

	const RectF rect = { { center_pos.x - size.x / 2, center_pos.y - size.y / 2},size };

	const Color now_text_color = rect.mouseOver() ? mouse_over_text_color : text_color;
	const Color now_border_color = rect.mouseOver() ? mouse_over_border_color : border_color;
	const Color now_background_color = rect.mouseOver() ? mouse_over_background_color : background_color;

	rect.rounded(border_radius_size).draw(now_background_color).drawFrame(border_stroke_width, now_border_color);
	FontAsset(font_asset_name)(text).drawAt(center_pos, now_text_color);
}

bool Button::leftClicked() const {
	return RectF{ { center_pos.x - size.x / 2, center_pos.y - size.y / 2},size }.mouseOver();
}
