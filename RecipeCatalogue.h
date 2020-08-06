#include "Recipe.h"



class RecipeCatalogue {
private:
	std::map<std::string, CRecipe> mRecipes;


public:
	void ReadRecipesFromFile(const char* fileName);

	void AddRecipe(const std::string name, std::vector<SIngredientQuantity> ingredientQuantities);

	std::vector<std::string> GetRecipeList();

	inline CRecipe GetRecipeByName(const std::string name) {return mRecipes.at(name);}

};
