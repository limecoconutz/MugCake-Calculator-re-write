#pragma once

#include <string>

#include "Ingredients.h"

namespace IngredientUtils {
	std::string GetIngredientName(EIngredients ingredient) {
		return kIngredientName.at(ingredient);
	}
}
