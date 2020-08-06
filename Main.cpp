#include "RecipeCatalogue.h"
RecipeCatalogue mCatalogue;


int main()
{
	mCatalogue.AddRecipe("cozonac", { {EIngredients::FLOUR, 100.0, "g"}, {EIngredients::EGG, 3.0, "pcs"} });
	mCatalogue.AddRecipe("briose", { {EIngredients::FLOUR, 250.0, "kg"}, {EIngredients::EGG, 1000.0, "pcs"} });


	//select recipe name
	std::string recipeName;

	std::cin >> recipeName;

	std::cout << mCatalogue.GetRecipeByName(recipeName).ToString();
	return 0;
}