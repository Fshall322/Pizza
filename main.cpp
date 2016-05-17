#include <iostream>

using namespace std;

class Pizza{
private:
    char size;
    int numToppings;
    double price;
    string type;

public:
    void setSize(char);
    char getSize();
    void setNumToppings(int);
    int getNumToppings();
    void setPrice(double);
    double getPrice();
    void setType(string);
    string getType();
    void computePrice();
    void outputDescription();
};

void Pizza :: setSize(char s){
    size = s;
}
char Pizza :: getSize(){
    return size;
}

void Pizza :: setNumToppings(int n){
    numToppings = n;
}
int Pizza :: getNumToppings(){
    return numToppings;
}

void Pizza :: setPrice(double p){
    price = p;
}
double Pizza :: getPrice(){
    return price;
}

void Pizza :: setType(string t){
    type = t;
}
string Pizza :: getType(){
    return type;
}

void Pizza :: computePrice(){
    switch(size){
        case 's': case 'S':
            price = 6.00;
            break;
        case 'm': case 'M':
            price = 8.50;
            break;
        case 'l': case 'L':
            price = 12.00;
            break;
        default:
            cout<<"Invalid size"<< endl;
    }
    price += numToppings * 1.00;
}

void Pizza :: outputDescription(){
    cout<<"Pizza's 'R' Us!"<<endl;
    cout<<"You ordered a ";

    switch(size){
        case 's': case 'S':
            cout<<"small";
            break;
        case 'm': case 'M':
            cout<<"medium";
            break;
        case 'l': case 'L':
            cout<<"large";
            break;
        default:
            cout<<"invalid size";
    }
    cout<<" "<<type<<" pizza with "<<numToppings<< " toppings"<<endl;
    cout<<"Total price $"<<price<<endl;
}

int main(int argc, char** argv) {
    Pizza order1;
    order1.setSize('L');
    order1.setNumToppings(5);
    order1.setType("deep dish");
    order1.computePrice();
    order1.outputDescription();
    return 0;
}