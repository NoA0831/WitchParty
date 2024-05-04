#pragma once
#include <Siv3D.hpp>

class Button {

private:
	Vec2 center_pos;
	Size size;
	int border_stroke_width;
	String text;
	String font_asset_name;
	Color text_color;
	Color background_color;
	Color border_color;
	int border_radius_size;

public:

	Button(
		const Vec2& _center_pos,
		const Size _size,
		const String& _text,
		const String& _font_asset_name,
		const Color& _text_color,
		const Color& _background_color,
		const Color& _border_color,
		const int& _border_stroke_width,
		const int& _border_radius_size
	);

	void draw() const;

	bool leftClicked() const;
};
