#include "stdafx.h"
#include "TrustyBank.h"
#include "ui_TrustyBank.h"
#include "Client.h"
#include <QMessageBox>
#include <QRegularExpression>
#include <QRegularExpressionValidator>
#include <QFile>
#include <QTextStream>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QRandomGenerator>
#include <QTableWidgetItem>

TrustyBank::TrustyBank(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui::TrustyBankClass)
    , clientsGenerated(false)
{
    ui->setupUi(this);
    setupTabs("Login");
    loadUsers();

    connect(ui->pushB3_remittanceInfo, &QPushButton::clicked, this, &TrustyBank::pushB3_remittanceInfo_clicked);
    connect(ui->pushC2__4_sSNInfo, &QPushButton::clicked, this, &TrustyBank::pushC2__4_sSNInfo_clicked);
    connect(ui->pushC2__4_dateOfBirthInfo, &QPushButton::clicked, this, &TrustyBank::pushC2__4_dateOfBirthInfo_clicked);
    connect(ui->pushB1_adviceInfo, &QPushButton::clicked, this, &TrustyBank::pushB1_adviceInfo_clicked);

    ui->lineEditA2_password->setEchoMode(QLineEdit::Password);
    ui->lineEditA2_confirmPassword->setEchoMode(QLineEdit::Password);
    ui->lineEditA1_loginPassword->setEchoMode(QLineEdit::Password);
}

TrustyBank::~TrustyBank() = default;

bool TrustyBank::validateInput(const QString& input, const QString& type)
{
    QRegularExpression pattern;

    if (type == "firstName" || type == "lastName")
    {
        pattern.setPattern("^[A-Z][a-z]*$");
    }
    else if (type == "lastNameWithHyphen")
    {
        pattern.setPattern("^[A-Z][a-z]*(-[A-Z][a-z]*)?$");
    }
    else if (type == "ssn")
    {
        pattern.setPattern("^\\d{3}-\\d{2}-\\d{4}$");
    }
    else if (type == "phoneNumber")
    {
        pattern.setPattern("^\\d{7}$");
    }
    else if (type == "dob")
    {
        pattern.setPattern("^\\d{2}/\\d{2}/\\d{4}$");
    }
    else if (type == "address")
    {
        pattern.setPattern("^\\d+ [A-Z][a-z]*( [A-Z][a-z]*)*, [A-Z][a-z]*( [A-Z][a-z]*)*, (AL|AK|AZ|AR|CA|CO|CT|DE|FL|GA|HI|ID|IL|IN|IA|KS|KY|LA|ME|MD|MA|MI|MN|MS|MO|MT|NE|NV|NH|NJ|NM|NY|NC|ND|OH|OK|OR|PA|RI|SC|SD|TN|TX|UT|VT|VA|WA|WV|WI|WY|AS|DC|FM|GU|MH|MP|PW|PR|VI) \\d{5}(-\\d{4})?$");
    }
    else if (type == "accountNumber")
    {
        pattern.setPattern("^\\d{12}$");
    }
    else if (type == "amount")
    {
        pattern.setPattern("^\\d{1,4}(\\.\\d{2})?$");
    }

    return pattern.match(input).hasMatch();
}

void TrustyBank::loadUsers()
{
    QFile file("users.json");
    if (file.open(QIODevice::ReadOnly))
    {
        QByteArray data = file.readAll();
        file.close();
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonArray userArray = doc.array();

        for (const QJsonValue& value : userArray)
        {
            QJsonObject obj = value.toObject();
            QString username = obj["username"].toString();
            QString password = obj["password"].toString();

            QJsonObject cashObject = obj["cash"].toObject();
            QMap<QString, int> cash;
            for (auto it = cashObject.begin(); it != cashObject.end(); ++it)
            {
                cash[it.key()] = it.value().toInt();
            }

            users[username] = password;
            userCash[username] = cash;
        }
    }
}

void TrustyBank::setupTabs(const QString& level)
{
    if (level == "Login")
    {
        ui->trustyBankInterface->clear();
        ui->trustyBankInterface->addTab(ui->A1Login, "Login");
    }
    else if (level == "Registration")
    {
        ui->trustyBankInterface->clear();
        ui->trustyBankInterface->addTab(ui->A2Registration, "Registration");
    }
    else if (level == "Main")
    {
        ui->trustyBankInterface->clear();
        ui->trustyBankInterface->addTab(ui->B1ListOfClients, "List of Clients");
        ui->trustyBankInterface->addTab(ui->B2__1NewClient, "New Client");
        ui->trustyBankInterface->addTab(ui->B3TreasuryMenagement, "Treasury Management");
        ui->trustyBankInterface->addTab(ui->B4Logout, "Logout");
    }
    else if (level == "New Account")
    {
        ui->trustyBankInterface->clear();
        ui->trustyBankInterface->addTab(ui->B2__2NewAccount, "New Account");
    }
    else if (level == "Cash Remittance")
    {
        ui->trustyBankInterface->clear();
        ui->trustyBankInterface->addTab(ui->B3__2CashRemittance, "Cash Remittance");
    }
    else if (level == "Cashier Tally")
    {
        ui->trustyBankInterface->clear();
        ui->trustyBankInterface->addTab(ui->B4__2CashierTally, "Cashier Tally");
    }
    else if (level == "Client View")
    {
        ui->trustyBankInterface->clear();
        ui->trustyBankInterface->addTab(ui->C1ClientView, "Client View");
    }
    else if (level == "Deposit")
    {
        ui->trustyBankInterface->clear();
        ui->trustyBankInterface->addTab(ui->C2__1Deposit, "Deposit");
    }
    else if (level == "Withdrawal")
    {
        ui->trustyBankInterface->clear();
        ui->trustyBankInterface->addTab(ui->C2__2Withdrawal, "Withdrawal");
    }
    else if (level == "Transfer")
    {
        ui->trustyBankInterface->clear();
        ui->trustyBankInterface->addTab(ui->C2__3Transfer, "Transfer");
    }
    else if (level == "Client Data Editing")
    {
        ui->trustyBankInterface->clear();
        ui->trustyBankInterface->addTab(ui->C2__4ClientDataEditing, "Client Data Editing");
    }
}

//******************************************************** A1 Login ***********************************************************************************************************************
void TrustyBank::resetLogin()
{
    ui->lineEditA1_loginUsername->clear();
    ui->lineEditA1_loginPassword->clear();
}

