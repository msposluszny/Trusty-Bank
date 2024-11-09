#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TrustyBank.h"
#include <memory>
#include <QString>
#include <QMap>
#include <QList>
#include "Client.h"

QT_BEGIN_NAMESPACE
namespace Ui { class TrustyBankClass; }
QT_END_NAMESPACE

class TrustyBank : public QMainWindow
{
    Q_OBJECT

public:
    TrustyBank(QWidget* parent = nullptr);
    ~TrustyBank();

private slots:
    //A1 Login
    void on_pushA1_login_clicked();
    void on_pushA1_register_clicked();
    //A2 Registration
    void on_pushA2_register_clicked(); 
    //B1 List of Clients
    void on_pushB1_clientView_clicked();
    void pushB1_adviceInfo_clicked();
    void on_pushB1_search_clicked();
    //B2__1 New Client
    void on_pushB2__1_openAnAccount_clicked();
    void on_pushB2__1_sSNInfo_clicked();
    void on_pushB2__1_prospectInfo_clicked();
    //B2__2 New Account
    void on_pushB2__2_openAnAccount_clicked();
    void on_pushB2__2_back_clicked();
    //B3 Treasury Menagement
    void on_pushB3_proceed_clicked();    
    void on_pushB3_doIt_clicked();
    void on_pushB3_allowanceInfo_clicked();
    void pushB3_remittanceInfo_clicked();
    //B3__2 Cash Remittance
    void on_pushB3__2_remittance_clicked();
    void on_pushB3__2_back_clicked();
    //B4 Logout
    void on_pushB4_logout_clicked();
    //B4__2 Cashier Tally
    void on_pushB4__2_reconcile_clicked();
    //C1 Client View
    void on_pushC1_deposit_clicked();
    void on_pushC1_withdrawal_clicked();
    void on_pushC1_transfer_clicked();
    void on_pushC1_clientDataEditing_clicked();    
    void on_pushC1_back_clicked();
    //C2__1 Deposit
    void on_pushC2__1_deposit_clicked();    
    void on_pushC2__1_back_clicked();
    //C2__2 Withdrawal
    void on_pushC2__2_back_clicked();
    void on_pushC2__2_withdraw_clicked();
    //C2__3 Transfer
    void on_pushC2__3_transfer_clicked();
    void on_pushC2__3_back_clicked();
    //C2__4 Client Data Editing
    void on_pushC2__4_changeTheData_clicked();
    void pushC2__4_sSNInfo_clicked();
    void pushC2__4_dateOfBirthInfo_clicked();
    void on_pushC2__4_back_clicked();    

private:
    bool validateInput(const QString& input, const QString& type);
    void loadUsers();
    void setupTabs(const QString& level);
    //A1 Login
    void resetLogin();
    void generateClients();
    //A2 Registration
    void resetRegistration();
    bool validatePassword(const QString& password);
    void saveUser(const QString& username, const QString& password, const QMap<QString, int>& cash);
    //B1 List of Clients
    void loadClientData(const Client& client);
    void showClients();
    //B2__1 New Client
    void resetNewClient();
    //B2__2 New Account
    void resetNewAccount();
    //B3 Treasury Menagement
    void updateCoinTable();
    void updateBillTable();
    void updateCashValueTable();
    //B3__2 Cash Remittance
    void resetCashRemittance();
    //B4 Logout
    //************************************************************
    //B4__2 Cashier Tally
    void resetCashierTally();
    bool checkCashReconciliation();
    //C1 Client View
    //************************************************************
    //C2__1 Deposit
    void resetDeposit();
    bool validateDepositAmount();
    //C2__2 Withdrawal
    void resetWithdrawal();
    //C2__3 Transfer
    void resetTransfer();
    //C2__4 Client Data Editing
    void resetClientDataEditing();
    //Variables
    int discrepancyCount;
    bool clientsGenerated;
    std::unique_ptr<Ui::TrustyBankClass> ui;
    QString currentLoggedInUser;
    Client temp_client;
    QList<Client> m_clients;
    QMap<QString, QString> users;
    QMap<QString, QString> temporaryClientData;  
    QMap<QString, QMap<QString, int>> userCash;
};