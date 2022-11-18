#pragma once
class Developer
{
private:
	char DeveloperID[6];
	char D_Name[50];
	char Contact[10];
	char Email[30];
	char D_Address[50];

public:
	Developer();
	Developer(const char developerid[], const char dname[], const char dcontact[], const char demail[], const char daddress[]);
	void AddApp();
	void DeleteApp();
	void ManageApp();
	void RespondToReviews();
	~Developer();
};