void TrustyBank::generateClients()
{
    if (clientsGenerated)
    {
        return;
    }

    QStringList femaleNames =
    {
        "Olivia", "Emma", "Ava", "Sophia", "Isabella", "Mia", "Amelia", "Harper", "Evelyn", "Abigail", "Emily", "Ella", "Elizabeth", "Camila", "Luna", "Sofia", "Avery", "Mila", "Aria", 
        "Scarlett", "Penelope", "Layla", "Chloe", "Victoria", "Madison", "Eleanor", "Grace", "Nora", "Riley", "Zoey", "Hannah", "Hazel", "Lily", "Ellie", "Violet", "Lillian", "Stella", 
        "Aurora", "Natalie", "Emilia", "Everly", "Leah", "Aubrey", "Willow", "Addison", "Lucy", "Audrey", "Bella", "Nova", "Brooklyn", "Paisley", "Savannah", "Claire", "Skylar", "Isla", 
        "Genesis", "Naomi", "Elena", "Caroline", "Eliana", "Anna", "Maya", "Valentina", "Ruby", "Kennedy", "Ivy", "Ariana", "Aaliyah", "Cora", "Madelyn", "Alice", "Kinsley", "Hailey", 
        "Gabriella", "Allison", "Gianna", "Serenity", "Samantha", "Sarah", "Autumn", "Quinn", "Eva", "Piper", "Sophie", "Sadie", "Delilah", "Josephine", "Nevaeh", "Adeline", "Arya", 
        "Athena", "Peyton", "Everleigh", "Clara", "Daisy", "Rylee", "Hadley"
    };

    QStringList maleNames =
    {
        "Liam", "Noah", "Oliver", "Elijah", "James", "William", "Benjamin", "Lucas", "Henry", "Alexander", "Mason", "Michael", "Ethan", "Daniel", "Jacob", "Logan", "Jackson", "Levi", 
        "Sebastian", "Mateo", "Jack", "Owen", "Theodore", "Aiden", "Samuel", "Joseph", "John", "David", "Wyatt", "Matthew", "Luke", "Asher", "Carter", "Julian", "Grayson", "Leo", 
        "Jayden", "Gabriel", "Isaac", "Lincoln", "Anthony", "Hudson", "Dylan", "Ezra", "Thomas", "Charles", "Christopher", "Jaxon", "Maverick", "Josiah", "Isaiah", "Andrew", "Elias", 
        "Joshua", "Nathan", "Caleb", "Ryan", "Adrian", "Miles", "Eli", "Nolan", "Christian", "Aaron", "Cameron", "Ezekiel", "Colton", "Luca", "Landon", "Hunter", "Jonathan", "Santiago", 
        "Axel", "Easton", "Cooper", "Jeremiah", "Angel", "Roman", "Connor", "Jameson", "Robert", "Greyson", "Jordan", "Ian", "Carson", "Jaxson", "Leonardo", "Nicholas", "Dominic", 
        "Austin", "Everett", "Brooks", "Xavier", "Kai", "Jose", "Parker", "Adam", "Jace", "Wesley", "Kayden", "Silas"
    };

    QStringList lastNames =
    {
        "Smith", "Johnson", "Williams", "Brown", "Jones", "Garcia", "Miller", "Davis", "Rodriguez", "Martinez", "Hernandez", "Lopez", "Gonzalez", "Wilson", "Anderson", "Thomas", "Taylor",
        "Moore", "Jackson", "Martin", "Lee", "Perez", "Thompson", "White", "Harris", "Sanchez", "Clark", "Ramirez", "Lewis", "Robinson", "Walker", "Young", "Allen", "King", "Wright", 
        "Scott", "Torres", "Nguyen", "Hill", "Flores", "Green", "Adams", "Nelson", "Baker", "Hall", "Rivera", "Campbell", "Mitchell", "Carter", "Roberts", "Gomez", "Phillips", "Evans", 
        "Turner", "Diaz", "Parker", "Cruz", "Edwards", "Collins", "Reyes", "Stewart", "Morris", "Morales", "Murphy", "Cook", "Rogers", "Gutierrez", "Ortiz", "Morgan", "Cooper", 
        "Peterson", "Bailey", "Reed", "Kelly", "Howard", "Ramos", "Kim", "Cox", "Ward", "Richardson", "Watson", "Brooks", "Chavez", "Wood", "James", "Bennett", "Gray", "Mendoza", "Ruiz",
        "Hughes", "Price", "Alvarez", "Castillo", "Sanders", "Patel", "Myers", "Long", "Ross", "Foster", "Jimenez"
    };

    QStringList streetNames =
    {
        "Sunset Boulevard", "Hollywood Boulevard", "Wilshire Boulevard", "Melrose Avenue", "Rodeo Drive", "Santa Monica Boulevard", "Ventura Boulevard", "Figueroa Street", "Sepulveda Boulevard",
        "La Brea Avenue", "Vermont Avenue", "Western Avenue", "Fairfax Avenue", "Beverly Boulevard", "Pico Boulevard", "Olympic Boulevard", "La Cienega Boulevard","Mulholland Drive",
        "Sunset Strip", "Spring Street", "Broadway", "Main Street", "Hill Street", "Grand Avenue", "Olive Street", "Hope Street", "Flower Street", "Alameda Street", "San Pedro Street",
        "Washington Boulevard", "Jefferson Boulevard", "Exposition Boulevard", "Adams Boulevard", "Crenshaw Boulevard", "Century Boulevard", "Slauson Avenue", "Florence Avenue",
        "Manchester Avenue", "Vernon Avenue", "1st Street", "2nd Street", "3rd Street", "4th Street", "5th Street", "6th Street", "7th Street", "8th Street", "9th Street", "10th Street",
        "Alameda Street", "Alvarado Street", "Hillhurst Avenue", "Glendale Boulevard", "Hyperion Avenue", "Riverside Drive", "Fletcher Drive", "Eagle Rock Boulevard", "York Boulevard",
        "Colorado Boulevard", "Sunset Plaza Drive", "Benedict Canyon Drive", "Coldwater Canyon Drive", "Laurel Canyon Boulevard", "Nichols Canyon Road", "Doheny Drive", "San Vicente Boulevard",
        "Barrington Avenue", "Bundy Drive", "Sawtelle Boulevard", "Overland Avenue", "Robertson Boulevard", "Motor Avenue", "Beverwil Drive", "La Tijera Boulevard", "Aviation Boulevard",
        "Lincoln Boulevard", "Abbot Kinney Boulevard", "Washington Boulevard", "Grand Canal Court", "Ocean Front Walk", "Pacific Avenue", "Speedway", "Rose Avenue", "Marine Street",
        "Admiralty Way", "Mindanao Way", "Fiji Way", "Palos Verdes Drive North", "Palos Verdes Drive South", "Hawthorne Boulevard", "Western Avenue", "Normandie Avenue", "Vermont Avenue",
        "Hoover Street", "Figueroa Street", "Flower Street", "Grand Avenue", "Hope Street", "Olive Street", "Hill Street"
    };

    QString phoneNumberPrefix = "+1 213";
    int currentYear = QDate::currentDate().year();

    for (int i = 0; i < 100; ++i)
    {
        QString firstName;
        if (i % 2 == 0)
        {
            firstName = femaleNames.at(QRandomGenerator::global()->bounded(femaleNames.size()));
        }
        else
        {
            firstName = maleNames.at(QRandomGenerator::global()->bounded(maleNames.size()));
        }

        QString lastName = lastNames.at(QRandomGenerator::global()->bounded(lastNames.size()));
        QString phoneNumber = phoneNumberPrefix + QString::number(QRandomGenerator::global()->bounded(1000000, 9999999));
        QDate dateOfBirth = QDate::fromJulianDay(QRandomGenerator::global()->bounded(QDate(1924, 1, 1).toJulianDay(), QDate(2006, 12, 31).toJulianDay()));
        int streetNumber = QRandomGenerator::global()->bounded(1, 201);
        QString streetName = streetNames.at(QRandomGenerator::global()->bounded(streetNames.size()));
        QString address = QString::number(streetNumber) + " " + streetName + ", Los Angeles, CA " + QString::number(QRandomGenerator::global()->bounded(90001, 90099)) 
                        + "-" + QString::number(QRandomGenerator::global()->bounded(1000, 9999));
        QString ssn = QString::number(QRandomGenerator::global()->bounded(100, 999)) + "-" + QString::number(QRandomGenerator::global()->bounded(10, 99)) + "-" 
                    + QString::number(QRandomGenerator::global()->bounded(1000, 9999));
        QString accountNumber = "123456789" + QString::number(i).rightJustified(3, '0');
        double balance = (i < 95) ? static_cast<double>(QRandomGenerator::global()->bounded(1, 100000)) : static_cast<double>(QRandomGenerator::global()->bounded(100000, 30000000));

        Client client(firstName, lastName, phoneNumber, dateOfBirth, address, ssn, accountNumber, balance);
        m_clients.append(client);
    }
    clientsGenerated = true;
}

void TrustyBank::on_pushA1_login_clicked()
{
    QString username = ui->lineEditA1_loginUsername->text();
    QString password = ui->lineEditA1_loginPassword->text();

    if (users.contains(username) && users[username] == password)
    {
        QMessageBox::information(this, "Login Successful", "Login successful.");
        currentLoggedInUser = username;
        if (!clientsGenerated)
        {
            generateClients();
        }
        showClients();
        setupTabs("Main");
        updateCoinTable();
        updateBillTable();
        updateCashValueTable();
        resetLogin();
    }
    else
    {
        QMessageBox::warning(this, "Login Failed", "Invalid username or password.");
        resetLogin();
    }
}

void TrustyBank::on_pushA1_register_clicked()
{
    setupTabs("Registration");
    resetLogin();
}

//******************************************************** A2 Registration ****************************************************************************************************************
void TrustyBank::resetRegistration()
{
    ui->lineEditA2_firstName->clear();
    ui->lineEditA2_lastName->clear();
    ui->lineEditA2_password->clear();
    ui->lineEditA2_confirmPassword->clear();
}

bool TrustyBank::validatePassword(const QString& password)
{
    QRegularExpression passwordPattern("^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[!@#$%^&*])[A-Za-z\\d!@#$%^&*]{8,}$");
    QRegularExpressionMatch match = passwordPattern.match(password);
    return match.hasMatch();
}

