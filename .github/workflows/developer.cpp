#include "Developer.h"
#include <iostream>
#include <cstring>
using namespace std;

Developer::Developer() {
	strcpy(DeveloperID, "");
	strcpy(D_Name, "");
	strcpy(Contact, "");
	strcpy(Email, "");
	strcpy(D_Address, "");
}

Developer::Developer(char const developerid[], char const dname[], char const dcontact[], char const demail[], char const daddress[]) {
	strcpy(DeveloperID, developerid);
	strcpy(D_Name, dname);
	strcpy(Contact, dcontact);
	strcpy(Email, demail);
	strcpy(D_Address, daddress);
}

void Developer::AddApp() {

}

void Developer::DeleteApp() {

}

void Developer::ManageApp() {

}

void Developer::RespondToReviews() {

}

Developer::~Developer() {
	cout << "Delete App" << endl;
}
