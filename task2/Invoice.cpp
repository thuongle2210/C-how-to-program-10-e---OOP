#include "Invoice.h"
using namespace std;
int main(){
    //define invoice
    Invoice invoice("P12","Electric",100,0.1,50);
    //printing information of invoice
    invoice.PrintInvoice();
}