void TrustyBank::on_pushA2_register_clicked()
{
    QString firstName = ui->lineEditA2_firstName->text();
    QString lastName = ui->lineEditA2_lastName->text();
    QString password = ui->lineEditA2_password->text();
    QString confirmPassword = ui->lineEditA2_confirmPassword->text();

    if (password != confirmPassword)
    {
        QMessageBox::warning(this, "Registration Failed", "Passwords do not match.");
        resetRegistration();
        return;
    }

    if (!validatePassword(password))
    {
        QMessageBox::warning(this, "Registration Failed", "Password does not meet the requirements.");
        resetRegistration();
        return;
    }

    if (!validateInput(firstName, "firstName") || !validateInput(lastName, "lastNameWithHyphen"))
    {
        QMessageBox::warning(this, "Registration Failed", "Remember that data such as first and last names must start with a capital letter.");
        resetRegistration();
        return;
    }

    QString username = firstName.toLower() + "_" + lastName.toLower();
    if (users.contains(username))
    {
        QMessageBox::warning(this, "Registration Failed", "Username already exists.");
        resetRegistration();
        return;
    }

    QMap<QString, int> cash =
    {
        {"1¢", 0}, {"5¢", 0}, {"10¢", 0}, {"25¢", 0}, {"50¢", 0}, {"$1", 0}, {"$5", 0}, {"$10", 0}, {"$20", 0}, {"$50", 0}, {"$100", 0}, {"total_coins_value", 0}, 
        {"total_bills_value", 0}, {"total_cash_value", 0}
    };

    saveUser(username, password, cash);
    QMessageBox::information(this, "Registration Successful", "Registration successful. Your username is: " + username);
    resetRegistration();
    setupTabs("Login");
}

void TrustyBank::saveUser(const QString& username, const QString& password, const QMap<QString, int>& cash)
{
    users[username] = password;
    userCash[username] = cash;

    QJsonArray userArray;
    for (auto it = users.begin(); it != users.end(); ++it)
    {
        QJsonObject userObject;
        QJsonObject cashObject;
        userObject["username"] = it.key();
        userObject["password"] = it.value();
        
        QMap<QString, int> userCashData = userCash[it.key()];
        for (auto cashIt = userCashData.begin(); cashIt != userCashData.end(); ++cashIt)
        {
            cashObject[cashIt.key()] = cashIt.value();
        }

        userObject["cash"] = cashObject;
        userArray.append(userObject);
    }

    QJsonDocument doc(userArray);
    QFile file("users.json");

    if (file.open(QIODevice::WriteOnly))
    {
        file.write(doc.toJson());
        file.close();
    }
}

//**************************************************** B1 List of Clients *****************************************************************************************************************
void TrustyBank::loadClientData(const Client& client)
{
    QString thisAccountNumber = client.getAccountNumber();
    for (Client& thisClient : m_clients)
    {
        if (thisAccountNumber == thisClient.getAccountNumber())
        {
            temp_client = thisClient;
        }
    }
    
    ui->tableC1_clientPersonalData->setItem(0, 0, new QTableWidgetItem(client.getFirstName()));
    ui->tableC1_clientPersonalData->setItem(1, 0, new QTableWidgetItem(client.getLastName()));
    ui->tableC1_clientPersonalData->setItem(2, 0, new QTableWidgetItem(client.getPhoneNumber()));
    ui->tableC1_clientPersonalData->setItem(3, 0, new QTableWidgetItem(client.getDateOfBirth().toString("MM/dd/yyyy")));
    ui->tableC1_clientPersonalData->setItem(4, 0, new QTableWidgetItem(client.getAddress()));
    ui->tableC1_clientPersonalData->setItem(5, 0, new QTableWidgetItem(client.getSSN()));

    ui->tableC1_clientAccountData->setItem(0, 0, new QTableWidgetItem(client.getAccountNumber()));
    ui->tableC1_clientAccountData->setItem(1, 0, new QTableWidgetItem(QString::number(client.getBalance(), 'f', 2)));
    ui->tableC2__1_clientAccountData->setItem(0, 0, new QTableWidgetItem(client.getAccountNumber()));
    ui->tableC2__1_clientAccountData->setItem(1, 0, new QTableWidgetItem(QString::number(client.getBalance(), 'f', 2)));
    ui->tableC2__2_clientAccountData->setItem(0, 0, new QTableWidgetItem(client.getAccountNumber()));
    ui->tableC2__2_clientAccountData->setItem(1, 0, new QTableWidgetItem(QString::number(client.getBalance(), 'f', 2)));    
}

void TrustyBank::showClients()
{
    ui->tableB1_clients->setRowCount(m_clients.size());
    
    for (int i = 0; i < m_clients.size(); ++i)
    {
        const Client& client = m_clients.at(i);
        ui->tableB1_clients->setItem(i, 0, new QTableWidgetItem(client.getFirstName()));
        ui->tableB1_clients->setItem(i, 1, new QTableWidgetItem(client.getLastName()));
        ui->tableB1_clients->setItem(i, 2, new QTableWidgetItem(client.getPhoneNumber()));
        ui->tableB1_clients->setItem(i, 3, new QTableWidgetItem(client.getDateOfBirth().toString("MM/dd/yyyy")));
        ui->tableB1_clients->setItem(i, 4, new QTableWidgetItem(client.getAddress()));
        ui->tableB1_clients->setItem(i, 5, new QTableWidgetItem(client.getSSN()));
        ui->tableB1_clients->setItem(i, 6, new QTableWidgetItem(client.getAccountNumber()));
    }
}

void TrustyBank::on_pushB1_clientView_clicked()
{
    QList<QTableWidgetItem*> selectedItems = ui->tableB1_clients->selectedItems();
    
    if (!selectedItems.isEmpty())
    {
        int selectedRow = selectedItems.first()->row();
        const Client& client = m_clients.at(selectedRow);
        loadClientData(client);
        setupTabs("Client View");
    }
    else
    {
        QMessageBox::warning(this, "Client View Error", "You cannot proceed to Client View because no client has been selected.");
    }
}

void TrustyBank::on_pushB1_search_clicked()
{
    QString phoneNumber = ui->lineEditB1_phoneNumber->text();
    QString dateOfBirth = ui->lineEditB1_dateOfBirth->text();
    QString address = ui->lineEditB1_adress->text();
    QString ssn = ui->lineEditB1_sSN->text();
    QString accountNumber = ui->lineEditB1_accountNumber->text();

    QList<Client> filteredClients;

    for (const Client& client : m_clients)
    {
        bool match = true;

        if (!phoneNumber.isEmpty() && client.getPhoneNumber() != phoneNumber) match = false;
        if (!dateOfBirth.isEmpty() && client.getDateOfBirth().toString("MM/dd/yyyy") != dateOfBirth) match = false;
        if (!address.isEmpty() && client.getAddress() != address) match = false;
        if (!ssn.isEmpty() && client.getSSN() != ssn) match = false;
        if (!accountNumber.isEmpty() && client.getAccountNumber() != accountNumber) match = false;
        if (match) 
        {
            filteredClients.append(client);
        }
    }

    if (filteredClients.isEmpty())
    {
        QMessageBox::warning(this, "Search Failed", "You have entered incorrect data. Customer search is impossible.");
    }
    else 
    {
        ui->tableB1_clients->setRowCount(filteredClients.size());

        for (int i = 0; i < filteredClients.size(); ++i) 
        {
            const Client& client = filteredClients.at(i);
            ui->tableB1_clients->setItem(i, 0, new QTableWidgetItem(client.getFirstName()));
            ui->tableB1_clients->setItem(i, 1, new QTableWidgetItem(client.getLastName()));
            ui->tableB1_clients->setItem(i, 2, new QTableWidgetItem(client.getPhoneNumber()));
            ui->tableB1_clients->setItem(i, 3, new QTableWidgetItem(client.getDateOfBirth().toString("MM/dd/yyyy")));
            ui->tableB1_clients->setItem(i, 4, new QTableWidgetItem(client.getAddress()));
            ui->tableB1_clients->setItem(i, 5, new QTableWidgetItem(client.getSSN()));
            ui->tableB1_clients->setItem(i, 6, new QTableWidgetItem(client.getAccountNumber()));
        }
    }
}

void TrustyBank::pushB1_adviceInfo_clicked()
{
    QMessageBox::information(this, "Advice", "When making transfers, opening new accounts, or editing data, ensure the information is entered according to the format used in the 'List of Clients' tab.");
}

//**************************************************** B2__1 New Client *******************************************************************************************************************
void TrustyBank::resetNewClient()
{
    ui->lineEditB2__1_firstName->clear();
    ui->lineEditB2__1_lastName->clear();
    ui->lineEditB2__1_sSN->clear();
    ui->buttonBoxB2__1_yes->setChecked(false);
    ui->buttonBoxB2__1_no->setChecked(false);
}

