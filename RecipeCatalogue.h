#pragma once

#include "Recipe.h"

class RecipeCatalogue {
public:
	void ReadRecipesFromFile(const char* fileName);

	void AddRecipe(const std::string name, std::vector<SIngredientQuantity> ingredientQuantities);
	std::vector<std::string> GetRecipeList();
	CRecipe GetRecipeByName(const std::string name) { return mRecipes.at(name); }

private:
	std::map<std::string, CRecipe> mRecipes;

};
