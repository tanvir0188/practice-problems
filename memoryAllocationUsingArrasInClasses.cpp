#include<iostream>
using namespace std;

class shop{
    int itemId[100];
    int ItemPrice[100];
    int counter=0;
    public:
        // void initCounter(void){
        //     counter = 0;
        // }
        void setPrice(void);
        void displayPrice(void);
};


int main(){
    shop alimStore;
    
    // alimStore.initCounter();
    alimStore.setPrice();
    alimStore.setPrice();
    alimStore.setPrice();
    alimStore.setPrice();
    alimStore.displayPrice();
    
}

void shop::setPrice(void)
{
    cout<<"Enter the Id of your Item: ";
    cin>>itemId[counter];
    cout<<"Enter the price: ";
    cin>>ItemPrice[counter];
    counter ++;
}

void shop::displayPrice(void)
{   
    for (int i = 0; i < counter; i++)
    {
        cout<<"The price of itemID "<< itemId[i]<<" is "<<ItemPrice[i]<< endl;
    }
    
    

}