void TrustyBank::on_pushB2__1_openAnAccount_clicked()
{
    QString firstName = ui->lineEditB2__1_firstName->text();
    QString lastName = ui->lineEditB2__1_lastName->text();
    QString ssn = ui->lineEditB2__1_sSN->text();
    bool isResident = ui->buttonBoxB2__1_yes->isChecked();
    bool isNonResident = ui->buttonBoxB2__1_no->isChecked();

    if (firstName.isEmpty() || lastName.isEmpty() || ssn.isEmpty() || (!isResident && !isNonResident))
    {
        QMessageBox::warning(this, "Incomplete Data", "Please complete all client data.");
        return;
    }

    if (!validateInput(firstName, "firstName") || !validateInput(lastName, "lastNameWithHyphen") || !validateInput(ssn, "ssn"))
    {
        QMessageBox::warning(this, "Incorrect Data", "Incorrect client data. Verify the data and try again.");
        return;
    }

    for (const Client& client : m_clients)
    {
        if (client.getSSN() == ssn) 
        {
            QMessageBox::warning(this, "Duplicate SSN", "The potential client's SSN matches an existing account holder. Please verify the client's ID.");
            return;
        }
    }

    if (isResident && isNonResident)
    {
        QMessageBox::warning(this, "Incorrect Data", "Incorrect client data. Verify the data and try again.");
        return;
    }

    if (isNonResident)
    {
        QMessageBox::warning(this, "Non-Resident", "TrustyBank does not allow opening an account for individuals who are not residents of the United States.");
        return;
    }

    temporaryClientData["firstName"] = firstName;
    temporaryClientData["lastName"] = lastName;
    temporaryClientData["ssn"] = ssn;

    QMessageBox::information(this, "Client Data Accepted", "Complete the remaining data for the potential client.");
    resetNewClient();
    setupTabs("New Account");
}

void TrustyBank::on_pushB2__1_sSNInfo_clicked()
{
    QMessageBox::information(this, "SSN Format", "The format of the SSN is as follows: XXX-XX-XXXX.");
}

void TrustyBank::on_pushB2__1_prospectInfo_clicked()
{
    QMessageBox::information(this, "Prospect Info", "A resident is someone who lives in the country legally, either as a citizen, a permanent resident (green card holder), or an individual with a valid visa allowing extended stay.");
}

//**************************************************** B2__2 New Account ******************************************************************************************************************
void TrustyBank::resetNewAccount()
{
    ui->lineEditB2__2_phoneNumber->clear();
    ui->lineEditB2__2_dateOfBirth->clear();
    ui->lineEditB2__2_adress->clear();
}

void TrustyBank::on_pushB2__2_openAnAccount_clicked()
{
    QString phoneNumber = ui->lineEditB2__2_phoneNumber->text();
    QString dateOfBirth = ui->lineEditB2__2_dateOfBirth->text();
    QString postalAndCity = ui->lineEditB2__2_adress->text();

    if (phoneNumber.isEmpty() || dateOfBirth.isEmpty() || postalAndCity.isEmpty())
    {
        QMessageBox::warning(this, "Incomplete Data", "Please complete all client data.");
        return;
    }

    if (!validateInput(phoneNumber, "phoneNumber") || !validateInput(dateOfBirth, "dob") || !validateInput(postalAndCity, "address"))
    {
        QMessageBox::warning(this, "Incorrect Data", "Incorrect client data. Verify the data and try again.");
        return;
    }

    QDate birthDate = QDate::fromString(dateOfBirth, "MM/dd/yyyy");
    if (!birthDate.isValid() || birthDate > QDate::currentDate())
    {
        QMessageBox::warning(this, "Incorrect Data", "Incorrect client data. Verify the data and try again.");
        return;
    }

    QDate today = QDate::currentDate();
    int age = birthDate.daysTo(today) / 365;
    if (age < 18 || age > 100)
    {
        QMessageBox::warning(this, "Age Restriction", "TrustyBank does not allow opening accounts for minors or people older than 100 years.");
        return;
    }

    QString phonePrefix = "+" + QString::number(QRandomGenerator::global()->bounded(1, 10)) + " " + QString::number(QRandomGenerator::global()->bounded(10, 100));
    QString fullPhoneNumber = phonePrefix + " " + phoneNumber;

    QString accountNumber;
    if (m_clients.isEmpty())
    {
        accountNumber = "100000000001";
    }
    else
    {
        QString lastAccountNumber = m_clients.last().getAccountNumber();
        qlonglong newAccountNumber = lastAccountNumber.toLongLong() + 1;
        accountNumber = QString::number(newAccountNumber).rightJustified(12, '0');
    }

    Client newClient
    (
        temporaryClientData["firstName"], temporaryClientData["lastName"], fullPhoneNumber, birthDate, postalAndCity, temporaryClientData["ssn"], accountNumber, 0.0
    );

    m_clients.append(newClient);

    showClients();
    QMessageBox::information(this, "Account Created", "Account has been created. Encourage the client to make their first deposit.");
    resetNewAccount();
    setupTabs("Main");
}

void TrustyBank::on_pushB2__2_back_clicked()
{
    resetNewAccount();
    setupTabs("Main");
}

//**************************************************** B3 Treasury Menagement *************************************************************************************************************
void TrustyBank::updateCoinTable()
{
    QMap<QString, int> cash = userCash[currentLoggedInUser];
    ui->tableB3_coins->setItem(0, 0, new QTableWidgetItem(QString::number(cash["1¢"])));
    ui->tableB3_coins->setItem(1, 0, new QTableWidgetItem(QString::number(cash["5¢"])));
    ui->tableB3_coins->setItem(2, 0, new QTableWidgetItem(QString::number(cash["10¢"])));
    ui->tableB3_coins->setItem(3, 0, new QTableWidgetItem(QString::number(cash["25¢"])));
    ui->tableB3_coins->setItem(4, 0, new QTableWidgetItem(QString::number(cash["50¢"])));
}

void TrustyBank::updateBillTable()
{
    QMap<QString, int> cash = userCash[currentLoggedInUser];
    ui->tableB3_bills->setItem(0, 0, new QTableWidgetItem(QString::number(cash["$1"])));
    ui->tableB3_bills->setItem(1, 0, new QTableWidgetItem(QString::number(cash["$5"])));
    ui->tableB3_bills->setItem(2, 0, new QTableWidgetItem(QString::number(cash["$10"])));
    ui->tableB3_bills->setItem(3, 0, new QTableWidgetItem(QString::number(cash["$20"])));
    ui->tableB3_bills->setItem(4, 0, new QTableWidgetItem(QString::number(cash["$50"])));
    ui->tableB3_bills->setItem(5, 0, new QTableWidgetItem(QString::number(cash["$100"])));
}

void TrustyBank::updateCashValueTable()
{
    QMap<QString, int> cash = userCash[currentLoggedInUser];
    float totalCoinsValue = (float)(cash["1¢"] * 0.01 + cash["5¢"] * 0.05 + cash["10¢"] * 0.10 + cash["25¢"] * 0.25 + cash["50¢"] * 0.50);
    int totalBillsValue = cash["$1"] + cash["$5"] * 5 + cash["$10"] * 10 + cash["$20"] * 20 + cash["$50"] * 50 + cash["$100"] * 100;
    ui->tableB3_cashValue->setItem(0, 0, new QTableWidgetItem(QString::number(totalCoinsValue, 'f', 2)));
    ui->tableB3_cashValue->setItem(1, 0, new QTableWidgetItem(QString::number(totalBillsValue, 'f', 2)));
    ui->tableB3_cashValue->setItem(2, 0, new QTableWidgetItem(QString::number((float)(totalCoinsValue + totalBillsValue), 'f', 2)));
}

void TrustyBank::on_pushB3_allowanceInfo_clicked()
{
    QMessageBox::information(this, "Allowance Info", "Your multivault cannot hold cash exceeding $100,000. The treasurer cannot provide you with more than this amount.");
}

void TrustyBank::pushB3_remittanceInfo_clicked()
{
    QMessageBox::information(this, "Remittance Info", "If your multi-safe contains more than $100,000, it is your responsibility to deliver the excess cash to the treasurer. Remember, the treasurer will not be monitoring you. In the event of a robbery, any amount over $100,000 that is lost will not be covered by insurance, and you will be held accountable for the repayment of that money.");
}

void TrustyBank::on_pushB3_proceed_clicked()
{
    setupTabs("Cash Remittance");
}

