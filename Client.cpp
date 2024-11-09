#include "stdafx.h"
#include "Client.h"

Client::Client(const QString& firstName, const QString& lastName, const QString& phoneNumber, const QDate& dateOfBirth, const QString& address, const QString& ssn, const QString& accountNumber, double balance)
    : m_firstName(firstName), m_lastName(lastName), m_phoneNumber(phoneNumber), m_dateOfBirth(dateOfBirth), m_address(address), m_ssn(ssn), m_accountNumber(accountNumber), m_balance(balance)
{
}

Client::Client()
    : m_firstName(""), m_lastName(""), m_phoneNumber(""), m_dateOfBirth(QDate()), m_address(""), m_ssn(""), m_accountNumber(""), m_balance(0.0)
{
    //Default constructor
}

QString Client::getFirstName() const { return m_firstName; }
QString Client::getLastName() const { return m_lastName; }
QString Client::getPhoneNumber() const { return m_phoneNumber; }
QDate Client::getDateOfBirth() const { return m_dateOfBirth; }
QString Client::getAddress() const { return m_address; }
QString Client::getSSN() const { return m_ssn; }
QString Client::getAccountNumber() const { return m_accountNumber; }
double Client::getBalance() const { return m_balance; }

void Client::setBalance(double balance)
{
    m_balance = balance;
}

void Client::setFirstName(const QString& firstName)
{
    m_firstName = firstName;
}

void Client::setLastName(const QString& lastName)
{
    m_lastName = lastName;
}

void Client::setPhoneNumber(const QString& phoneNumber)
{
    m_phoneNumber = phoneNumber;
}

void Client::setDateOfBirth(const QDate& dateOfBirth)
{
    m_dateOfBirth = dateOfBirth;
}

void Client::setAddress(const QString& address)
{
    m_address = address;
}

void Client::setSSN(const QString& ssn)
{
    m_ssn = ssn;
}