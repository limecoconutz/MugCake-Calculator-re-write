#pragma once

#include <string>
#include <map>

enum class EIngredients {
	FLOUR,
	SUGAR,
	BUTTER,
	EGG
};

const std::map<EIngredients, std::string> kIngredientName {
	{EIngredients::FLOUR, "Faina"},
	{EIngredients::SUGAR, "Zahar"},
	{EIngredients::BUTTER, "Unt"},
	{EIngredients::EGG, "Ou(a)"}
};