void TrustyBank::on_pushB3_doIt_clicked()
{
    if (currentLoggedInUser.isEmpty())
    {
        QMessageBox::warning(this, "No User Logged In", "No user is currently logged in.");
        return;
    }

    QMap<QString, int> cash = userCash[currentLoggedInUser];
    cash["1¢"] += 25;
    cash["5¢"] += 25;
    cash["10¢"] += 25;
    cash["25¢"] += 24;
    cash["50¢"] += 24;
    cash["$1"] += 23;
    cash["$5"] += 23;
    cash["$10"] += 23;
    cash["$20"] += 23;
    cash["$50"] += 49;
    cash["$100"] += 467;

    cash["total_coins_value"] = cash["1¢"] * 0.01 + cash["5¢"] * 0.05 + cash["10¢"] * 0.10 + cash["25¢"] * 0.25 + cash["50¢"] * 0.50;
    cash["total_bills_value"] = cash["$1"] + cash["$5"] * 5 + cash["$10"] * 10 + cash["$20"] * 20 + cash["$50"] * 50 + cash["$100"] * 100;
    cash["total_cash_value"] = cash["total_coins_value"] + cash["total_bills_value"];

    if (cash["total_cash_value"] > 100000)
    {
        QMessageBox::warning(this, "Allowance Not Possible", "Allowance by the treasurer is not possible because the $100,000 limit for the cashier has been exceeded.");
        return;
    }

    userCash[currentLoggedInUser] = cash;
    saveUser(currentLoggedInUser, users[currentLoggedInUser], cash);
    updateCoinTable();
    updateBillTable();
    updateCashValueTable();
    QMessageBox::information(this, "Allowance Granted", "You have received an allowance of $50,000.");
}

//**************************************************** B3__2 Cash Remittance **************************************************************************************************************
void TrustyBank::resetCashRemittance()
{
    ui->lineEditB3__2_ammount->clear();
    ui->lineEditB3__2_cent01->clear();
    ui->lineEditB3__2_cents05->clear();
    ui->lineEditB3__2_cents10->clear();
    ui->lineEditB3__2_cents25->clear();
    ui->lineEditB3__2_cents50->clear();
    ui->lineEditB3__2_dollar001->clear();
    ui->lineEditB3__2_dollars005->clear();
    ui->lineEditB3__2_dollars010->clear();
    ui->lineEditB3__2_dollars020->clear();
    ui->lineEditB3__2_dollars050->clear();
    ui->lineEditB3__2_dollars100->clear();
}

void TrustyBank::on_pushB3__2_remittance_clicked()
{
    double amount = ui->lineEditB3__2_ammount->text().toDouble();
    double cent01 = ui->lineEditB3__2_cent01->text().toInt() * 0.01;
    double cent05 = ui->lineEditB3__2_cents05->text().toInt() * 0.05;
    double cent10 = ui->lineEditB3__2_cents10->text().toInt() * 0.10;
    double cent25 = ui->lineEditB3__2_cents25->text().toInt() * 0.25;
    double cent50 = ui->lineEditB3__2_cents50->text().toInt() * 0.50;
    double dollar001 = ui->lineEditB3__2_dollar001->text().toInt();
    double dollar005 = ui->lineEditB3__2_dollars005->text().toInt() * 5;
    double dollar010 = ui->lineEditB3__2_dollars010->text().toInt() * 10;
    double dollar020 = ui->lineEditB3__2_dollars020->text().toInt() * 20;
    double dollar050 = ui->lineEditB3__2_dollars050->text().toInt() * 50;
    double dollar100 = ui->lineEditB3__2_dollars100->text().toInt() * 100;
    double totalAmount = cent01 + cent05 + cent10 + cent25 + cent50 + dollar001 + dollar005 + dollar010 + dollar020 + dollar050 + dollar100;

    if (!qFuzzyCompare(totalAmount + 1.0, amount + 1.0))
    {
        QMessageBox::warning(this, "Amount Mismatch", "The declared amount does not match the denomination structure.");
        resetCashRemittance();
        return;
    }

    QMap<QString, int> cash = userCash[currentLoggedInUser];
    cash["1¢"] -= ui->lineEditB3__2_cent01->text().toInt();
    cash["5¢"] -= ui->lineEditB3__2_cents05->text().toInt();
    cash["10¢"] -= ui->lineEditB3__2_cents10->text().toInt();
    cash["25¢"] -= ui->lineEditB3__2_cents25->text().toInt();
    cash["50¢"] -= ui->lineEditB3__2_cents50->text().toInt();
    cash["$1"] -= ui->lineEditB3__2_dollar001->text().toInt();
    cash["$5"] -= ui->lineEditB3__2_dollars005->text().toInt();
    cash["$10"] -= ui->lineEditB3__2_dollars010->text().toInt();
    cash["$20"] -= ui->lineEditB3__2_dollars020->text().toInt();
    cash["$50"] -= ui->lineEditB3__2_dollars050->text().toInt();
    cash["$100"] -= ui->lineEditB3__2_dollars100->text().toInt();
    cash["total_coins_value"] = cash["1¢"] * 0.01 + cash["5¢"] * 0.05 + cash["10¢"] * 0.10 + cash["25¢"] * 0.25 + cash["50¢"] * 0.50;
    cash["total_bills_value"] = cash["$1"] + cash["$5"] * 5 + cash["$10"] * 10 + cash["$20"] * 20 + cash["$50"] * 50 + cash["$100"] * 100;
    cash["total_cash_value"] = cash["total_coins_value"] + cash["total_bills_value"];

    userCash[currentLoggedInUser] = cash;
    saveUser(currentLoggedInUser, users[currentLoggedInUser], cash);
    updateCoinTable();
    updateBillTable();
    updateCashValueTable();
    QMessageBox::information(this, "Remittance Completed", "Cash remittance to the treasurer successfully completed.");
    resetCashRemittance();
}

void TrustyBank::on_pushB3__2_back_clicked()
{
    updateCoinTable();
    updateBillTable();
    updateCashValueTable();
    resetCashRemittance();
    setupTabs("Main");
}

//**************************************************** B4 Logout **************************************************************************************************************************
void TrustyBank::resetCashierTally()
{
    ui->lineEditB4__2_cent01->clear();
    ui->lineEditB4__2_cents05->clear();
    ui->lineEditB4__2_cents10->clear();
    ui->lineEditB4__2_cents25->clear();
    ui->lineEditB4__2_cents50->clear();
    ui->lineEditB4__2_dollar001->clear();
    ui->lineEditB4__2_dollars005->clear();
    ui->lineEditB4__2_dollars010->clear();
    ui->lineEditB4__2_dollars020->clear();
    ui->lineEditB4__2_dollars050->clear();
    ui->lineEditB4__2_dollars100->clear();
    discrepancyCount = 0;
}

void TrustyBank::on_pushB4_logout_clicked()
{
    setupTabs("Cashier Tally");
    QMessageBox::warning(this, "WARNING: Reconciliation of the cash is necessary", "Before logging out, it is necessary to remmitance the cash.");
    resetCashierTally();
}

void TrustyBank::on_pushC1_back_clicked()
{
    updateCoinTable();
    updateBillTable();
    updateCashValueTable();
    setupTabs("Main");
}

