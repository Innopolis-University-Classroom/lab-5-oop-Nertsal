//
//  landlord.cpp
//  Landlord
//
//  Created by Gbrigens on 1/11/22.
//

// landlord.cpp
// models the finances for an apartment building
#include "landlord.h" //for class declarations, etc.

void getaLine(string &inStr) // get line of text
{
    char temp[21];
    cin.get(temp, 20, '\n');
    cin.ignore(20, '\n');
    inStr = temp;
}

//--------------------------------------------------------------
char getaChar() // get a character
{
    char ch = cin.get();
    cin.ignore(80, '\n');
    return ch;
}

tenant::tenant(string n, int aNo) : name(n), aptNumber(aNo) {}

tenant::~tenant() {}

int tenant::getAptNumber() { return aptNumber; }

bool operator<(const tenant &tenant1, const tenant &tenant2)
{
    return tenant1.name < tenant2.name;
}

bool operator==(const tenant &tenant1, const tenant &tenant2)
{
    return tenant1.aptNumber == tenant2.aptNumber && tenant1.name == tenant2.name;
}

ostream &operator<<(ostream &ostream1, const tenant &tenant)
{
    ostream1 << tenant.name << " " << tenant.aptNumber;
    return ostream1;
}

bool compareTenants::operator()(tenant *tenant1, tenant *tenant2) const
{
    return *tenant1 < *tenant2;
}

tenantList::~tenantList()
{
    for (auto item : setPtrsTens)
    {
        delete item;
    }
}

int tenantList::getAptNo(string name)
{
    return -1; // TODO
}

void userInterface::interact() {}

userInterface::userInterface() {}

userInterface::~userInterface() {}