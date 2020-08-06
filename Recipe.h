#include <vector>
#include "Ingredients.h"



struct SIngredientQuantity {
	EIngredients mIngredient;
	/*unsigned*/double mQuantity;
	std::string mUnit;
};

class CRecipe {
private:
	std::string mName;
	std::vector<SIngredientQuantity> mIngredientQuantities;

public:
	CRecipe(std::string name, std::vector<SIngredientQuantity> ingredientQuantities);

	std::string ToString();


};