//**************************************************** B4__2 Cashier Tally ****************************************************************************************************************
bool TrustyBank::checkCashReconciliation()
{
    int declaredCent01 = ui->lineEditB4__2_cent01->text().toInt();
    int declaredCent05 = ui->lineEditB4__2_cents05->text().toInt();
    int declaredCent10 = ui->lineEditB4__2_cents10->text().toInt();
    int declaredCent25 = ui->lineEditB4__2_cents25->text().toInt();
    int declaredCent50 = ui->lineEditB4__2_cents50->text().toInt();
    int declaredDollar001 = ui->lineEditB4__2_dollar001->text().toInt();
    int declaredDollar005 = ui->lineEditB4__2_dollars005->text().toInt();
    int declaredDollar010 = ui->lineEditB4__2_dollars010->text().toInt();
    int declaredDollar020 = ui->lineEditB4__2_dollars020->text().toInt();
    int declaredDollar050 = ui->lineEditB4__2_dollars050->text().toInt();
    int declaredDollar100 = ui->lineEditB4__2_dollars100->text().toInt();
    int totalDeclaredAmount = declaredCent01 * 0.01 + declaredCent05 * 0.05 + declaredCent10 * 0.10 + declaredCent25 * 0.25 + declaredCent50 * 0.50 + declaredDollar001 * 1 
                            + declaredDollar005 * 5 + declaredDollar010 * 10 + declaredDollar020 * 20 + declaredDollar050 * 50 + declaredDollar100 * 100;
    int totalActualAmount = userCash[currentLoggedInUser]["1¢"] * 0.01 + userCash[currentLoggedInUser]["5¢"] * 0.05 + userCash[currentLoggedInUser]["10¢"] * 0.10 
                          + userCash[currentLoggedInUser]["25¢"] * 0.25 + userCash[currentLoggedInUser]["50¢"] * 0.50 + userCash[currentLoggedInUser]["$1"] * 1 
                          + userCash[currentLoggedInUser]["$5"] * 5 + userCash[currentLoggedInUser]["$10"] * 10 + userCash[currentLoggedInUser]["$20"] * 20 
                          + userCash[currentLoggedInUser]["$50"] * 50 + userCash[currentLoggedInUser]["$100"] * 100;

    if (totalDeclaredAmount != totalActualAmount)
    {
        return false;
    }

    bool hasDenominationDiscrepancy = declaredCent01 != userCash[currentLoggedInUser]["1¢"] || declaredCent05 != userCash[currentLoggedInUser]["5¢"] ||
                                      declaredCent10 != userCash[currentLoggedInUser]["10¢"] || declaredCent25 != userCash[currentLoggedInUser]["25¢"] || 
                                      declaredCent50 != userCash[currentLoggedInUser]["50¢"] || declaredDollar001 != userCash[currentLoggedInUser]["$1"] || 
                                      declaredDollar005 != userCash[currentLoggedInUser]["$5"] || declaredDollar010 !=userCash[currentLoggedInUser]["$10"] ||
                                      declaredDollar020 != userCash[currentLoggedInUser]["$20"] || declaredDollar050 != userCash[currentLoggedInUser]["$50"] ||
                                      declaredDollar100 != userCash[currentLoggedInUser]["$100"];

    return !hasDenominationDiscrepancy;
}

void TrustyBank::on_pushB4__2_reconcile_clicked()
{
    if (checkCashReconciliation())
    {
        QMessageBox::information(this, "Logout Successful", "Congratulations on a job well done. No discrepancies were recorded, and the cashier may leave the workstation.");
        setupTabs("Login");
    }
    else
    {
        discrepancyCount++;

        if (discrepancyCount == 1)
        {
            QMessageBox::warning(this, "Discrepancy Found", "The cashier has a discrepancy. Recounting the cash is necessary.");
        }
        else
        {
            int declaredCent01 = ui->lineEditB4__2_cent01->text().toInt();
            int declaredCent05 = ui->lineEditB4__2_cents05->text().toInt();
            int declaredCent10 = ui->lineEditB4__2_cents10->text().toInt();
            int declaredCent25 = ui->lineEditB4__2_cents25->text().toInt();
            int declaredCent50 = ui->lineEditB4__2_cents50->text().toInt();
            int declaredDollar001 = ui->lineEditB4__2_dollar001->text().toInt();
            int declaredDollar005 = ui->lineEditB4__2_dollars005->text().toInt();
            int declaredDollar010 = ui->lineEditB4__2_dollars010->text().toInt();
            int declaredDollar020 = ui->lineEditB4__2_dollars020->text().toInt();
            int declaredDollar050 = ui->lineEditB4__2_dollars050->text().toInt();
            int declaredDollar100 = ui->lineEditB4__2_dollars100->text().toInt();
            double totalDeclaredAmount = declaredCent01 * 0.01 + declaredCent05 * 0.05 + declaredCent10 * 0.10 + declaredCent25 * 0.25 + declaredCent50 * 0.50 + declaredDollar001 * 1 
                                       + declaredDollar005 * 5 + declaredDollar010 * 10 + declaredDollar020 * 20 + declaredDollar050 * 50 + declaredDollar100 * 100;
            double totalActualAmount = userCash[currentLoggedInUser]["1¢"] * 0.01 + userCash[currentLoggedInUser]["5¢"] * 0.05 + userCash[currentLoggedInUser]["10¢"] * 0.10 
                                     + userCash[currentLoggedInUser]["25¢"] * 0.25 + userCash[currentLoggedInUser]["50¢"] * 0.50 + userCash[currentLoggedInUser]["$1"] * 1 
                                     + userCash[currentLoggedInUser]["$5"] * 5 + userCash[currentLoggedInUser]["$10"] * 10 + userCash[currentLoggedInUser]["$20"] * 20 
                                     + userCash[currentLoggedInUser]["$50"] * 50 + userCash[currentLoggedInUser]["$100"] * 100;

            if (totalDeclaredAmount < totalActualAmount)
            {
                double shortage = totalActualAmount - totalDeclaredAmount;
                QMessageBox::warning(this, "Shortage Found", "The cashier has a shortage of " + QString::number(shortage, 'f', 2) + ". A report must be filed with the bank director.");
            }
            else if (totalDeclaredAmount > totalActualAmount)
            {
                double surplus = totalDeclaredAmount - totalActualAmount;
                QMessageBox::warning(this, "Surplus Found", "The cashier has a surplus of " + QString::number(surplus, 'f', 2) + ". A report must be filed with the bank director.");
            }
            else
            {
                QMessageBox::warning(this, "Denomination Discrepancy", "The cashier has a denomination discrepancy, although the total amount is correct. A report must be filed with the bank director.");
            }            
            QMessageBox::information(this, "Logout Successful", "You have been a naughty cashier today. If this continues, the director has the right to decide on your dismissal.");
            setupTabs("Login");
        }
    }
}

//**************************************************** C1 Client View *********************************************************************************************************************
void TrustyBank::on_pushC1_deposit_clicked()
{
    setupTabs("Deposit");
}

void TrustyBank::on_pushC1_withdrawal_clicked()
{
    setupTabs("Withdrawal");
}

void TrustyBank::on_pushC1_transfer_clicked()
{
    setupTabs("Transfer");
}

void TrustyBank::on_pushC1_clientDataEditing_clicked()
{
    setupTabs("Client Data Editing");
}

//**************************************************** C2__1 Deposit **********************************************************************************************************************
void TrustyBank::resetDeposit()
{
    ui->lineEditC2__1_ammount->clear();
    ui->lineEditC2__1_cent01->clear();
    ui->lineEditC2__1_cents05->clear();
    ui->lineEditC2__1_cents10->clear();
    ui->lineEditC2__1_cents25->clear();
    ui->lineEditC2__1_cents50->clear();
    ui->lineEditC2__1_dollar001->clear();
    ui->lineEditC2__1_dollars005->clear();
    ui->lineEditC2__1_dollars010->clear();
    ui->lineEditC2__1_dollars020->clear();
    ui->lineEditC2__1_dollars050->clear();
    ui->lineEditC2__1_dollars100->clear();
}

bool TrustyBank::validateDepositAmount()
{
    double amount = ui->lineEditC2__1_ammount->text().toDouble();
    double cent01 = ui->lineEditC2__1_cent01->text().toInt() * 0.01;
    double cent05 = ui->lineEditC2__1_cents05->text().toInt() * 0.05;
    double cent10 = ui->lineEditC2__1_cents10->text().toInt() * 0.10;
    double cent25 = ui->lineEditC2__1_cents25->text().toInt() * 0.25;
    double cent50 = ui->lineEditC2__1_cents50->text().toInt() * 0.50;
    double dollar001 = ui->lineEditC2__1_dollar001->text().toInt();
    double dollar005 = ui->lineEditC2__1_dollars005->text().toInt() * 5;
    double dollar010 = ui->lineEditC2__1_dollars010->text().toInt() * 10;
    double dollar020 = ui->lineEditC2__1_dollars020->text().toInt() * 20;
    double dollar050 = ui->lineEditC2__1_dollars050->text().toInt() * 50;
    double dollar100 = ui->lineEditC2__1_dollars100->text().toInt() * 100;
    double totalAmount = cent01 + cent05 + cent10 + cent25 + cent50 + dollar001 + dollar005 + dollar010 + dollar020 + dollar050 + dollar100;

    return qFuzzyCompare(totalAmount + 1.0, amount + 1.0);
}

