#include <bits/stdc++.h>

using namespace std;

// Class representing a product
class Product {
public:
    string name;
    double price;

    Product(string name, double price) {
        this->name = name;
        this->price = price;
    }
};

// Class representing a shopping cart
class ShoppingCart {
public:
    vector<Product> items;

    void addItem(Product product) {
        items.push_back(product);
    }

    double calculateTotal() {
        double total = 0.0;
        for (const auto& item : items) {
            total += item.price;
        }
        return total;
    }

    void displayItems() {
        cout << "Shopping Cart:\n";
        for (const auto& item : items) {
            cout << item.name << " - $" << item.price << endl;
        }
    }
};

// Main function
int main() {
    // Creating products
    Product p1("Keyboard", 19.99);
    Product p2("Mouse", 9.99);
    Product p3("Headphones", 49.99);

    // Creating a shopping cart
    ShoppingCart cart;

    // Adding items to the cart
    cart.addItem(p1);
    cart.addItem(p2);
    cart.addItem(p3);

    // Displaying the items in the cart
    cart.displayItems();

    // Calculating the total price
    double total = cart.calculateTotal();
    cout << "Total Price: $" << total << endl;

    return 0;
}
