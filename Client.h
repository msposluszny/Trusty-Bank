#pragma once

#include <QString>
#include <QDate>

class Client
{
public:
    Client(const QString& firstName, const QString& lastName, const QString& phoneNumber, const QDate& dateOfBirth, const QString& address, const QString& ssn, const QString& accountNumber, double balance);
    Client();

    QString getFirstName() const;
    QString getLastName() const;
    QString getPhoneNumber() const;
    QDate getDateOfBirth() const;
    QString getAddress() const;
    QString getSSN() const;
    QString getAccountNumber() const;
    double getBalance() const;
    void setBalance(double balance);
    void setFirstName(const QString& firstName);
    void setLastName(const QString& lastName);
    void setPhoneNumber(const QString& phoneNumber);
    void setDateOfBirth(const QDate& dateOfBirth);
    void setAddress(const QString& address);
    void setSSN(const QString& ssn);

private:
    QString m_firstName;
    QString m_lastName;
    QString m_phoneNumber;
    QDate m_dateOfBirth;
    QString m_address;
    QString m_ssn;
    QString m_accountNumber;
    double m_balance;
};