void TrustyBank::on_pushC2__1_deposit_clicked()
{
    if (!validateDepositAmount())
    {
        QMessageBox::warning(this, "Deposit Failed", "The declared deposit amount does not match the denomination structure. A deposit under the given conditions is not possible.");
        resetDeposit();
        return;
    }

    QString accountNumber = ui->tableC2__1_clientAccountData->item(0, 0)->text();

    for (Client& client : m_clients) 
    {
        if (client.getAccountNumber() == accountNumber) 
        {
            double depositAmount = ui->lineEditC2__1_ammount->text().toDouble();
            userCash[currentLoggedInUser]["1¢"] += ui->lineEditC2__1_cent01->text().toInt();
            userCash[currentLoggedInUser]["5¢"] += ui->lineEditC2__1_cents05->text().toInt();
            userCash[currentLoggedInUser]["10¢"] += ui->lineEditC2__1_cents10->text().toInt();
            userCash[currentLoggedInUser]["25¢"] += ui->lineEditC2__1_cents25->text().toInt();
            userCash[currentLoggedInUser]["50¢"] += ui->lineEditC2__1_cents50->text().toInt();
            userCash[currentLoggedInUser]["$1"] += ui->lineEditC2__1_dollar001->text().toInt();
            userCash[currentLoggedInUser]["$5"] += ui->lineEditC2__1_dollars005->text().toInt();
            userCash[currentLoggedInUser]["$10"] += ui->lineEditC2__1_dollars010->text().toInt();
            userCash[currentLoggedInUser]["$20"] += ui->lineEditC2__1_dollars020->text().toInt();
            userCash[currentLoggedInUser]["$50"] += ui->lineEditC2__1_dollars050->text().toInt();
            userCash[currentLoggedInUser]["$100"] += ui->lineEditC2__1_dollars100->text().toInt();
            userCash[currentLoggedInUser]["total_coins_value"] = userCash[currentLoggedInUser]["1¢"] * 0.01 + userCash[currentLoggedInUser]["5¢"] * 0.05
                                                               + userCash[currentLoggedInUser]["10¢"] * 0.10 + userCash[currentLoggedInUser]["25¢"] * 0.25
                                                               + userCash[currentLoggedInUser]["50¢"] * 0.50;
            userCash[currentLoggedInUser]["total_bills_value"] = userCash[currentLoggedInUser]["$1"] + userCash[currentLoggedInUser]["$5"] * 5 + userCash[currentLoggedInUser]["$10"] * 10
                                                               + userCash[currentLoggedInUser]["$20"] * 20 + userCash[currentLoggedInUser]["$50"] * 50 
                                                               + userCash[currentLoggedInUser]["$100"] * 100;
            userCash[currentLoggedInUser]["total_cash_value"] = userCash[currentLoggedInUser]["total_coins_value"] + userCash[currentLoggedInUser]["total_bills_value"];

            saveUser(currentLoggedInUser, users[currentLoggedInUser], userCash[currentLoggedInUser]);
            client.setBalance(client.getBalance() + depositAmount);
            loadClientData(temp_client);
            QMessageBox::information(this, "Deposit Successful", "Deposit successfully completed.");
            resetDeposit();
            return;
        }
    }
    QMessageBox::warning(this, "Client Not Found", "Client with the specified account number was not found.");
}

void TrustyBank::on_pushC2__1_back_clicked()
{
    setupTabs("Client View");
    resetDeposit();
}

//**************************************************** C2__2 Withdrawal *******************************************************************************************************************
void TrustyBank::resetWithdrawal()
{
    ui->lineEditC2__2_ammount->clear();
    ui->lineEditC2__2_cent01->clear();
    ui->lineEditC2__2_cents05->clear();
    ui->lineEditC2__2_cents10->clear();
    ui->lineEditC2__2_cents25->clear();
    ui->lineEditC2__2_cents50->clear();
    ui->lineEditC2__2_dollar001->clear();
    ui->lineEditC2__2_dollars005->clear();
    ui->lineEditC2__2_dollars010->clear();
    ui->lineEditC2__2_dollars020->clear();
    ui->lineEditC2__2_dollars050->clear();
    ui->lineEditC2__2_dollars100->clear();
}

void TrustyBank::on_pushC2__2_withdraw_clicked()
{
    QString accountNumber = ui->tableC2__2_clientAccountData->item(0, 0)->text();

    for (Client& client : m_clients) 
    {
        if (client.getAccountNumber() == accountNumber) 
        {
            double withdrawalAmount = ui->lineEditC2__2_ammount->text().toDouble();
            double cent01 = ui->lineEditC2__2_cent01->text().toInt() * 0.01;
            double cent05 = ui->lineEditC2__2_cents05->text().toInt() * 0.05;
            double cent10 = ui->lineEditC2__2_cents10->text().toInt() * 0.10;
            double cent25 = ui->lineEditC2__2_cents25->text().toInt() * 0.25;
            double cent50 = ui->lineEditC2__2_cents50->text().toInt() * 0.50;
            double dollar001 = ui->lineEditC2__2_dollar001->text().toInt();
            double dollar005 = ui->lineEditC2__2_dollars005->text().toInt() * 5;
            double dollar010 = ui->lineEditC2__2_dollars010->text().toInt() * 10;
            double dollar020 = ui->lineEditC2__2_dollars020->text().toInt() * 20;
            double dollar050 = ui->lineEditC2__2_dollars050->text().toInt() * 50;
            double dollar100 = ui->lineEditC2__2_dollars100->text().toInt() * 100;
            double totalAmount = cent01 + cent05 + cent10 + cent25 + cent50 + dollar001 + dollar005 + dollar010 + dollar020 + dollar050 + dollar100;

            if (!qFuzzyCompare(totalAmount + 1.0, withdrawalAmount + 1.0)) 
            {
                QMessageBox::warning(this, "Withdrawal Failed", "The declared withdrawal amount does not match the denomination structure. A withdrawal under the given conditions is not possible.");
                resetWithdrawal();
                return;
            }

            if (client.getBalance() < withdrawalAmount) 
            {
                QMessageBox::warning(this, "Insufficient Funds", "The client does not have enough funds to complete this withdrawal.");
                resetWithdrawal();
                return;
            }

            if (userCash[currentLoggedInUser]["1¢"] < ui->lineEditC2__2_cent01->text().toInt() || userCash[currentLoggedInUser]["5¢"] < ui->lineEditC2__2_cents05->text().toInt() ||
                userCash[currentLoggedInUser]["10¢"] < ui->lineEditC2__2_cents10->text().toInt() || userCash[currentLoggedInUser]["25¢"] < ui->lineEditC2__2_cents25->text().toInt() ||
                userCash[currentLoggedInUser]["50¢"] < ui->lineEditC2__2_cents50->text().toInt() || userCash[currentLoggedInUser]["$1"] < ui->lineEditC2__2_dollar001->text().toInt() ||
                userCash[currentLoggedInUser]["$5"] < ui->lineEditC2__2_dollars005->text().toInt() || userCash[currentLoggedInUser]["$10"]<ui->lineEditC2__2_dollars010->text().toInt() ||
                userCash[currentLoggedInUser]["$20"] < ui->lineEditC2__2_dollars020->text().toInt() || userCash[currentLoggedInUser]["$50"]<ui->lineEditC2__2_dollars050->text().toInt() ||
                userCash[currentLoggedInUser]["$100"] < ui->lineEditC2__2_dollars100->text().toInt())
            {
                QMessageBox::warning(this, "Insufficient Cash", "The cashier does not have enough cash to complete this withdrawal.");
                resetWithdrawal();
                return;
            }

            userCash[currentLoggedInUser]["1¢"] -= ui->lineEditC2__2_cent01->text().toInt();
            userCash[currentLoggedInUser]["5¢"] -= ui->lineEditC2__2_cents05->text().toInt();
            userCash[currentLoggedInUser]["10¢"] -= ui->lineEditC2__2_cents10->text().toInt();
            userCash[currentLoggedInUser]["25¢"] -= ui->lineEditC2__2_cents25->text().toInt();
            userCash[currentLoggedInUser]["50¢"] -= ui->lineEditC2__2_cents50->text().toInt();
            userCash[currentLoggedInUser]["$1"] -= ui->lineEditC2__2_dollar001->text().toInt();
            userCash[currentLoggedInUser]["$5"] -= ui->lineEditC2__2_dollars005->text().toInt();
            userCash[currentLoggedInUser]["$10"] -= ui->lineEditC2__2_dollars010->text().toInt();
            userCash[currentLoggedInUser]["$20"] -= ui->lineEditC2__2_dollars020->text().toInt();
            userCash[currentLoggedInUser]["$50"] -= ui->lineEditC2__2_dollars050->text().toInt();
            userCash[currentLoggedInUser]["$100"] -= ui->lineEditC2__2_dollars100->text().toInt();
            userCash[currentLoggedInUser]["total_coins_value"] = userCash[currentLoggedInUser]["1¢"] * 0.01 + userCash[currentLoggedInUser]["5¢"] * 0.05
                                                               + userCash[currentLoggedInUser]["10¢"] * 0.10 + userCash[currentLoggedInUser]["25¢"] * 0.25
                                                               + userCash[currentLoggedInUser]["50¢"] * 0.50;
            userCash[currentLoggedInUser]["total_bills_value"] = userCash[currentLoggedInUser]["$1"] + userCash[currentLoggedInUser]["$5"] * 5 + userCash[currentLoggedInUser]["$10"] * 10
                                                               + userCash[currentLoggedInUser]["$20"] * 20 + userCash[currentLoggedInUser]["$50"] * 50
                                                               + userCash[currentLoggedInUser]["$100"] * 100;
            userCash[currentLoggedInUser]["total_cash_value"] = userCash[currentLoggedInUser]["total_coins_value"] + userCash[currentLoggedInUser]["total_bills_value"];

            saveUser(currentLoggedInUser, users[currentLoggedInUser], userCash[currentLoggedInUser]);
            client.setBalance(client.getBalance() - withdrawalAmount);
            loadClientData(temp_client);
            QMessageBox::information(this, "Withdrawal Successful", "Withdrawal successfully completed.");
            resetWithdrawal();
            return;
        }
    }
    QMessageBox::warning(this, "Client Not Found", "Client with the specified account number was not found.");
}

