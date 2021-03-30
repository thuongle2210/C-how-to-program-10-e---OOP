
#include <string>
#include <iostream>
class Invoice{
private:
    std::string partNumber;
    std::string partDescription;
    double price;
    double tax;
    int Quantity;
private:
    void setPartNumber(std::string partNumber){
        this->partNumber = partNumber;
    }
    void setPartDescription(std::string partDescription){
        this->partDescription = partDescription;
    }
    void setPrice(double price){
        this->price = price;
    }
    void setTax(double tax){
        this->tax = tax;
    }
    void setQuantity(int quantity){
        this->Quantity = quantity;
    }
public:
    Invoice(std::string partNumber, std::string partDescription, double price, double tax, int quantity){
        setPartNumber(partNumber);
        setPartDescription(partDescription);
        setPrice(price);
        setTax(tax);
        setQuantity(quantity);
    }
    std::string getPartNumber(){
        return this->partNumber;
    }
    std::string getPartDescription(){
        return this->partDescription;
    }
    double getTax(){
        return this->tax;
    }
    double getPrice(){
        return this->price;
    }
    int getQuantity(){
        return this->Quantity;
    }
    double getInvoiceAmount(){
        return this->getQuantity()*this->getPrice()*(1 - this->getTax());
    }
    void PrintInvoice(){
        std::cout<<"Part Number: "<< this->getPartNumber()<<std::endl;
        std::cout<<"Part Description: "<< this->getPartDescription()<<std::endl;
        std::cout<<"Price: "<< this->getPrice()<<std::endl;
        std::cout<<"Tax: "<< this->getTax()<<std::endl;
        std::cout<<"Quantity: "<< this->getQuantity()<<std::endl;
        std::cout<<"Invoice Amount: "<< this->getInvoiceAmount()<<std::endl;
    }
};