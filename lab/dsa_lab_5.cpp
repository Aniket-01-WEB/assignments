// #include <iostream>
// #include <string>
// using namespace std;

// class Player
// {
// private:
//     string name;
//     static int activePlayerCount;

// public:
//     Player(string playerName)
//     {
//         name = playerName;
//         activePlayerCount++;
//         cout << "[LOGIN] " << name << " joined the server." << endl;
//     }

//     ~Player()
//     {
//         activePlayerCount--;
//         cout << "[LOGOUT] " << name << " left the server." << endl;
//     }

//     static int getActivePlayerCount()
//     {
//         return activePlayerCount;
//     }
// };

// int Player::activePlayerCount = 0;

// int main()
// {

//     cout << "--- Lobby UI Initial State ---" << endl;
//     cout << "Active Player Count: " << Player::getActivePlayerCount() << endl
//          << endl;

//     cout << "--- Players Logging In ---" << endl;
//     Player player1("ShadowNinja");
//     Player player2("DragonSlayer");

//     cout << "Current Active Players: " << Player::getActivePlayerCount() << endl
//          << endl;

//     {
//         cout << "--- Temporary Player Session ---" << endl;
//         Player tempPlayer("GuestUser");
//         cout << "Active Players (with Guest): " << Player::getActivePlayerCount() << endl;
//     }

//     cout << "\nActive Players (after Guest logged out): " << Player::getActivePlayerCount() << endl
//          << endl;

//     cout << "--- Game Shutting Down ---" << endl;
//     return 0;
// }
// #include <iostream>
// #include <string>
// #include <iomanip>
// using namespace std;

// class OrderProcessor {
// private:
//     double basePrice;
//     string customerTier; 
//     string region;       

//     double applyDiscounts() {
//         double discountRate = 0.0;

       
//         if (customerTier == "VIP") {
//             discountRate += 0.20;
//         } else if (customerTier == "Gold") {
//             discountRate += 0.10; 
//         } else {
//             discountRate += 0.05; 
//         }

        
//         discountRate += 0.05;

       
//         return basePrice * (1.0 - discountRate);
//     }

   
//     double addRegionalTax(double subtotal) {
//         double taxRate = 0.0;

//         if (region == "EU") {
//             taxRate = 0.20;  
//         } else if (region == "US") {
//             taxRate = 0.08;   
//         } else if (region == "ASIA") {
//             taxRate = 0.05; 
//         } else {
//             taxRate = 0.10;  
//         }

      
//         return subtotal * (1.0 + taxRate);
//     }

// public:
    
//     OrderProcessor(double price, string tier, string reg) 
//         : basePrice(price), customerTier(tier), region(reg) {}

    
//     double calculateFinalPrice() {
      
//         double subtotal = applyDiscounts(); 

     
//         double finalPrice = addRegionalTax(subtotal);

//         return finalPrice;
//     }

    
//     void displayReceipt() {
//         cout << "------------------------------------" << endl;
//         cout << "Base Price    : $" << fixed << setprecision(2) << basePrice << endl;
//         cout << "Customer Tier : " << customerTier << endl;
//         cout << "Region        : " << region << endl;
//         cout << "Final Price   : $" << calculateFinalPrice() << endl;
//         cout << "------------------------------------" << endl << endl;
//     }
// };

// int main() {
    
//     OrderProcessor order1(100.0, "VIP", "EU");
//     order1.displayReceipt();

//     OrderProcessor order2(200.0, "Gold", "US");
//     order2.displayReceipt();

//     OrderProcessor order3(150.0, "Regular", "ASIA");
//     order3.displayReceipt();

//     return 0;
// }
