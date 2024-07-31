// Second Principle of SOLID
// O : Open Close Principle
// Example of onlineStore payment process

#include <iostream>
using namespace std;
class onlineStore{
    public:
    string customerName;
    string productName;
    string address;
    double balance;
    
};
class paymentMethode{
    public:
    int paymentRecive(onlineStore storeDetail);
};

class creditCard : public paymentMethode{
    public:
    int paymentRecive(onlineStore storeDetail){
        std::cout << "customer Using creditCard for payment "<< std::endl;
        std::cout << "customer Order Detail " << std::endl;
        std::cout << "customer Name : " << storeDetail.customerName << std::endl;
        std::cout << "Product Name : " << storeDetail.productName << std::endl;
        std::cout << "customer address : " << storeDetail.address  << std::endl;
        return storeDetail.balance = 500;
    }
};

class payPalAccount : public paymentMethode{
    public:
    int paymentRecive(onlineStore storeDetail){
        std::cout << "customer Using Paypal for payment "<< std::endl;
        std::cout << "customer Order Detail :" << std::endl;
        std::cout << "customer Name : " << storeDetail.customerName << std::endl;
        std::cout << "Product Name : " << storeDetail.productName << std::endl;
        std::cout << "customer address : " << storeDetail.address  << std::endl;
        return storeDetail.balance = 500;
    }
};

int main()
{
    onlineStore objStore;
    objStore.customerName = "Arsalan";
    objStore.productName = "shart";
    objStore.address = "abc";
    
    creditCard objCreaditcard;
    objCreaditcard.paymentRecive(objStore);
    
    objStore.customerName = "Waqar";
    objStore.productName = "T-shart";
    objStore.address = "efg";
    payPalAccount objPaypal;
    objPaypal.paymentRecive(objStore);
    
    return 0;
}