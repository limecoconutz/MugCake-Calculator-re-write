#include <iostream>
#include <string>
#include <map>
#pragma once

enum class EIngredients {
	FLOUR,
	SUGAR,
	BUTTER,
	EGG
};

const std::map <EIngredients, std::string> kIngredientName
{
	{EIngredients::FLOUR, "Faina"},
	{EIngredients::SUGAR, "Zahar"},
	{EIngredients::BUTTER, "Unt"},
	{EIngredients::EGG, "Ou(a)"}
};

namespace Ingredient {
	inline std::string GetName(EIngredients Ingredient) {

		return kIngredientName.at(Ingredient);
	}
}

