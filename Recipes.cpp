#include <iostream>
#include <string>
#include <sstream>
using namespace std;
// main client --------------------------------------------------------
int main()
{
   // food #1 constants
   const string FOOD_1_NAME = "avocado";
   const  int FOOD_1_CALORIES_P100G = 160;        // in calories
   const  double FOOD_1_SOL_FIBER_P100G = 1.75;   // in grams
   const  double FOOD_1_FAT_P100G = 15;           // in grams
   const  double FOOD_1_SUGAR_P100G = 0.7;        // in grams
                                                  // food #2 constants
   const  string FOOD_2_NAME = "tomato";
   const  int FOOD_2_CALORIES_P100G = 18;         // in calories
   const  double FOOD_2_SOL_FIBER_P100G = .12;    // in grams
   const  double FOOD_2_FAT_P100G = 18;           // in calories
   const  double FOOD_2_SUGAR_P100G = 2.63;       // in grams
                                                  // food #3 constants
   const  string FOOD_3_NAME = "buffalo mozzarella";
   const  int FOOD_3_CALORIES_P100G = 282;        // in calories
   const  double FOOD_3_SOL_FIBER_P100G = 0.;     // in grams
   const  double FOOD_3_FAT_P100G = 7;            // in grams
   const  double FOOD_3_SUGAR_P100G = 0.2;        // in grams
                                                  // food #4 constants
   const  string FOOD_4_NAME = "egg";
   const  int FOOD_4_CALORIES_P100G = 85;         // in calories
   const  double FOOD_4_SOL_FIBER_P100G = 0;      // in grams
   const  double FOOD_4_FAT_P100G = 147;          // in calories
   const  double FOOD_4_SUGAR_P100G = 0.3;        // in grams
                                                  // food #5 constants
   const  string FOOD_5_NAME = "pepperoni";
   const  int FOOD_5_CALORIES_P100G = 276;        // in calories
   const  double FOOD_5_SOL_FIBER_P100G = 0;      // in grams
   const  double FOOD_5_FAT_P100G = 2.22;         // in grams
   const  double FOOD_5_SUGAR_P100G = 0.04;       // in grams

   string recipeName, userInputStr, num_servings;
   int userInputInt;
   double totalSolFiber, totalCals, totalFat, totalSugar;
   // initialize accumulator variables
   totalSolFiber  = 0.;
   totalCals =  0;
   totalFat = 0;
   totalSugar = 0;
   // print menu
   cout << "---------- List of Possible Ingredients ---------" << endl;
   cout << "  Food #1: " << FOOD_1_NAME << endl;
   cout << "  Food #2: " << FOOD_2_NAME << endl;
   cout << "  Food #3: " << FOOD_3_NAME << endl;
   cout << "  Food #4: " << FOOD_4_NAME << endl;
   cout << "  Food #5: " << FOOD_5_NAME << endl << endl;
   // name of recipe
   cout << "What are you calling this recipe? ";
   getline(cin, recipeName);
   cout << "# servings? ";
   getline(cin, num_servings);
   // food #1 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_1_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;
   if (userInputInt < 0 || userInputInt > 1000){
      cout << "Wrong input! Please try again!";
      return 0;
   }
   else{
      // update accumulators
      totalCals += userInputInt * (FOOD_1_CALORIES_P100G/100.);
      totalSolFiber  += userInputInt * (FOOD_1_SOL_FIBER_P100G/100.);
      totalFat += userInputInt * (FOOD_1_FAT_P100G/100.);
      totalSugar += userInputInt * (FOOD_1_SUGAR_P100G/100.);
   }
   // food #2 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_2_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;
   if (userInputInt < 0 || userInputInt > 1000){
      cout << "Wrong input! Please try again!";
      return 0;
   }
   else{
      // update accumulators
      totalCals += userInputInt * (FOOD_2_CALORIES_P100G/100.);
      totalSolFiber  += userInputInt * (FOOD_2_SOL_FIBER_P100G/100.);
      totalFat += userInputInt * (FOOD_2_FAT_P100G/100.);
      totalSugar += userInputInt * (FOOD_2_SUGAR_P100G/100.);
   }
   // food #3 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_3_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;
   if (userInputInt < 0 || userInputInt > 1000){
      cout << "Wrong input! Please try again!";
      return 0;
   }
   else{
      // update accumulators
      totalCals += userInputInt * (FOOD_3_CALORIES_P100G/100.);
      totalSolFiber  += userInputInt * (FOOD_3_SOL_FIBER_P100G/100.);
      totalFat += userInputInt * (FOOD_3_FAT_P100G/100.);
      totalSugar += userInputInt * (FOOD_3_SUGAR_P100G/100.);
   }
   // food #4 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_4_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;
   if (userInputInt < 0 || userInputInt > 1000){
      cout << "Wrong input! Please try again!";
      return 0;
   }
   else{
      // update accumulators
      totalCals += userInputInt * (FOOD_4_CALORIES_P100G/100.);
      totalSolFiber  += userInputInt * (FOOD_4_SOL_FIBER_P100G/100.);
      totalFat += userInputInt * (FOOD_4_FAT_P100G/100.);
      totalSugar += userInputInt * (FOOD_4_SUGAR_P100G/100.);
   }
   // food #5 ---------------------------------------------------------
   cout << "How many grams of " << FOOD_5_NAME << "? ";
   getline(cin, userInputStr);
   istringstream(userInputStr) >> userInputInt;
   if (userInputInt < 0 || userInputInt > 1000){
      cout << "Wrong input! Please try again!";
      return 0;
   }
   else{
      // update accumulators
      totalCals += userInputInt * (FOOD_5_CALORIES_P100G/100.);
      totalSolFiber  += userInputInt * (FOOD_5_SOL_FIBER_P100G/100.);
      totalFat += userInputInt * (FOOD_5_FAT_P100G/100.);
      totalSugar += userInputInt * (FOOD_5_SUGAR_P100G/100.);
   }
   // report results --------------------------------------------------
   cout << "---------- List of Possible Ingredients ---------" << endl;
   cout << "Food #1: avocado" << endl;
   cout << "Food #2: tomato" << endl;
   cout << "Food #3: buffalo mozzarella" << endl;
   cout << "Food #4: egg" << endl;
   cout << "Food #5: pepperoni" << endl;
   cout << "\nNutrition for " << recipeName << "------------" << endl;
   cout << "  Calories: " << totalCals << endl;
   cout << "  Soluble Fiber: " << totalSolFiber << endl;
   cout << "  Fat: " << totalFat << endl;
   cout << "  Sugar: " << totalSugar << endl;
   return 0;
}
/*-------------------------- run #1 -----------------------

 ---------- List of Possible Ingredients ---------
 Food #1: avocado
 Food #2: tomato
 Food #3: buffalo mozzarella
 Food #4: egg
 Food #5: pepperoni

 What are you calling this recipe? Recipe one
 # servings? 1
 How many grams of avocado? 200
 How many grams of tomato? 350
 How many grams of buffalo mozzarella? 0
 How many grams of egg? 0
 How many grams of pepperoni? 23
 ---------- List of Possible Ingredients ---------
 Food #1: avocado
 Food #2: tomato
 Food #3: buffalo mozzarella
 Food #4: egg
 Food #5: pepperoni

 Nutrition for Recipe one------------
 Calories: 446.48
 Soluble Fiber: 3.92
 Fat: 93.5106
 Sugar: 10.6142
 Program ended with exit code: 0

 -------------------------- run #2 -------------------------

 ---------- List of Possible Ingredients ---------
 Food #1: avocado
 Food #2: tomato
 Food #3: buffalo mozzarella
 Food #4: egg
 Food #5: pepperoni

 What are you calling this recipe? Recipe2
 # servings? 2
 How many grams of avocado? 0
 How many grams of tomato? 50000
 Wrong input! Please try again!Program ended with exit code: 0
 -----------------------------------------------------------
 -------------------------- run #3 -------------------------

 ---------- List of Possible Ingredients ---------
 Food #1: avocado
 Food #2: tomato
 Food #3: buffalo mozzarella
 Food #4: egg
 Food #5: pepperoni

 What are you calling this recipe? Recipe3
 # servings? 1
 How many grams of avocado? 22
 How many grams of tomato? -1
 Wrong input! Please try again!Program ended with exit code: 0
 -------------------------- run #4 -------------------------

 ---------- List of Possible Ingredients ---------
 Food #1: avocado
 Food #2: tomato
 Food #3: buffalo mozzarella
 Food #4: egg
 Food #5: pepperoni

 What are you calling this recipe? Recipe4
 # servings? 1
 How many grams of avocado? 0
 How many grams of tomato? 0
 How many grams of buffalo mozzarella? 0
 How many grams of egg? 0
 How many grams of pepperoni? 0
 ---------- List of Possible Ingredients ---------
 Food #1: avocado
 Food #2: tomato
 Food #3: buffalo mozzarella
 Food #4: egg
 Food #5: pepperoni

 Nutrition for Recipe4------------
 Calories: 0
 Soluble Fiber: 0
 Fat: 0
 Sugar: 0
 Program ended with exit code: 0
 -------------------------- run #5 -------------------------

 ---------- List of Possible Ingredients ---------
 Food #1: avocado
 Food #2: tomato
 Food #3: buffalo mozzarella
 Food #4: egg
 Food #5: pepperoni

 What are you calling this recipe? Recipe5
 # servings? 31
 How many grams of avocado? 2
 How many grams of tomato? 24
 How many grams of buffalo mozzarella? 67890
 Wrong input! Please try again!Program ended with exit code: 0
 ------------------------------------------------------------*/

