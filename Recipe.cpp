#include "Recipe.h"
#include "IngredientUtils.h"

CRecipe::CRecipe(std::string name, std::vector<SIngredientQuantity> ingredientQuantities) {
	mName = name;

	for (unsigned int i = 0; i < ingredientQuantities.size(); i++) {
		mIngredientQuantities.push_back({ ingredientQuantities.at(i).mIngredient,
			ingredientQuantities.at(i).mQuantity, ingredientQuantities.at(i).mUnit });
	}
}

std::string CRecipe::ToString() {
	std::string recipeText = mName + ": \n\n";
	for (unsigned int i = 0; i < mIngredientQuantities.size(); i++) {
		recipeText += " - " + IngredientUtils::GetIngredientName((mIngredientQuantities.at(i).mIngredient)) + ": "
			+ std::to_string(mIngredientQuantities.at(i).mQuantity) + " " + mIngredientQuantities.at(i).mUnit;
	}
	recipeText += "\n";

	return recipeText;
}