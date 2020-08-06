#include <algorithm>
#include "RecipeCatalogue.h"



void RecipeCatalogue::ReadRecipesFromFile(const char* fileName)
{

};

void RecipeCatalogue:: AddRecipe(const std::string name, std::vector<SIngredientQuantity> ingredientQuantities) {
	CRecipe recipe(name, ingredientQuantities);
	mRecipes.emplace(name, recipe);
}

std::vector<std::string> RecipeCatalogue::GetRecipeList() {
	std::vector<std::string> recipeList;

	std::for_each(mRecipes.begin(), mRecipes.end(),
		[&recipeList](auto& element) {
			std::string recipeName = element.first;
			recipeList.push_back(recipeName);
		});

	return recipeList;
}

