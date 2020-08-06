#pragma once

#include <vector>

#include "Ingredients.h"

struct SIngredientQuantity {
	EIngredients mIngredient;
	double mQuantity;
	std::string mUnit;
};

class CRecipe {
public:
	CRecipe(std::string name, std::vector<SIngredientQuantity> ingredientQuantities);
	
	std::string ToString();

private:
	std::string mName;
	std::vector<SIngredientQuantity> mIngredientQuantities;

};