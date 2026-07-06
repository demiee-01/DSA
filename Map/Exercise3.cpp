#include <iostream>
#include<map>
using namespace std;


// task1 : Decide with map type to use and declar it
map<string, string> contacts;

// task 2 : Functoin do Add contact
void addContact(map<string, string> &contacts, string name , string phone){
    contacts[name] = phone;
}

// Function  do Delete contect
void deletedContact(map<string, string> &contacts, string name){
    auto it = contacts.find(name);

    if( it != contacts.end()){
        contacts.erase(it);
        cout << name << " Deleted successfully.\n";
    }else{
        cout<< "Contact not found.\n";
    }
}

//Function do Search Contact 
void searchContact(map<string , string > &contacts , string name) {
    auto it = contacts.find(name);
    
    if( it != contacts.end()){
        cout<< "Name : " << it->first << endl;
        cout<< "Phone : " << it->second << endl;
    }else{
        cout<< "Contact not found.\n";
    }
}

// Function Display all Contacts
void displayContact(map<string , string> &contacts){
    cout<<"\n<>========= Contacts list =========<>\n";

    for(auto contact : contacts){
        cout<< contact.first <<" : "<<contact.second<<endl;
    }
    cout<<"======================================="<<endl;
}


// task 3
int main() {

    //1. add contact
    addContact(contacts,"Dara","012345678");
    addContact(contacts,"Bopha","098448244");
    addContact(contacts,"Sokha","0103456678");
    displayContact(contacts);


    //2. Search for Dara
    cout<< "Searching Dara...\n";
    searchContact(contacts, "Dara");
    


    //3. Update Bopha phone number
    cout<< "\nUpdate Bopha..\n";
    addContact(contacts, "Bopha","097998234");
    

    
    // check update
    searchContact(contacts, "Bopha");


    //4.Delet Sokha
    cout<< "\n Deleting Sokha...\n";
    deletedContact(contacts, "Sokha");


    // Display all contacts
    displayContact(contacts);

    return 0;
}