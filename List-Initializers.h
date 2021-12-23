/*3.14 (C++11 List Initializers) Write a statement that uses list
initialization to initialize an object of class Account which
provides a constructor that receives an string s and a lastName and class.
double balance to initialize the unsigned int , two accountNumber , firstName ,
data members of a new object of the (c++ how to program )*/
#include <string>

class account{
    public:
    account(unsigned int accountNumber,std::string firstName,std::string lastName,int balance):
    accNum(accountNumber){
        fName = firstName ;
        lName = lastName ;
        if (balance>0){
            salary = balance ;
        }
    }

    void setAccNum (unsigned int accountNumber){
        accNum = accountNumber ;
    }
    void setFName (std::string firstName){
        fName = firstName ;
    }
    void setLName (std::string lastName){
        lName = lastName ;
    }
    void setBalance (int balance) {
        if(balance>0){
            salary = balance ;
        }
    }
    unsigned int getAccNum ()const {
        return accNum ;
    }
    std::string getFName()const {
        return fName ;
    }
    std::string getLName()const{
        return lName ;
    }
    int getBalance ()const {
        return salary ;
    }
    std::string displayAccount()const{
        return std::to_string(getAccNum()) +" "+getFName()+" "+getLName()+" "+std::to_string(getBalance()) ;
    } 



    private:
    unsigned int accNum{0};
    std::string fName ;
    std::string lName ;
    int salary {0}; 

};