void TrustyBank::on_pushC2__2_back_clicked() 
{
    setupTabs("Client View");
    resetWithdrawal();
}

//**************************************************** C2__3 Transfer *********************************************************************************************************************
void TrustyBank::resetTransfer()
{
    ui->lineEditC2__3__firstName->clear();
    ui->lineEditC2__3__lastName->clear();
    ui->lineEditC2__3__accountNumber->clear();
    ui->lineEditC2__3__amount->clear();
}

void TrustyBank::on_pushC2__3_transfer_clicked()
{
    QString beneficiaryFirstName = ui->lineEditC2__3__firstName->text();
    QString beneficiaryLastName = ui->lineEditC2__3__lastName->text();
    QString beneficiaryAccountNumber = ui->lineEditC2__3__accountNumber->text();
    QString transferAmountStr = ui->lineEditC2__3__amount->text();

    if (beneficiaryFirstName.isEmpty() || beneficiaryLastName.isEmpty() || beneficiaryAccountNumber.isEmpty() || transferAmountStr.isEmpty())
    {
        QMessageBox::warning(this, "Incomplete Data", "Complete the beneficiary's data.");
        return;
    }

    if (!validateInput(beneficiaryFirstName, "firstName") || !validateInput(beneficiaryLastName, "lastNameWithHyphen") || !validateInput(beneficiaryAccountNumber, "accountNumber") || !validateInput(transferAmountStr, "amount")) 
    {
        QMessageBox::warning(this, "Invalid Data", "Invalid data provided. Verify the information.");
        return;
    }

    double transferAmount = transferAmountStr.toDouble();
    QString currentAccountNumber = ui->tableC1_clientAccountData->item(0, 0)->text();
    Client* senderClient = nullptr;
    for (Client& client : m_clients)
    {
        if (client.getAccountNumber() == currentAccountNumber)
        {
            senderClient = &client;
            break;
        }
    }

    if (!senderClient)
    {
        QMessageBox::warning(this, "Error", "The Client View tab currently does not contain any client data.");
        return;
    }

    if (currentAccountNumber == beneficiaryAccountNumber) 
    {
        QMessageBox::warning(this, "Invalid Operation", "You cannot transfer money to your own account.");
        return;
    }

    if (senderClient->getBalance() < transferAmount) 
    {
        QMessageBox::warning(this, "Insufficient Funds", "The client making the transfer does not have sufficient funds in their account.");
        return;
    }

    Client* beneficiaryClient = nullptr;
    for (Client& client : m_clients) 
    {
        if (client.getFirstName() == beneficiaryFirstName && client.getLastName() == beneficiaryLastName && client.getAccountNumber() == beneficiaryAccountNumber)
        {
            beneficiaryClient = &client;
            break;
        }
    }

    if (!beneficiaryClient)
    {
        QMessageBox::warning(this, "Beneficiary Not Found", "No beneficiary was found with the provided information.");
        return;
    }

    senderClient->setBalance(senderClient->getBalance() - transferAmount);
    beneficiaryClient->setBalance(beneficiaryClient->getBalance() + transferAmount);

    loadClientData(temp_client);
    resetTransfer();
    QMessageBox::information(this, "Transfer Successful", "The transfer has been completed.");
}

void TrustyBank::on_pushC2__3_back_clicked()
{
    resetTransfer();
    setupTabs("Client View");
}

//**************************************************** C2__4 Client Data Editing **********************************************************************************************************
void TrustyBank::resetClientDataEditing()
{
    ui->lineEditC2__4_firstName->clear();
    ui->lineEditC2__4_lastName->clear();
    ui->lineEditC2__4_phoneNumber->clear();
    ui->lineEditC2__4_adress->clear();
    ui->lineEditC2__4_dateOfBirth->clear();
    ui->lineEditC2__4_sSN->clear();
}

void TrustyBank::on_pushC2__4_changeTheData_clicked()
{
    QString accountNumber = ui->tableC1_clientAccountData->item(0, 0)->text();
    Client* client = nullptr;
    for (Client& c : m_clients) 
    {
        if (c.getAccountNumber() == accountNumber) 
        {
            client = &c;
            break;
        }
    }

    if (!client)
    {
        QMessageBox::warning(this, "Client Not Found", "Client with the specified account number was not found.");
        return;
    }

    bool isValid = true;
    QString firstName = ui->lineEditC2__4_firstName->text();
    if (!firstName.isEmpty() && validateInput(firstName, "firstName"))
    {
        client->setFirstName(firstName);
    }
    else if (!firstName.isEmpty())
    {
        isValid = false;
    }

    QString lastName = ui->lineEditC2__4_lastName->text();
    if (!lastName.isEmpty() && validateInput(lastName, "lastNameWithHyphen")) 
    {
        client->setLastName(lastName);
    }
    else if (!lastName.isEmpty()) 
    {
        isValid = false;
    }
    
    QString prefix = "123 ";
    QString phoneNumber = ui->lineEditC2__4_phoneNumber->text();
    if (!phoneNumber.isEmpty() && validateInput(phoneNumber, "phoneNumber")) 
    {
        client->setPhoneNumber(prefix + phoneNumber);
    }
    else if (!phoneNumber.isEmpty()) 
    {
        isValid = false;
    }

    QString address = ui->lineEditC2__4_adress->text();
    if (!address.isEmpty() && validateInput(address, "address")) 
    {
        client->setAddress(address);
    }
    else if (!address.isEmpty()) 
    {
        isValid = false;
    }

    QString dateOfBirth = ui->lineEditC2__4_dateOfBirth->text();
    if (!dateOfBirth.isEmpty() && validateInput(dateOfBirth, "dob")) 
    {
        QDate newDate = QDate::fromString(dateOfBirth, "MM/dd/yyyy");
        if (newDate.isValid())
        {
            client->setDateOfBirth(newDate);
        }
        else 
        {
            isValid = false;
        }
    }
    else if (!dateOfBirth.isEmpty()) 
    {
        isValid = false;
    }

    QString ssn = ui->lineEditC2__4_sSN->text();
    if (!ssn.isEmpty() && validateInput(ssn, "ssn")) 
    {
        client->setSSN(ssn);
    }
    else if (!ssn.isEmpty()) 
    {
        isValid = false;
    }

    if (isValid)
    {
        loadClientData(temp_client);
        showClients();
        QMessageBox::information(this, "Success", "The client's data has been successfully updated.");
    }
    else
    {
        QMessageBox::warning(this, "Invalid Data", "Data editing is not possible due to incorrect information. Please verify the client's data.");
    }
    resetClientDataEditing();
}

void TrustyBank::pushC2__4_sSNInfo_clicked()
{
    QMessageBox::information(this, "SSN Editing Info", "SSN can only be edited if a mistake was made by the cashier during account creation.");
}

void TrustyBank::pushC2__4_dateOfBirthInfo_clicked()
{
    QMessageBox::information(this, "Date of Birth Editing Info", "Date of birth can only be edited if a mistake was made by the cashier during account creation.");
}

void TrustyBank::on_pushC2__4_back_clicked()
{
    resetClientDataEditing();
    setupTabs("Client View");
}