#include <iostream>
using namespace std;
class Product
{
private:
    double price;
    int stock;

public:
    string productName;
    string category;
    Product(string name, string cat, double p, int s)
    {
        productName = name;
        category = cat;
        price = p;
        stock = s;
    }
    void setPrice(double p)
    {
        if (p >= 0)
            price = p;
    }
    double getPrice()
    {
        return price;
    }
    void setStock(int s)
    {
        if (s >= 0)
            stock = s;
    }
    int getStock()
    {
        return stock;
    }
    void displaySummary()
    {
        cout << "Product Name: " << productName << endl;
        cout << "Category: " << category << endl;
        cout << "Price: ₹" << price << endl;
        cout << "Stock: " << stock << " units" << endl;
    }
};
int main()
{
    Product p1("Laptop", "Electronics", 55000.0, 20);
    p1.displaySummary();
    p1.setPrice(53000.0);
    p1.setStock(18);
    cout << "\nAfter Update:\n";
    p1.displaySummary();
    return 0;
}
