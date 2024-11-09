/********************************************************************************
** Form generated from reading UI file 'TrustyBank.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRUSTYBANK_H
#define UI_TRUSTYBANK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrustyBankClass
{
public:
    QWidget *centralWidget;
    QTabWidget *trustyBankInterface;
    QWidget *A2Registration;
    QLabel *labelA2_firstName;
    QLineEdit *lineEditA2_firstName;
    QTextEdit *textA2_welcomeMessage;
    QLabel *labelA2_lastName;
    QLineEdit *lineEditA2_lastName;
    QTextEdit *textA2_rulesForPassword;
    QLabel *labelA2_enterPassword;
    QLabel *labelA2_confirmPassword;
    QLineEdit *lineEditA2_password;
    QLineEdit *lineEditA2_confirmPassword;
    QPushButton *pushA2_register;
    QWidget *A1Login;
    QLabel *labelA1_username;
    QLabel *labelA1_password;
    QLineEdit *lineEditA1_loginUsername;
    QLineEdit *lineEditA1_loginPassword;
    QPushButton *pushA1_login;
    QPushButton *pushA1_register;
    QLabel *labelA1_newEmployee;
    QWidget *B1ListOfClients;
    QTableWidget *tableB1_clients;
    QPushButton *pushB1_clientView;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *labelB1_phoneNumber;
    QLineEdit *lineEditB1_phoneNumber;
    QLabel *labelB1_dateOfBirth;
    QLineEdit *lineEditB1_dateOfBirth;
    QLabel *labelB1_adress;
    QLineEdit *lineEditB1_adress;
    QLabel *labelB1_sSN;
    QLineEdit *lineEditB1_sSN;
    QLabel *labelB1_accountNumber;
    QLineEdit *lineEditB1_accountNumber;
    QPushButton *pushB1_search;
    QLabel *labelB1_advice;
    QPushButton *pushB1_adviceInfo;
    QWidget *B2__1NewClient;
    QPushButton *pushB2__1_openAnAccount;
    QWidget *layoutWidget1;
    QFormLayout *formLayout_2;
    QLabel *labelB2__1_firstName;
    QLineEdit *lineEditB2__1_firstName;
    QLabel *labelB2__1_lastName;
    QLineEdit *lineEditB2__1_lastName;
    QLabel *labelB2__1_sSn;
    QLineEdit *lineEditB2__1_sSN;
    QLabel *labelB2__1_isResident;
    QCheckBox *buttonBoxB2__1_yes;
    QCheckBox *buttonBoxB2__1_no;
    QPushButton *pushB2__1_sSNInfo;
    QPushButton *pushB2__1_prospectInfo;
    QWidget *B2__2NewAccount;
    QPushButton *pushB2__2_back;
    QPushButton *pushB2__2_openAnAccount;
    QWidget *layoutWidget2;
    QFormLayout *formLayout_3;
    QLabel *labelB2__2_phoneNumber;
    QLineEdit *lineEditB2__2_phoneNumber;
    QLabel *labelB2__2_dateOfBirth;
    QLineEdit *lineEditB2__2_dateOfBirth;
    QLabel *labelB2__2_adress;
    QLineEdit *lineEditB2__2_adress;
    QWidget *B3TreasuryMenagement;
    QTableWidget *tableB3_bills;
    QTableWidget *tableB3_coins;
    QTableWidget *tableB3_cashValue;
    QPushButton *pushB3_doIt;
    QLabel *labelB3_receiveFrom;
    QPushButton *pushB3_allowanceInfo;
    QLabel *labelB3_remitTo;
    QPushButton *pushB3_proceed;
    QPushButton *pushB3_remittanceInfo;
    QWidget *B3__2CashRemittance;
    QPushButton *pushB3__2_remittance;
    QPushButton *pushB3__2_back;
    QLineEdit *lineEditB3__2_ammount;
    QLabel *labelB3__2_ammount;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditB3__2_cent01;
    QLineEdit *lineEditB3__2_cents05;
    QLineEdit *lineEditB3__2_cents10;
    QLineEdit *lineEditB3__2_cents25;
    QLineEdit *lineEditB3__2_cents50;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelB3__2_cent01;
    QLabel *labelB3__2_cents05;
    QLabel *labelB3__2_cents10;
    QLabel *labelB3__2_cents25;
    QLabel *labelB3__2_cents50;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *lineEditB3__2_dollar001;
    QLineEdit *lineEditB3__2_dollars005;
    QLineEdit *lineEditB3__2_dollars010;
    QLineEdit *lineEditB3__2_dollars020;
    QLineEdit *lineEditB3__2_dollars050;
    QLineEdit *lineEditB3__2_dollars100;
    QWidget *layoutWidget6;
    QVBoxLayout *verticalLayout_4;
    QLabel *labelB3__2_dollar001;
    QLabel *labelB3__2_dollars005;
    QLabel *labelB3__2_dollars010;
    QLabel *labelB3__2_dollars020;
    QLabel *labelB3__2_dollars050;
    QLabel *labelB3__2_dollars100;
    QWidget *B4Logout;
    QTextEdit *textB4_goodbye;
    QPushButton *pushB4_logout;
    QWidget *B4__2CashierTally;
    QWidget *layoutWidget_25;
    QVBoxLayout *verticalLayout_25;
    QLineEdit *lineEditB4__2_cent01;
    QLineEdit *lineEditB4__2_cents05;
    QLineEdit *lineEditB4__2_cents10;
    QLineEdit *lineEditB4__2_cents25;
    QLineEdit *lineEditB4__2_cents50;
    QWidget *layoutWidget_26;
    QVBoxLayout *verticalLayout_26;
    QLabel *labelB4__2_cent01;
    QLabel *labelB4__2_cents05;
    QLabel *labelB4__2_cents10;
    QLabel *labelB4__2_cents25;
    QLabel *labelB4__2_cents50;
    QWidget *layoutWidget_27;
    QVBoxLayout *verticalLayout_27;
    QLabel *labelB4__2_dollar001;
    QLabel *labelB4__2_dollars005;
    QLabel *labelB4__2_dollars010;
    QLabel *labelB4__2_dollars020;
    QLabel *labelB4__2_dollars050;
    QLabel *labelB4__2_dollars100;
    QWidget *layoutWidget_28;
    QVBoxLayout *verticalLayout_28;
    QLineEdit *lineEditB4__2_dollar001;
    QLineEdit *lineEditB4__2_dollars005;
    QLineEdit *lineEditB4__2_dollars010;
    QLineEdit *lineEditB4__2_dollars020;
    QLineEdit *lineEditB4__2_dollars050;
    QLineEdit *lineEditB4__2_dollars100;
    QPushButton *pushB4__2_reconcile;
    QWidget *C1ClientView;
    QPushButton *pushC1_back;
    QWidget *layoutWidget7;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushC1_deposit;
    QPushButton *pushC1_withdrawal;
    QPushButton *pushC1_transfer;
    QPushButton *pushC1_clientDataEditing;
    QTableWidget *tableC1_clientPersonalData;
    QTableWidget *tableC1_clientAccountData;
    QWidget *C2__1Deposit;
    QPushButton *pushC2__1_back;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *lineEditC2__1_cent01;
    QLineEdit *lineEditC2__1_cents05;
    QLineEdit *lineEditC2__1_cents10;
    QLineEdit *lineEditC2__1_cents25;
    QLineEdit *lineEditC2__1_cents50;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelC2__1_cent01;
    QLabel *labelC2__1_cents05;
    QLabel *labelC2__1_cents10;
    QLabel *labelC2__1_cents25;
    QLabel *labelC2__1_cents50;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *labelC2__1_dollar001;
    QLabel *labelC2__1_dollars005;
    QLabel *labelC2__1_dollars010;
    QLabel *labelC2__1_dollars020;
    QLabel *labelC2__1_dollars050;
    QLabel *labelC2__1_dollars100;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_10;
    QLineEdit *lineEditC2__1_dollar001;
    QLineEdit *lineEditC2__1_dollars005;
    QLineEdit *lineEditC2__1_dollars010;
    QLineEdit *lineEditC2__1_dollars020;
    QLineEdit *lineEditC2__1_dollars050;
    QLineEdit *lineEditC2__1_dollars100;
    QTableWidget *tableC2__1_clientAccountData;
    QPushButton *pushC2__1_deposit;
    QLabel *labelC2__1_ammount;
    QLineEdit *lineEditC2__1_ammount;
    QWidget *C2__2Withdrawal;
    QPushButton *pushC2__2_back;
    QWidget *layoutWidget_5;
    QVBoxLayout *verticalLayout_8;
    QLabel *labelC2__2_dollar001;
    QLabel *labelC2__2_dollars005;
    QLabel *labelC2__2_dollars010;
    QLabel *labelC2__2_dollars020;
    QLabel *labelC2__2_dollars050;
    QLabel *labelC2__2_dollars100;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_9;
    QLineEdit *lineEditC2__2_dollar001;
    QLineEdit *lineEditC2__2_dollars005;
    QLineEdit *lineEditC2__2_dollars010;
    QLineEdit *lineEditC2__2_dollars020;
    QLineEdit *lineEditC2__2_dollars050;
    QLineEdit *lineEditC2__2_dollars100;
    QWidget *layoutWidget_8;
    QVBoxLayout *verticalLayout_11;
    QLabel *labelC2__2_cent01;
    QLabel *labelC2__2_cents05;
    QLabel *labelC2__2_cents10;
    QLabel *labelC2__2_cents25;
    QLabel *labelC2__2_cents50;
    QWidget *layoutWidget_9;
    QVBoxLayout *verticalLayout_12;
    QLineEdit *lineEditC2__2_cent01;
    QLineEdit *lineEditC2__2_cents05;
    QLineEdit *lineEditC2__2_cents10;
    QLineEdit *lineEditC2__2_cents25;
    QLineEdit *lineEditC2__2_cents50;
    QTableWidget *tableC2__2_clientAccountData;
    QPushButton *pushC2__2_withdraw;
    QLineEdit *lineEditC2__2_ammount;
    QLabel *labelC2__2_ammount;
    QWidget *C2__3Transfer;
    QPushButton *pushC2__3_back;
    QLabel *labelC2__3_firstName;
    QLabel *labelC2__3_amount;
    QLineEdit *lineEditC2__3__accountNumber;
    QLabel *labelC2__3_accountNumber;
    QLineEdit *lineEditC2__3__firstName;
    QLabel *labelC2__3_lastName;
    QLineEdit *lineEditC2__3__lastName;
    QLineEdit *lineEditC2__3__amount;
    QPushButton *pushC2__3_transfer;
    QWidget *C2__4ClientDataEditing;
    QPushButton *pushC2__4_back;
    QLabel *labelC2__4_phoneNumber;
    QLineEdit *lineEditC2__4_firstName;
    QLabel *labelC2__4_firstName;
    QLineEdit *lineEditC2__4_adress;
    QLineEdit *lineEditC2__4_lastName;
    QLabel *labelC2__4_adress;
    QLabel *labelC2__4_lastName;
    QLineEdit *lineEditC2__4_phoneNumber;
    QLineEdit *lineEditC2__4_dateOfBirth;
    QLabel *labelC2__4_dateOfBirth;
    QPushButton *pushC2__4_changeTheData;
    QLabel *labelC2__4_sSN;
    QLineEdit *lineEditC2__4_sSN;
    QPushButton *pushC2__4_dateOfBirthInfo;
    QPushButton *pushC2__4_sSNInfo;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TrustyBankClass)
    {
        if (TrustyBankClass->objectName().isEmpty())
            TrustyBankClass->setObjectName("TrustyBankClass");
        TrustyBankClass->resize(746, 481);
        centralWidget = new QWidget(TrustyBankClass);
        centralWidget->setObjectName("centralWidget");
        trustyBankInterface = new QTabWidget(centralWidget);
        trustyBankInterface->setObjectName("trustyBankInterface");
        trustyBankInterface->setGeometry(QRect(0, 0, 721, 646));
        A2Registration = new QWidget();
        A2Registration->setObjectName("A2Registration");
        labelA2_firstName = new QLabel(A2Registration);
        labelA2_firstName->setObjectName("labelA2_firstName");
        labelA2_firstName->setGeometry(QRect(40, 170, 71, 16));
        lineEditA2_firstName = new QLineEdit(A2Registration);
        lineEditA2_firstName->setObjectName("lineEditA2_firstName");
        lineEditA2_firstName->setGeometry(QRect(120, 170, 181, 24));
        textA2_welcomeMessage = new QTextEdit(A2Registration);
        textA2_welcomeMessage->setObjectName("textA2_welcomeMessage");
        textA2_welcomeMessage->setGeometry(QRect(10, 0, 691, 151));
        labelA2_lastName = new QLabel(A2Registration);
        labelA2_lastName->setObjectName("labelA2_lastName");
        labelA2_lastName->setGeometry(QRect(440, 170, 71, 16));
        lineEditA2_lastName = new QLineEdit(A2Registration);
        lineEditA2_lastName->setObjectName("lineEditA2_lastName");
        lineEditA2_lastName->setGeometry(QRect(520, 170, 181, 24));
        textA2_rulesForPassword = new QTextEdit(A2Registration);
        textA2_rulesForPassword->setObjectName("textA2_rulesForPassword");
        textA2_rulesForPassword->setGeometry(QRect(10, 230, 691, 61));
        labelA2_enterPassword = new QLabel(A2Registration);
        labelA2_enterPassword->setObjectName("labelA2_enterPassword");
        labelA2_enterPassword->setGeometry(QRect(20, 310, 91, 21));
        labelA2_confirmPassword = new QLabel(A2Registration);
        labelA2_confirmPassword->setObjectName("labelA2_confirmPassword");
        labelA2_confirmPassword->setGeometry(QRect(400, 310, 111, 20));
        lineEditA2_password = new QLineEdit(A2Registration);
        lineEditA2_password->setObjectName("lineEditA2_password");
        lineEditA2_password->setGeometry(QRect(120, 310, 181, 24));
        lineEditA2_confirmPassword = new QLineEdit(A2Registration);
        lineEditA2_confirmPassword->setObjectName("lineEditA2_confirmPassword");
        lineEditA2_confirmPassword->setGeometry(QRect(520, 310, 181, 24));
        pushA2_register = new QPushButton(A2Registration);
        pushA2_register->setObjectName("pushA2_register");
        pushA2_register->setGeometry(QRect(620, 350, 81, 24));
        trustyBankInterface->addTab(A2Registration, QString());
        labelA2_firstName->raise();
        lineEditA2_firstName->raise();
        textA2_welcomeMessage->raise();
        labelA2_lastName->raise();
        lineEditA2_lastName->raise();
        textA2_rulesForPassword->raise();
        labelA2_enterPassword->raise();
        labelA2_confirmPassword->raise();
        lineEditA2_confirmPassword->raise();
        pushA2_register->raise();
        lineEditA2_password->raise();
        A1Login = new QWidget();
        A1Login->setObjectName("A1Login");
        labelA1_username = new QLabel(A1Login);
        labelA1_username->setObjectName("labelA1_username");
        labelA1_username->setGeometry(QRect(200, 130, 71, 16));
        labelA1_password = new QLabel(A1Login);
        labelA1_password->setObjectName("labelA1_password");
        labelA1_password->setGeometry(QRect(200, 180, 61, 16));
        lineEditA1_loginUsername = new QLineEdit(A1Login);
        lineEditA1_loginUsername->setObjectName("lineEditA1_loginUsername");
        lineEditA1_loginUsername->setGeometry(QRect(280, 130, 161, 24));
        lineEditA1_loginPassword = new QLineEdit(A1Login);
        lineEditA1_loginPassword->setObjectName("lineEditA1_loginPassword");
        lineEditA1_loginPassword->setGeometry(QRect(280, 180, 161, 24));
        pushA1_login = new QPushButton(A1Login);
        pushA1_login->setObjectName("pushA1_login");
        pushA1_login->setGeometry(QRect(360, 220, 81, 24));
        pushA1_register = new QPushButton(A1Login);
        pushA1_register->setObjectName("pushA1_register");
        pushA1_register->setGeometry(QRect(580, 170, 80, 24));
        labelA1_newEmployee = new QLabel(A1Login);
        labelA1_newEmployee->setObjectName("labelA1_newEmployee");
        labelA1_newEmployee->setGeometry(QRect(550, 130, 151, 31));
        trustyBankInterface->addTab(A1Login, QString());
        B1ListOfClients = new QWidget();
        B1ListOfClients->setObjectName("B1ListOfClients");
        tableB1_clients = new QTableWidget(B1ListOfClients);
        if (tableB1_clients->columnCount() < 7)
            tableB1_clients->setColumnCount(7);
        QFont font;
        font.setFamilies({QString::fromUtf8("Baskerville Old Face")});
        font.setPointSize(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableB1_clients->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font);
        tableB1_clients->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font);
        tableB1_clients->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font);
        tableB1_clients->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font);
        tableB1_clients->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font);
        tableB1_clients->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font);
        tableB1_clients->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableB1_clients->setObjectName("tableB1_clients");
        tableB1_clients->setGeometry(QRect(0, 0, 711, 251));
        pushB1_clientView = new QPushButton(B1ListOfClients);
        pushB1_clientView->setObjectName("pushB1_clientView");
        pushB1_clientView->setGeometry(QRect(610, 260, 91, 24));
        layoutWidget = new QWidget(B1ListOfClients);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 260, 281, 151));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        labelB1_phoneNumber = new QLabel(layoutWidget);
        labelB1_phoneNumber->setObjectName("labelB1_phoneNumber");

        formLayout->setWidget(0, QFormLayout::LabelRole, labelB1_phoneNumber);

        lineEditB1_phoneNumber = new QLineEdit(layoutWidget);
        lineEditB1_phoneNumber->setObjectName("lineEditB1_phoneNumber");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditB1_phoneNumber);

        labelB1_dateOfBirth = new QLabel(layoutWidget);
        labelB1_dateOfBirth->setObjectName("labelB1_dateOfBirth");

        formLayout->setWidget(1, QFormLayout::LabelRole, labelB1_dateOfBirth);

        lineEditB1_dateOfBirth = new QLineEdit(layoutWidget);
        lineEditB1_dateOfBirth->setObjectName("lineEditB1_dateOfBirth");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditB1_dateOfBirth);

        labelB1_adress = new QLabel(layoutWidget);
        labelB1_adress->setObjectName("labelB1_adress");

        formLayout->setWidget(2, QFormLayout::LabelRole, labelB1_adress);

        lineEditB1_adress = new QLineEdit(layoutWidget);
        lineEditB1_adress->setObjectName("lineEditB1_adress");

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditB1_adress);

        labelB1_sSN = new QLabel(layoutWidget);
        labelB1_sSN->setObjectName("labelB1_sSN");

        formLayout->setWidget(3, QFormLayout::LabelRole, labelB1_sSN);

        lineEditB1_sSN = new QLineEdit(layoutWidget);
        lineEditB1_sSN->setObjectName("lineEditB1_sSN");

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditB1_sSN);

        labelB1_accountNumber = new QLabel(layoutWidget);
        labelB1_accountNumber->setObjectName("labelB1_accountNumber");

        formLayout->setWidget(4, QFormLayout::LabelRole, labelB1_accountNumber);

        lineEditB1_accountNumber = new QLineEdit(layoutWidget);
        lineEditB1_accountNumber->setObjectName("lineEditB1_accountNumber");

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEditB1_accountNumber);

        pushB1_search = new QPushButton(B1ListOfClients);
        pushB1_search->setObjectName("pushB1_search");
        pushB1_search->setGeometry(QRect(310, 380, 80, 24));
        labelB1_advice = new QLabel(B1ListOfClients);
        labelB1_advice->setObjectName("labelB1_advice");
        labelB1_advice->setGeometry(QRect(390, 310, 271, 24));
        pushB1_adviceInfo = new QPushButton(B1ListOfClients);
        pushB1_adviceInfo->setObjectName("pushB1_adviceInfo");
        pushB1_adviceInfo->setGeometry(QRect(370, 310, 16, 24));
        trustyBankInterface->addTab(B1ListOfClients, QString());
        B2__1NewClient = new QWidget();
        B2__1NewClient->setObjectName("B2__1NewClient");
        pushB2__1_openAnAccount = new QPushButton(B2__1NewClient);
        pushB2__1_openAnAccount->setObjectName("pushB2__1_openAnAccount");
        pushB2__1_openAnAccount->setGeometry(QRect(469, 240, 101, 24));
        layoutWidget1 = new QWidget(B2__1NewClient);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(190, 80, 381, 142));
        formLayout_2 = new QFormLayout(layoutWidget1);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        labelB2__1_firstName = new QLabel(layoutWidget1);
        labelB2__1_firstName->setObjectName("labelB2__1_firstName");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, labelB2__1_firstName);

        lineEditB2__1_firstName = new QLineEdit(layoutWidget1);
        lineEditB2__1_firstName->setObjectName("lineEditB2__1_firstName");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEditB2__1_firstName);

        labelB2__1_lastName = new QLabel(layoutWidget1);
        labelB2__1_lastName->setObjectName("labelB2__1_lastName");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, labelB2__1_lastName);

        lineEditB2__1_lastName = new QLineEdit(layoutWidget1);
        lineEditB2__1_lastName->setObjectName("lineEditB2__1_lastName");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEditB2__1_lastName);

        labelB2__1_sSn = new QLabel(layoutWidget1);
        labelB2__1_sSn->setObjectName("labelB2__1_sSn");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, labelB2__1_sSn);

        lineEditB2__1_sSN = new QLineEdit(layoutWidget1);
        lineEditB2__1_sSN->setObjectName("lineEditB2__1_sSN");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEditB2__1_sSN);

        labelB2__1_isResident = new QLabel(layoutWidget1);
        labelB2__1_isResident->setObjectName("labelB2__1_isResident");

        formLayout_2->setWidget(3, QFormLayout::LabelRole, labelB2__1_isResident);

        buttonBoxB2__1_yes = new QCheckBox(layoutWidget1);
        buttonBoxB2__1_yes->setObjectName("buttonBoxB2__1_yes");

        formLayout_2->setWidget(3, QFormLayout::FieldRole, buttonBoxB2__1_yes);

        buttonBoxB2__1_no = new QCheckBox(layoutWidget1);
        buttonBoxB2__1_no->setObjectName("buttonBoxB2__1_no");

        formLayout_2->setWidget(4, QFormLayout::FieldRole, buttonBoxB2__1_no);

        pushB2__1_sSNInfo = new QPushButton(B2__1NewClient);
        pushB2__1_sSNInfo->setObjectName("pushB2__1_sSNInfo");
        pushB2__1_sSNInfo->setGeometry(QRect(160, 140, 21, 20));
        pushB2__1_prospectInfo = new QPushButton(B2__1NewClient);
        pushB2__1_prospectInfo->setObjectName("pushB2__1_prospectInfo");
        pushB2__1_prospectInfo->setGeometry(QRect(160, 170, 21, 20));
        trustyBankInterface->addTab(B2__1NewClient, QString());
        B2__2NewAccount = new QWidget();
        B2__2NewAccount->setObjectName("B2__2NewAccount");
        pushB2__2_back = new QPushButton(B2__2NewAccount);
        pushB2__2_back->setObjectName("pushB2__2_back");
        pushB2__2_back->setGeometry(QRect(20, 360, 80, 24));
        pushB2__2_openAnAccount = new QPushButton(B2__2NewAccount);
        pushB2__2_openAnAccount->setObjectName("pushB2__2_openAnAccount");
        pushB2__2_openAnAccount->setGeometry(QRect(430, 240, 101, 24));
        layoutWidget2 = new QWidget(B2__2NewAccount);
        layoutWidget2->setObjectName("layoutWidget2");
        layoutWidget2->setGeometry(QRect(220, 130, 311, 91));
        formLayout_3 = new QFormLayout(layoutWidget2);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        labelB2__2_phoneNumber = new QLabel(layoutWidget2);
        labelB2__2_phoneNumber->setObjectName("labelB2__2_phoneNumber");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, labelB2__2_phoneNumber);

        lineEditB2__2_phoneNumber = new QLineEdit(layoutWidget2);
        lineEditB2__2_phoneNumber->setObjectName("lineEditB2__2_phoneNumber");

        formLayout_3->setWidget(0, QFormLayout::FieldRole, lineEditB2__2_phoneNumber);

        labelB2__2_dateOfBirth = new QLabel(layoutWidget2);
        labelB2__2_dateOfBirth->setObjectName("labelB2__2_dateOfBirth");

        formLayout_3->setWidget(1, QFormLayout::LabelRole, labelB2__2_dateOfBirth);

        lineEditB2__2_dateOfBirth = new QLineEdit(layoutWidget2);
        lineEditB2__2_dateOfBirth->setObjectName("lineEditB2__2_dateOfBirth");

        formLayout_3->setWidget(1, QFormLayout::FieldRole, lineEditB2__2_dateOfBirth);

        labelB2__2_adress = new QLabel(layoutWidget2);
        labelB2__2_adress->setObjectName("labelB2__2_adress");

        formLayout_3->setWidget(2, QFormLayout::LabelRole, labelB2__2_adress);

        lineEditB2__2_adress = new QLineEdit(layoutWidget2);
        lineEditB2__2_adress->setObjectName("lineEditB2__2_adress");

        formLayout_3->setWidget(2, QFormLayout::FieldRole, lineEditB2__2_adress);

        trustyBankInterface->addTab(B2__2NewAccount, QString());
        B3TreasuryMenagement = new QWidget();
        B3TreasuryMenagement->setObjectName("B3TreasuryMenagement");
        tableB3_bills = new QTableWidget(B3TreasuryMenagement);
        if (tableB3_bills->columnCount() < 1)
            tableB3_bills->setColumnCount(1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Baskerville Old Face")});
        font1.setPointSize(12);
        font1.setBold(true);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font1);
        tableB3_bills->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        if (tableB3_bills->rowCount() < 6)
            tableB3_bills->setRowCount(6);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Baskerville Old Face")});
        font2.setPointSize(12);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem8->setFont(font2);
        tableB3_bills->setVerticalHeaderItem(0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem9->setFont(font2);
        tableB3_bills->setVerticalHeaderItem(1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem10->setFont(font2);
        tableB3_bills->setVerticalHeaderItem(2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem11->setFont(font2);
        tableB3_bills->setVerticalHeaderItem(3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem12->setFont(font2);
        tableB3_bills->setVerticalHeaderItem(4, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem13->setFont(font2);
        tableB3_bills->setVerticalHeaderItem(5, __qtablewidgetitem13);
        tableB3_bills->setObjectName("tableB3_bills");
        tableB3_bills->setGeometry(QRect(20, 200, 151, 201));
        tableB3_coins = new QTableWidget(B3TreasuryMenagement);
        if (tableB3_coins->columnCount() < 1)
            tableB3_coins->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setFont(font1);
        tableB3_coins->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        if (tableB3_coins->rowCount() < 5)
            tableB3_coins->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem15->setFont(font2);
        tableB3_coins->setVerticalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem16->setFont(font2);
        tableB3_coins->setVerticalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem17->setFont(font2);
        tableB3_coins->setVerticalHeaderItem(2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem18->setFont(font2);
        tableB3_coins->setVerticalHeaderItem(3, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setTextAlignment(Qt::AlignCenter);
        __qtablewidgetitem19->setFont(font2);
        tableB3_coins->setVerticalHeaderItem(4, __qtablewidgetitem19);
        tableB3_coins->setObjectName("tableB3_coins");
        tableB3_coins->setGeometry(QRect(20, 20, 151, 171));
        tableB3_cashValue = new QTableWidget(B3TreasuryMenagement);
        if (tableB3_cashValue->columnCount() < 1)
            tableB3_cashValue->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setFont(font1);
        tableB3_cashValue->setHorizontalHeaderItem(0, __qtablewidgetitem20);
        if (tableB3_cashValue->rowCount() < 3)
            tableB3_cashValue->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setFont(font2);
        tableB3_cashValue->setVerticalHeaderItem(0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setFont(font2);
        tableB3_cashValue->setVerticalHeaderItem(1, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setFont(font2);
        tableB3_cashValue->setVerticalHeaderItem(2, __qtablewidgetitem23);
        tableB3_cashValue->setObjectName("tableB3_cashValue");
        tableB3_cashValue->setGeometry(QRect(380, 30, 211, 111));
        pushB3_doIt = new QPushButton(B3TreasuryMenagement);
        pushB3_doIt->setObjectName("pushB3_doIt");
        pushB3_doIt->setGeometry(QRect(420, 210, 141, 24));
        labelB3_receiveFrom = new QLabel(B3TreasuryMenagement);
        labelB3_receiveFrom->setObjectName("labelB3_receiveFrom");
        labelB3_receiveFrom->setGeometry(QRect(330, 170, 341, 21));
        pushB3_allowanceInfo = new QPushButton(B3TreasuryMenagement);
        pushB3_allowanceInfo->setObjectName("pushB3_allowanceInfo");
        pushB3_allowanceInfo->setGeometry(QRect(300, 170, 16, 24));
        labelB3_remitTo = new QLabel(B3TreasuryMenagement);
        labelB3_remitTo->setObjectName("labelB3_remitTo");
        labelB3_remitTo->setGeometry(QRect(340, 270, 291, 31));
        pushB3_proceed = new QPushButton(B3TreasuryMenagement);
        pushB3_proceed->setObjectName("pushB3_proceed");
        pushB3_proceed->setGeometry(QRect(420, 310, 141, 24));
        pushB3_remittanceInfo = new QPushButton(B3TreasuryMenagement);
        pushB3_remittanceInfo->setObjectName("pushB3_remittanceInfo");
        pushB3_remittanceInfo->setGeometry(QRect(300, 270, 16, 24));
        trustyBankInterface->addTab(B3TreasuryMenagement, QString());
        B3__2CashRemittance = new QWidget();
        B3__2CashRemittance->setObjectName("B3__2CashRemittance");
        pushB3__2_remittance = new QPushButton(B3__2CashRemittance);
        pushB3__2_remittance->setObjectName("pushB3__2_remittance");
        pushB3__2_remittance->setGeometry(QRect(300, 320, 131, 24));
        pushB3__2_back = new QPushButton(B3__2CashRemittance);
        pushB3__2_back->setObjectName("pushB3__2_back");
        pushB3__2_back->setGeometry(QRect(20, 360, 80, 24));
        lineEditB3__2_ammount = new QLineEdit(B3__2CashRemittance);
        lineEditB3__2_ammount->setObjectName("lineEditB3__2_ammount");
        lineEditB3__2_ammount->setGeometry(QRect(140, 30, 113, 24));
        labelB3__2_ammount = new QLabel(B3__2CashRemittance);
        labelB3__2_ammount->setObjectName("labelB3__2_ammount");
        labelB3__2_ammount->setGeometry(QRect(20, 30, 111, 16));
        layoutWidget3 = new QWidget(B3__2CashRemittance);
        layoutWidget3->setObjectName("layoutWidget3");
        layoutWidget3->setGeometry(QRect(200, 90, 110, 211));
        verticalLayout = new QVBoxLayout(layoutWidget3);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lineEditB3__2_cent01 = new QLineEdit(layoutWidget3);
        lineEditB3__2_cent01->setObjectName("lineEditB3__2_cent01");

        verticalLayout->addWidget(lineEditB3__2_cent01);

        lineEditB3__2_cents05 = new QLineEdit(layoutWidget3);
        lineEditB3__2_cents05->setObjectName("lineEditB3__2_cents05");

        verticalLayout->addWidget(lineEditB3__2_cents05);

        lineEditB3__2_cents10 = new QLineEdit(layoutWidget3);
        lineEditB3__2_cents10->setObjectName("lineEditB3__2_cents10");

        verticalLayout->addWidget(lineEditB3__2_cents10);

        lineEditB3__2_cents25 = new QLineEdit(layoutWidget3);
        lineEditB3__2_cents25->setObjectName("lineEditB3__2_cents25");

        verticalLayout->addWidget(lineEditB3__2_cents25);

        lineEditB3__2_cents50 = new QLineEdit(layoutWidget3);
        lineEditB3__2_cents50->setObjectName("lineEditB3__2_cents50");

        verticalLayout->addWidget(lineEditB3__2_cents50);

        layoutWidget4 = new QWidget(B3__2CashRemittance);
        layoutWidget4->setObjectName("layoutWidget4");
        layoutWidget4->setGeometry(QRect(170, 90, 23, 201));
        verticalLayout_2 = new QVBoxLayout(layoutWidget4);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelB3__2_cent01 = new QLabel(layoutWidget4);
        labelB3__2_cent01->setObjectName("labelB3__2_cent01");

        verticalLayout_2->addWidget(labelB3__2_cent01);

        labelB3__2_cents05 = new QLabel(layoutWidget4);
        labelB3__2_cents05->setObjectName("labelB3__2_cents05");

        verticalLayout_2->addWidget(labelB3__2_cents05);

        labelB3__2_cents10 = new QLabel(layoutWidget4);
        labelB3__2_cents10->setObjectName("labelB3__2_cents10");

        verticalLayout_2->addWidget(labelB3__2_cents10);

        labelB3__2_cents25 = new QLabel(layoutWidget4);
        labelB3__2_cents25->setObjectName("labelB3__2_cents25");

        verticalLayout_2->addWidget(labelB3__2_cents25);

        labelB3__2_cents50 = new QLabel(layoutWidget4);
        labelB3__2_cents50->setObjectName("labelB3__2_cents50");

        verticalLayout_2->addWidget(labelB3__2_cents50);

        layoutWidget5 = new QWidget(B3__2CashRemittance);
        layoutWidget5->setObjectName("layoutWidget5");
        layoutWidget5->setGeometry(QRect(460, 50, 110, 251));
        verticalLayout_3 = new QVBoxLayout(layoutWidget5);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEditB3__2_dollar001 = new QLineEdit(layoutWidget5);
        lineEditB3__2_dollar001->setObjectName("lineEditB3__2_dollar001");

        verticalLayout_3->addWidget(lineEditB3__2_dollar001);

        lineEditB3__2_dollars005 = new QLineEdit(layoutWidget5);
        lineEditB3__2_dollars005->setObjectName("lineEditB3__2_dollars005");

        verticalLayout_3->addWidget(lineEditB3__2_dollars005);

        lineEditB3__2_dollars010 = new QLineEdit(layoutWidget5);
        lineEditB3__2_dollars010->setObjectName("lineEditB3__2_dollars010");

        verticalLayout_3->addWidget(lineEditB3__2_dollars010);

        lineEditB3__2_dollars020 = new QLineEdit(layoutWidget5);
        lineEditB3__2_dollars020->setObjectName("lineEditB3__2_dollars020");

        verticalLayout_3->addWidget(lineEditB3__2_dollars020);

        lineEditB3__2_dollars050 = new QLineEdit(layoutWidget5);
        lineEditB3__2_dollars050->setObjectName("lineEditB3__2_dollars050");

        verticalLayout_3->addWidget(lineEditB3__2_dollars050);

        lineEditB3__2_dollars100 = new QLineEdit(layoutWidget5);
        lineEditB3__2_dollars100->setObjectName("lineEditB3__2_dollars100");

        verticalLayout_3->addWidget(lineEditB3__2_dollars100);

        layoutWidget6 = new QWidget(B3__2CashRemittance);
        layoutWidget6->setObjectName("layoutWidget6");
        layoutWidget6->setGeometry(QRect(420, 50, 30, 241));
        verticalLayout_4 = new QVBoxLayout(layoutWidget6);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        labelB3__2_dollar001 = new QLabel(layoutWidget6);
        labelB3__2_dollar001->setObjectName("labelB3__2_dollar001");

        verticalLayout_4->addWidget(labelB3__2_dollar001);

        labelB3__2_dollars005 = new QLabel(layoutWidget6);
        labelB3__2_dollars005->setObjectName("labelB3__2_dollars005");

        verticalLayout_4->addWidget(labelB3__2_dollars005);

        labelB3__2_dollars010 = new QLabel(layoutWidget6);
        labelB3__2_dollars010->setObjectName("labelB3__2_dollars010");

        verticalLayout_4->addWidget(labelB3__2_dollars010);

        labelB3__2_dollars020 = new QLabel(layoutWidget6);
        labelB3__2_dollars020->setObjectName("labelB3__2_dollars020");

        verticalLayout_4->addWidget(labelB3__2_dollars020);

        labelB3__2_dollars050 = new QLabel(layoutWidget6);
        labelB3__2_dollars050->setObjectName("labelB3__2_dollars050");

        verticalLayout_4->addWidget(labelB3__2_dollars050);

        labelB3__2_dollars100 = new QLabel(layoutWidget6);
        labelB3__2_dollars100->setObjectName("labelB3__2_dollars100");

        verticalLayout_4->addWidget(labelB3__2_dollars100);

        trustyBankInterface->addTab(B3__2CashRemittance, QString());
        B4Logout = new QWidget();
        B4Logout->setObjectName("B4Logout");
        textB4_goodbye = new QTextEdit(B4Logout);
        textB4_goodbye->setObjectName("textB4_goodbye");
        textB4_goodbye->setGeometry(QRect(40, 80, 631, 121));
        pushB4_logout = new QPushButton(B4Logout);
        pushB4_logout->setObjectName("pushB4_logout");
        pushB4_logout->setGeometry(QRect(590, 220, 80, 24));
        trustyBankInterface->addTab(B4Logout, QString());
        B4__2CashierTally = new QWidget();
        B4__2CashierTally->setObjectName("B4__2CashierTally");
        layoutWidget_25 = new QWidget(B4__2CashierTally);
        layoutWidget_25->setObjectName("layoutWidget_25");
        layoutWidget_25->setGeometry(QRect(230, 90, 110, 211));
        verticalLayout_25 = new QVBoxLayout(layoutWidget_25);
        verticalLayout_25->setSpacing(6);
        verticalLayout_25->setContentsMargins(11, 11, 11, 11);
        verticalLayout_25->setObjectName("verticalLayout_25");
        verticalLayout_25->setContentsMargins(0, 0, 0, 0);
        lineEditB4__2_cent01 = new QLineEdit(layoutWidget_25);
        lineEditB4__2_cent01->setObjectName("lineEditB4__2_cent01");

        verticalLayout_25->addWidget(lineEditB4__2_cent01);

        lineEditB4__2_cents05 = new QLineEdit(layoutWidget_25);
        lineEditB4__2_cents05->setObjectName("lineEditB4__2_cents05");

        verticalLayout_25->addWidget(lineEditB4__2_cents05);

        lineEditB4__2_cents10 = new QLineEdit(layoutWidget_25);
        lineEditB4__2_cents10->setObjectName("lineEditB4__2_cents10");

        verticalLayout_25->addWidget(lineEditB4__2_cents10);

        lineEditB4__2_cents25 = new QLineEdit(layoutWidget_25);
        lineEditB4__2_cents25->setObjectName("lineEditB4__2_cents25");

        verticalLayout_25->addWidget(lineEditB4__2_cents25);

        lineEditB4__2_cents50 = new QLineEdit(layoutWidget_25);
        lineEditB4__2_cents50->setObjectName("lineEditB4__2_cents50");

        verticalLayout_25->addWidget(lineEditB4__2_cents50);

        layoutWidget_26 = new QWidget(B4__2CashierTally);
        layoutWidget_26->setObjectName("layoutWidget_26");
        layoutWidget_26->setGeometry(QRect(200, 90, 23, 201));
        verticalLayout_26 = new QVBoxLayout(layoutWidget_26);
        verticalLayout_26->setSpacing(6);
        verticalLayout_26->setContentsMargins(11, 11, 11, 11);
        verticalLayout_26->setObjectName("verticalLayout_26");
        verticalLayout_26->setContentsMargins(0, 0, 0, 0);
        labelB4__2_cent01 = new QLabel(layoutWidget_26);
        labelB4__2_cent01->setObjectName("labelB4__2_cent01");

        verticalLayout_26->addWidget(labelB4__2_cent01);

        labelB4__2_cents05 = new QLabel(layoutWidget_26);
        labelB4__2_cents05->setObjectName("labelB4__2_cents05");

        verticalLayout_26->addWidget(labelB4__2_cents05);

        labelB4__2_cents10 = new QLabel(layoutWidget_26);
        labelB4__2_cents10->setObjectName("labelB4__2_cents10");

        verticalLayout_26->addWidget(labelB4__2_cents10);

        labelB4__2_cents25 = new QLabel(layoutWidget_26);
        labelB4__2_cents25->setObjectName("labelB4__2_cents25");

        verticalLayout_26->addWidget(labelB4__2_cents25);

        labelB4__2_cents50 = new QLabel(layoutWidget_26);
        labelB4__2_cents50->setObjectName("labelB4__2_cents50");

        verticalLayout_26->addWidget(labelB4__2_cents50);

        layoutWidget_27 = new QWidget(B4__2CashierTally);
        layoutWidget_27->setObjectName("layoutWidget_27");
        layoutWidget_27->setGeometry(QRect(380, 50, 30, 241));
        verticalLayout_27 = new QVBoxLayout(layoutWidget_27);
        verticalLayout_27->setSpacing(6);
        verticalLayout_27->setContentsMargins(11, 11, 11, 11);
        verticalLayout_27->setObjectName("verticalLayout_27");
        verticalLayout_27->setContentsMargins(0, 0, 0, 0);
        labelB4__2_dollar001 = new QLabel(layoutWidget_27);
        labelB4__2_dollar001->setObjectName("labelB4__2_dollar001");

        verticalLayout_27->addWidget(labelB4__2_dollar001);

        labelB4__2_dollars005 = new QLabel(layoutWidget_27);
        labelB4__2_dollars005->setObjectName("labelB4__2_dollars005");

        verticalLayout_27->addWidget(labelB4__2_dollars005);

        labelB4__2_dollars010 = new QLabel(layoutWidget_27);
        labelB4__2_dollars010->setObjectName("labelB4__2_dollars010");

        verticalLayout_27->addWidget(labelB4__2_dollars010);

        labelB4__2_dollars020 = new QLabel(layoutWidget_27);
        labelB4__2_dollars020->setObjectName("labelB4__2_dollars020");

        verticalLayout_27->addWidget(labelB4__2_dollars020);

        labelB4__2_dollars050 = new QLabel(layoutWidget_27);
        labelB4__2_dollars050->setObjectName("labelB4__2_dollars050");

        verticalLayout_27->addWidget(labelB4__2_dollars050);

        labelB4__2_dollars100 = new QLabel(layoutWidget_27);
        labelB4__2_dollars100->setObjectName("labelB4__2_dollars100");

        verticalLayout_27->addWidget(labelB4__2_dollars100);

        layoutWidget_28 = new QWidget(B4__2CashierTally);
        layoutWidget_28->setObjectName("layoutWidget_28");
        layoutWidget_28->setGeometry(QRect(420, 50, 110, 251));
        verticalLayout_28 = new QVBoxLayout(layoutWidget_28);
        verticalLayout_28->setSpacing(6);
        verticalLayout_28->setContentsMargins(11, 11, 11, 11);
        verticalLayout_28->setObjectName("verticalLayout_28");
        verticalLayout_28->setContentsMargins(0, 0, 0, 0);
        lineEditB4__2_dollar001 = new QLineEdit(layoutWidget_28);
        lineEditB4__2_dollar001->setObjectName("lineEditB4__2_dollar001");

        verticalLayout_28->addWidget(lineEditB4__2_dollar001);

        lineEditB4__2_dollars005 = new QLineEdit(layoutWidget_28);
        lineEditB4__2_dollars005->setObjectName("lineEditB4__2_dollars005");

        verticalLayout_28->addWidget(lineEditB4__2_dollars005);

        lineEditB4__2_dollars010 = new QLineEdit(layoutWidget_28);
        lineEditB4__2_dollars010->setObjectName("lineEditB4__2_dollars010");

        verticalLayout_28->addWidget(lineEditB4__2_dollars010);

        lineEditB4__2_dollars020 = new QLineEdit(layoutWidget_28);
        lineEditB4__2_dollars020->setObjectName("lineEditB4__2_dollars020");

        verticalLayout_28->addWidget(lineEditB4__2_dollars020);

        lineEditB4__2_dollars050 = new QLineEdit(layoutWidget_28);
        lineEditB4__2_dollars050->setObjectName("lineEditB4__2_dollars050");

        verticalLayout_28->addWidget(lineEditB4__2_dollars050);

        lineEditB4__2_dollars100 = new QLineEdit(layoutWidget_28);
        lineEditB4__2_dollars100->setObjectName("lineEditB4__2_dollars100");

        verticalLayout_28->addWidget(lineEditB4__2_dollars100);

        pushB4__2_reconcile = new QPushButton(B4__2CashierTally);
        pushB4__2_reconcile->setObjectName("pushB4__2_reconcile");
        pushB4__2_reconcile->setGeometry(QRect(310, 320, 121, 24));
        trustyBankInterface->addTab(B4__2CashierTally, QString());
        C1ClientView = new QWidget();
        C1ClientView->setObjectName("C1ClientView");
        pushC1_back = new QPushButton(C1ClientView);
        pushC1_back->setObjectName("pushC1_back");
        pushC1_back->setGeometry(QRect(20, 360, 80, 24));
        layoutWidget7 = new QWidget(C1ClientView);
        layoutWidget7->setObjectName("layoutWidget7");
        layoutWidget7->setGeometry(QRect(20, 310, 681, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget7);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushC1_deposit = new QPushButton(layoutWidget7);
        pushC1_deposit->setObjectName("pushC1_deposit");

        horizontalLayout->addWidget(pushC1_deposit);

        pushC1_withdrawal = new QPushButton(layoutWidget7);
        pushC1_withdrawal->setObjectName("pushC1_withdrawal");

        horizontalLayout->addWidget(pushC1_withdrawal);

        pushC1_transfer = new QPushButton(layoutWidget7);
        pushC1_transfer->setObjectName("pushC1_transfer");

        horizontalLayout->addWidget(pushC1_transfer);

        pushC1_clientDataEditing = new QPushButton(layoutWidget7);
        pushC1_clientDataEditing->setObjectName("pushC1_clientDataEditing");

        horizontalLayout->addWidget(pushC1_clientDataEditing);

        tableC1_clientPersonalData = new QTableWidget(C1ClientView);
        if (tableC1_clientPersonalData->columnCount() < 1)
            tableC1_clientPersonalData->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setFont(font1);
        tableC1_clientPersonalData->setHorizontalHeaderItem(0, __qtablewidgetitem24);
        if (tableC1_clientPersonalData->rowCount() < 6)
            tableC1_clientPersonalData->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setFont(font2);
        tableC1_clientPersonalData->setVerticalHeaderItem(0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setFont(font2);
        tableC1_clientPersonalData->setVerticalHeaderItem(1, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setFont(font2);
        tableC1_clientPersonalData->setVerticalHeaderItem(2, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setFont(font2);
        tableC1_clientPersonalData->setVerticalHeaderItem(3, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        __qtablewidgetitem29->setFont(font2);
        tableC1_clientPersonalData->setVerticalHeaderItem(4, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        __qtablewidgetitem30->setFont(font2);
        tableC1_clientPersonalData->setVerticalHeaderItem(5, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        __qtablewidgetitem31->setFont(font2);
        tableC1_clientPersonalData->setItem(0, 0, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        __qtablewidgetitem32->setFont(font2);
        tableC1_clientPersonalData->setItem(1, 0, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        __qtablewidgetitem33->setFont(font2);
        tableC1_clientPersonalData->setItem(2, 0, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        __qtablewidgetitem34->setFont(font2);
        tableC1_clientPersonalData->setItem(3, 0, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        __qtablewidgetitem35->setFont(font2);
        tableC1_clientPersonalData->setItem(4, 0, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        __qtablewidgetitem36->setFont(font2);
        tableC1_clientPersonalData->setItem(5, 0, __qtablewidgetitem36);
        tableC1_clientPersonalData->setObjectName("tableC1_clientPersonalData");
        tableC1_clientPersonalData->setGeometry(QRect(20, 50, 421, 201));
        tableC1_clientAccountData = new QTableWidget(C1ClientView);
        if (tableC1_clientAccountData->columnCount() < 1)
            tableC1_clientAccountData->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        __qtablewidgetitem37->setFont(font1);
        tableC1_clientAccountData->setHorizontalHeaderItem(0, __qtablewidgetitem37);
        if (tableC1_clientAccountData->rowCount() < 2)
            tableC1_clientAccountData->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        __qtablewidgetitem38->setFont(font2);
        tableC1_clientAccountData->setVerticalHeaderItem(0, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        __qtablewidgetitem39->setFont(font2);
        tableC1_clientAccountData->setVerticalHeaderItem(1, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        __qtablewidgetitem40->setFont(font2);
        tableC1_clientAccountData->setItem(0, 0, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        __qtablewidgetitem41->setFont(font2);
        tableC1_clientAccountData->setItem(1, 0, __qtablewidgetitem41);
        tableC1_clientAccountData->setObjectName("tableC1_clientAccountData");
        tableC1_clientAccountData->setGeometry(QRect(450, 170, 251, 81));
        trustyBankInterface->addTab(C1ClientView, QString());
        C2__1Deposit = new QWidget();
        C2__1Deposit->setObjectName("C2__1Deposit");
        pushC2__1_back = new QPushButton(C2__1Deposit);
        pushC2__1_back->setObjectName("pushC2__1_back");
        pushC2__1_back->setGeometry(QRect(20, 360, 80, 24));
        layoutWidget_2 = new QWidget(C2__1Deposit);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(240, 110, 110, 211));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        lineEditC2__1_cent01 = new QLineEdit(layoutWidget_2);
        lineEditC2__1_cent01->setObjectName("lineEditC2__1_cent01");

        verticalLayout_5->addWidget(lineEditC2__1_cent01);

        lineEditC2__1_cents05 = new QLineEdit(layoutWidget_2);
        lineEditC2__1_cents05->setObjectName("lineEditC2__1_cents05");

        verticalLayout_5->addWidget(lineEditC2__1_cents05);

        lineEditC2__1_cents10 = new QLineEdit(layoutWidget_2);
        lineEditC2__1_cents10->setObjectName("lineEditC2__1_cents10");

        verticalLayout_5->addWidget(lineEditC2__1_cents10);

        lineEditC2__1_cents25 = new QLineEdit(layoutWidget_2);
        lineEditC2__1_cents25->setObjectName("lineEditC2__1_cents25");

        verticalLayout_5->addWidget(lineEditC2__1_cents25);

        lineEditC2__1_cents50 = new QLineEdit(layoutWidget_2);
        lineEditC2__1_cents50->setObjectName("lineEditC2__1_cents50");

        verticalLayout_5->addWidget(lineEditC2__1_cents50);

        layoutWidget_3 = new QWidget(C2__1Deposit);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(210, 110, 23, 201));
        verticalLayout_6 = new QVBoxLayout(layoutWidget_3);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        labelC2__1_cent01 = new QLabel(layoutWidget_3);
        labelC2__1_cent01->setObjectName("labelC2__1_cent01");

        verticalLayout_6->addWidget(labelC2__1_cent01);

        labelC2__1_cents05 = new QLabel(layoutWidget_3);
        labelC2__1_cents05->setObjectName("labelC2__1_cents05");

        verticalLayout_6->addWidget(labelC2__1_cents05);

        labelC2__1_cents10 = new QLabel(layoutWidget_3);
        labelC2__1_cents10->setObjectName("labelC2__1_cents10");

        verticalLayout_6->addWidget(labelC2__1_cents10);

        labelC2__1_cents25 = new QLabel(layoutWidget_3);
        labelC2__1_cents25->setObjectName("labelC2__1_cents25");

        verticalLayout_6->addWidget(labelC2__1_cents25);

        labelC2__1_cents50 = new QLabel(layoutWidget_3);
        labelC2__1_cents50->setObjectName("labelC2__1_cents50");

        verticalLayout_6->addWidget(labelC2__1_cents50);

        layoutWidget_4 = new QWidget(C2__1Deposit);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(380, 110, 30, 241));
        verticalLayout_7 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        labelC2__1_dollar001 = new QLabel(layoutWidget_4);
        labelC2__1_dollar001->setObjectName("labelC2__1_dollar001");

        verticalLayout_7->addWidget(labelC2__1_dollar001);

        labelC2__1_dollars005 = new QLabel(layoutWidget_4);
        labelC2__1_dollars005->setObjectName("labelC2__1_dollars005");

        verticalLayout_7->addWidget(labelC2__1_dollars005);

        labelC2__1_dollars010 = new QLabel(layoutWidget_4);
        labelC2__1_dollars010->setObjectName("labelC2__1_dollars010");

        verticalLayout_7->addWidget(labelC2__1_dollars010);

        labelC2__1_dollars020 = new QLabel(layoutWidget_4);
        labelC2__1_dollars020->setObjectName("labelC2__1_dollars020");

        verticalLayout_7->addWidget(labelC2__1_dollars020);

        labelC2__1_dollars050 = new QLabel(layoutWidget_4);
        labelC2__1_dollars050->setObjectName("labelC2__1_dollars050");

        verticalLayout_7->addWidget(labelC2__1_dollars050);

        labelC2__1_dollars100 = new QLabel(layoutWidget_4);
        labelC2__1_dollars100->setObjectName("labelC2__1_dollars100");

        verticalLayout_7->addWidget(labelC2__1_dollars100);

        layoutWidget_7 = new QWidget(C2__1Deposit);
        layoutWidget_7->setObjectName("layoutWidget_7");
        layoutWidget_7->setGeometry(QRect(420, 110, 110, 251));
        verticalLayout_10 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        lineEditC2__1_dollar001 = new QLineEdit(layoutWidget_7);
        lineEditC2__1_dollar001->setObjectName("lineEditC2__1_dollar001");

        verticalLayout_10->addWidget(lineEditC2__1_dollar001);

        lineEditC2__1_dollars005 = new QLineEdit(layoutWidget_7);
        lineEditC2__1_dollars005->setObjectName("lineEditC2__1_dollars005");

        verticalLayout_10->addWidget(lineEditC2__1_dollars005);

        lineEditC2__1_dollars010 = new QLineEdit(layoutWidget_7);
        lineEditC2__1_dollars010->setObjectName("lineEditC2__1_dollars010");

        verticalLayout_10->addWidget(lineEditC2__1_dollars010);

        lineEditC2__1_dollars020 = new QLineEdit(layoutWidget_7);
        lineEditC2__1_dollars020->setObjectName("lineEditC2__1_dollars020");

        verticalLayout_10->addWidget(lineEditC2__1_dollars020);

        lineEditC2__1_dollars050 = new QLineEdit(layoutWidget_7);
        lineEditC2__1_dollars050->setObjectName("lineEditC2__1_dollars050");

        verticalLayout_10->addWidget(lineEditC2__1_dollars050);

        lineEditC2__1_dollars100 = new QLineEdit(layoutWidget_7);
        lineEditC2__1_dollars100->setObjectName("lineEditC2__1_dollars100");

        verticalLayout_10->addWidget(lineEditC2__1_dollars100);

        tableC2__1_clientAccountData = new QTableWidget(C2__1Deposit);
        if (tableC2__1_clientAccountData->columnCount() < 1)
            tableC2__1_clientAccountData->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        __qtablewidgetitem42->setFont(font1);
        tableC2__1_clientAccountData->setHorizontalHeaderItem(0, __qtablewidgetitem42);
        if (tableC2__1_clientAccountData->rowCount() < 2)
            tableC2__1_clientAccountData->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        __qtablewidgetitem43->setFont(font2);
        tableC2__1_clientAccountData->setVerticalHeaderItem(0, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        __qtablewidgetitem44->setFont(font2);
        tableC2__1_clientAccountData->setVerticalHeaderItem(1, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        __qtablewidgetitem45->setFont(font2);
        tableC2__1_clientAccountData->setItem(0, 0, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        __qtablewidgetitem46->setFont(font2);
        tableC2__1_clientAccountData->setItem(1, 0, __qtablewidgetitem46);
        tableC2__1_clientAccountData->setObjectName("tableC2__1_clientAccountData");
        tableC2__1_clientAccountData->setGeometry(QRect(20, 20, 251, 81));
        pushC2__1_deposit = new QPushButton(C2__1Deposit);
        pushC2__1_deposit->setObjectName("pushC2__1_deposit");
        pushC2__1_deposit->setGeometry(QRect(310, 370, 111, 24));
        labelC2__1_ammount = new QLabel(C2__1Deposit);
        labelC2__1_ammount->setObjectName("labelC2__1_ammount");
        labelC2__1_ammount->setGeometry(QRect(330, 40, 101, 16));
        lineEditC2__1_ammount = new QLineEdit(C2__1Deposit);
        lineEditC2__1_ammount->setObjectName("lineEditC2__1_ammount");
        lineEditC2__1_ammount->setGeometry(QRect(330, 60, 121, 24));
        trustyBankInterface->addTab(C2__1Deposit, QString());
        C2__2Withdrawal = new QWidget();
        C2__2Withdrawal->setObjectName("C2__2Withdrawal");
        pushC2__2_back = new QPushButton(C2__2Withdrawal);
        pushC2__2_back->setObjectName("pushC2__2_back");
        pushC2__2_back->setGeometry(QRect(20, 360, 80, 24));
        layoutWidget_5 = new QWidget(C2__2Withdrawal);
        layoutWidget_5->setObjectName("layoutWidget_5");
        layoutWidget_5->setGeometry(QRect(380, 110, 30, 241));
        verticalLayout_8 = new QVBoxLayout(layoutWidget_5);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        labelC2__2_dollar001 = new QLabel(layoutWidget_5);
        labelC2__2_dollar001->setObjectName("labelC2__2_dollar001");

        verticalLayout_8->addWidget(labelC2__2_dollar001);

        labelC2__2_dollars005 = new QLabel(layoutWidget_5);
        labelC2__2_dollars005->setObjectName("labelC2__2_dollars005");

        verticalLayout_8->addWidget(labelC2__2_dollars005);

        labelC2__2_dollars010 = new QLabel(layoutWidget_5);
        labelC2__2_dollars010->setObjectName("labelC2__2_dollars010");

        verticalLayout_8->addWidget(labelC2__2_dollars010);

        labelC2__2_dollars020 = new QLabel(layoutWidget_5);
        labelC2__2_dollars020->setObjectName("labelC2__2_dollars020");

        verticalLayout_8->addWidget(labelC2__2_dollars020);

        labelC2__2_dollars050 = new QLabel(layoutWidget_5);
        labelC2__2_dollars050->setObjectName("labelC2__2_dollars050");

        verticalLayout_8->addWidget(labelC2__2_dollars050);

        labelC2__2_dollars100 = new QLabel(layoutWidget_5);
        labelC2__2_dollars100->setObjectName("labelC2__2_dollars100");

        verticalLayout_8->addWidget(labelC2__2_dollars100);

        layoutWidget_6 = new QWidget(C2__2Withdrawal);
        layoutWidget_6->setObjectName("layoutWidget_6");
        layoutWidget_6->setGeometry(QRect(420, 110, 110, 251));
        verticalLayout_9 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        lineEditC2__2_dollar001 = new QLineEdit(layoutWidget_6);
        lineEditC2__2_dollar001->setObjectName("lineEditC2__2_dollar001");

        verticalLayout_9->addWidget(lineEditC2__2_dollar001);

        lineEditC2__2_dollars005 = new QLineEdit(layoutWidget_6);
        lineEditC2__2_dollars005->setObjectName("lineEditC2__2_dollars005");

        verticalLayout_9->addWidget(lineEditC2__2_dollars005);

        lineEditC2__2_dollars010 = new QLineEdit(layoutWidget_6);
        lineEditC2__2_dollars010->setObjectName("lineEditC2__2_dollars010");

        verticalLayout_9->addWidget(lineEditC2__2_dollars010);

        lineEditC2__2_dollars020 = new QLineEdit(layoutWidget_6);
        lineEditC2__2_dollars020->setObjectName("lineEditC2__2_dollars020");

        verticalLayout_9->addWidget(lineEditC2__2_dollars020);

        lineEditC2__2_dollars050 = new QLineEdit(layoutWidget_6);
        lineEditC2__2_dollars050->setObjectName("lineEditC2__2_dollars050");

        verticalLayout_9->addWidget(lineEditC2__2_dollars050);

        lineEditC2__2_dollars100 = new QLineEdit(layoutWidget_6);
        lineEditC2__2_dollars100->setObjectName("lineEditC2__2_dollars100");

        verticalLayout_9->addWidget(lineEditC2__2_dollars100);

        layoutWidget_8 = new QWidget(C2__2Withdrawal);
        layoutWidget_8->setObjectName("layoutWidget_8");
        layoutWidget_8->setGeometry(QRect(210, 110, 23, 201));
        verticalLayout_11 = new QVBoxLayout(layoutWidget_8);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        labelC2__2_cent01 = new QLabel(layoutWidget_8);
        labelC2__2_cent01->setObjectName("labelC2__2_cent01");

        verticalLayout_11->addWidget(labelC2__2_cent01);

        labelC2__2_cents05 = new QLabel(layoutWidget_8);
        labelC2__2_cents05->setObjectName("labelC2__2_cents05");

        verticalLayout_11->addWidget(labelC2__2_cents05);

        labelC2__2_cents10 = new QLabel(layoutWidget_8);
        labelC2__2_cents10->setObjectName("labelC2__2_cents10");

        verticalLayout_11->addWidget(labelC2__2_cents10);

        labelC2__2_cents25 = new QLabel(layoutWidget_8);
        labelC2__2_cents25->setObjectName("labelC2__2_cents25");

        verticalLayout_11->addWidget(labelC2__2_cents25);

        labelC2__2_cents50 = new QLabel(layoutWidget_8);
        labelC2__2_cents50->setObjectName("labelC2__2_cents50");

        verticalLayout_11->addWidget(labelC2__2_cents50);

        layoutWidget_9 = new QWidget(C2__2Withdrawal);
        layoutWidget_9->setObjectName("layoutWidget_9");
        layoutWidget_9->setGeometry(QRect(240, 110, 110, 211));
        verticalLayout_12 = new QVBoxLayout(layoutWidget_9);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        lineEditC2__2_cent01 = new QLineEdit(layoutWidget_9);
        lineEditC2__2_cent01->setObjectName("lineEditC2__2_cent01");

        verticalLayout_12->addWidget(lineEditC2__2_cent01);

        lineEditC2__2_cents05 = new QLineEdit(layoutWidget_9);
        lineEditC2__2_cents05->setObjectName("lineEditC2__2_cents05");

        verticalLayout_12->addWidget(lineEditC2__2_cents05);

        lineEditC2__2_cents10 = new QLineEdit(layoutWidget_9);
        lineEditC2__2_cents10->setObjectName("lineEditC2__2_cents10");

        verticalLayout_12->addWidget(lineEditC2__2_cents10);

        lineEditC2__2_cents25 = new QLineEdit(layoutWidget_9);
        lineEditC2__2_cents25->setObjectName("lineEditC2__2_cents25");

        verticalLayout_12->addWidget(lineEditC2__2_cents25);

        lineEditC2__2_cents50 = new QLineEdit(layoutWidget_9);
        lineEditC2__2_cents50->setObjectName("lineEditC2__2_cents50");

        verticalLayout_12->addWidget(lineEditC2__2_cents50);

        tableC2__2_clientAccountData = new QTableWidget(C2__2Withdrawal);
        if (tableC2__2_clientAccountData->columnCount() < 1)
            tableC2__2_clientAccountData->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        __qtablewidgetitem47->setFont(font1);
        tableC2__2_clientAccountData->setHorizontalHeaderItem(0, __qtablewidgetitem47);
        if (tableC2__2_clientAccountData->rowCount() < 2)
            tableC2__2_clientAccountData->setRowCount(2);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        __qtablewidgetitem48->setFont(font2);
        tableC2__2_clientAccountData->setVerticalHeaderItem(0, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        __qtablewidgetitem49->setFont(font2);
        tableC2__2_clientAccountData->setVerticalHeaderItem(1, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        __qtablewidgetitem50->setFont(font2);
        tableC2__2_clientAccountData->setItem(0, 0, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        __qtablewidgetitem51->setFont(font2);
        tableC2__2_clientAccountData->setItem(1, 0, __qtablewidgetitem51);
        tableC2__2_clientAccountData->setObjectName("tableC2__2_clientAccountData");
        tableC2__2_clientAccountData->setGeometry(QRect(20, 20, 251, 81));
        pushC2__2_withdraw = new QPushButton(C2__2Withdrawal);
        pushC2__2_withdraw->setObjectName("pushC2__2_withdraw");
        pushC2__2_withdraw->setGeometry(QRect(310, 370, 111, 24));
        lineEditC2__2_ammount = new QLineEdit(C2__2Withdrawal);
        lineEditC2__2_ammount->setObjectName("lineEditC2__2_ammount");
        lineEditC2__2_ammount->setGeometry(QRect(330, 60, 121, 24));
        labelC2__2_ammount = new QLabel(C2__2Withdrawal);
        labelC2__2_ammount->setObjectName("labelC2__2_ammount");
        labelC2__2_ammount->setGeometry(QRect(330, 40, 121, 16));
        trustyBankInterface->addTab(C2__2Withdrawal, QString());
        C2__3Transfer = new QWidget();
        C2__3Transfer->setObjectName("C2__3Transfer");
        pushC2__3_back = new QPushButton(C2__3Transfer);
        pushC2__3_back->setObjectName("pushC2__3_back");
        pushC2__3_back->setGeometry(QRect(20, 360, 80, 24));
        labelC2__3_firstName = new QLabel(C2__3Transfer);
        labelC2__3_firstName->setObjectName("labelC2__3_firstName");
        labelC2__3_firstName->setGeometry(QRect(230, 100, 61, 20));
        labelC2__3_amount = new QLabel(C2__3Transfer);
        labelC2__3_amount->setObjectName("labelC2__3_amount");
        labelC2__3_amount->setGeometry(QRect(190, 250, 101, 20));
        lineEditC2__3__accountNumber = new QLineEdit(C2__3Transfer);
        lineEditC2__3__accountNumber->setObjectName("lineEditC2__3__accountNumber");
        lineEditC2__3__accountNumber->setGeometry(QRect(310, 200, 207, 24));
        labelC2__3_accountNumber = new QLabel(C2__3Transfer);
        labelC2__3_accountNumber->setObjectName("labelC2__3_accountNumber");
        labelC2__3_accountNumber->setGeometry(QRect(190, 200, 101, 20));
        lineEditC2__3__firstName = new QLineEdit(C2__3Transfer);
        lineEditC2__3__firstName->setObjectName("lineEditC2__3__firstName");
        lineEditC2__3__firstName->setGeometry(QRect(310, 100, 207, 24));
        labelC2__3_lastName = new QLabel(C2__3Transfer);
        labelC2__3_lastName->setObjectName("labelC2__3_lastName");
        labelC2__3_lastName->setGeometry(QRect(230, 150, 61, 20));
        lineEditC2__3__lastName = new QLineEdit(C2__3Transfer);
        lineEditC2__3__lastName->setObjectName("lineEditC2__3__lastName");
        lineEditC2__3__lastName->setGeometry(QRect(310, 150, 207, 24));
        lineEditC2__3__amount = new QLineEdit(C2__3Transfer);
        lineEditC2__3__amount->setObjectName("lineEditC2__3__amount");
        lineEditC2__3__amount->setGeometry(QRect(310, 250, 207, 24));
        pushC2__3_transfer = new QPushButton(C2__3Transfer);
        pushC2__3_transfer->setObjectName("pushC2__3_transfer");
        pushC2__3_transfer->setGeometry(QRect(410, 300, 101, 24));
        trustyBankInterface->addTab(C2__3Transfer, QString());
        C2__4ClientDataEditing = new QWidget();
        C2__4ClientDataEditing->setObjectName("C2__4ClientDataEditing");
        pushC2__4_back = new QPushButton(C2__4ClientDataEditing);
        pushC2__4_back->setObjectName("pushC2__4_back");
        pushC2__4_back->setGeometry(QRect(20, 360, 80, 24));
        labelC2__4_phoneNumber = new QLabel(C2__4ClientDataEditing);
        labelC2__4_phoneNumber->setObjectName("labelC2__4_phoneNumber");
        labelC2__4_phoneNumber->setGeometry(QRect(220, 150, 91, 20));
        lineEditC2__4_firstName = new QLineEdit(C2__4ClientDataEditing);
        lineEditC2__4_firstName->setObjectName("lineEditC2__4_firstName");
        lineEditC2__4_firstName->setGeometry(QRect(330, 50, 207, 24));
        labelC2__4_firstName = new QLabel(C2__4ClientDataEditing);
        labelC2__4_firstName->setObjectName("labelC2__4_firstName");
        labelC2__4_firstName->setGeometry(QRect(240, 50, 71, 20));
        lineEditC2__4_adress = new QLineEdit(C2__4ClientDataEditing);
        lineEditC2__4_adress->setObjectName("lineEditC2__4_adress");
        lineEditC2__4_adress->setGeometry(QRect(330, 200, 207, 24));
        lineEditC2__4_lastName = new QLineEdit(C2__4ClientDataEditing);
        lineEditC2__4_lastName->setObjectName("lineEditC2__4_lastName");
        lineEditC2__4_lastName->setGeometry(QRect(330, 100, 207, 24));
        labelC2__4_adress = new QLabel(C2__4ClientDataEditing);
        labelC2__4_adress->setObjectName("labelC2__4_adress");
        labelC2__4_adress->setGeometry(QRect(260, 200, 51, 20));
        labelC2__4_lastName = new QLabel(C2__4ClientDataEditing);
        labelC2__4_lastName->setObjectName("labelC2__4_lastName");
        labelC2__4_lastName->setGeometry(QRect(240, 100, 71, 20));
        lineEditC2__4_phoneNumber = new QLineEdit(C2__4ClientDataEditing);
        lineEditC2__4_phoneNumber->setObjectName("lineEditC2__4_phoneNumber");
        lineEditC2__4_phoneNumber->setGeometry(QRect(330, 150, 207, 24));
        lineEditC2__4_dateOfBirth = new QLineEdit(C2__4ClientDataEditing);
        lineEditC2__4_dateOfBirth->setObjectName("lineEditC2__4_dateOfBirth");
        lineEditC2__4_dateOfBirth->setGeometry(QRect(330, 250, 207, 24));
        labelC2__4_dateOfBirth = new QLabel(C2__4ClientDataEditing);
        labelC2__4_dateOfBirth->setObjectName("labelC2__4_dateOfBirth");
        labelC2__4_dateOfBirth->setGeometry(QRect(230, 250, 81, 20));
        pushC2__4_changeTheData = new QPushButton(C2__4ClientDataEditing);
        pushC2__4_changeTheData->setObjectName("pushC2__4_changeTheData");
        pushC2__4_changeTheData->setGeometry(QRect(420, 350, 111, 24));
        labelC2__4_sSN = new QLabel(C2__4ClientDataEditing);
        labelC2__4_sSN->setObjectName("labelC2__4_sSN");
        labelC2__4_sSN->setGeometry(QRect(280, 300, 31, 20));
        lineEditC2__4_sSN = new QLineEdit(C2__4ClientDataEditing);
        lineEditC2__4_sSN->setObjectName("lineEditC2__4_sSN");
        lineEditC2__4_sSN->setGeometry(QRect(330, 300, 207, 24));
        pushC2__4_dateOfBirthInfo = new QPushButton(C2__4ClientDataEditing);
        pushC2__4_dateOfBirthInfo->setObjectName("pushC2__4_dateOfBirthInfo");
        pushC2__4_dateOfBirthInfo->setGeometry(QRect(210, 250, 16, 24));
        pushC2__4_sSNInfo = new QPushButton(C2__4ClientDataEditing);
        pushC2__4_sSNInfo->setObjectName("pushC2__4_sSNInfo");
        pushC2__4_sSNInfo->setGeometry(QRect(260, 300, 16, 24));
        trustyBankInterface->addTab(C2__4ClientDataEditing, QString());
        TrustyBankClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TrustyBankClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 746, 21));
        TrustyBankClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TrustyBankClass);
        mainToolBar->setObjectName("mainToolBar");
        TrustyBankClass->addToolBar(Qt::ToolBarArea::LeftToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TrustyBankClass);
        statusBar->setObjectName("statusBar");
        TrustyBankClass->setStatusBar(statusBar);

        retranslateUi(TrustyBankClass);

        trustyBankInterface->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(TrustyBankClass);
    } // setupUi

    void retranslateUi(QMainWindow *TrustyBankClass)
    {
        TrustyBankClass->setWindowTitle(QCoreApplication::translate("TrustyBankClass", "TrustyBank", nullptr));
        labelA2_firstName->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p><span style=\" font-weight:700;\">First Name:</span></p></body></html>", nullptr));
        textA2_welcomeMessage->setHtml(QCoreApplication::translate("TrustyBankClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Welcome to TrustyBank!</p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">First of all: Congratulations on joining"
                        " our elite team of employees! </p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Ahead of you lie many challenges and hard work, during which you will have the opportunity to serve dozens of customers. But before that happens, you need to be assigned a password and login. </p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">Please enter your first and last name below, and the system will automatically generate a login for you:</span></p></bo"
                        "dy></html>", nullptr));
        labelA2_lastName->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p><span style=\" font-weight:700;\">Last Name:</span></p></body></html>", nullptr));
        textA2_rulesForPassword->setHtml(QCoreApplication::translate("TrustyBankClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Great job! Your login has been created! Now you need to set a password. It must consist of at least 8 characters, including: at least one lowercase letter, at least one uppercase letter, at least one special character from this group: <span style=\" font-weight:700;\">!@#$%^&amp;*</span>, and at least one digit. After creating the password, confirm it by re-entering it to ensure it is"
                        " set correctly.</p></body></html>", nullptr));
        labelA2_enterPassword->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p><span style=\" font-weight:700;\">Enter Password:</span></p></body></html>", nullptr));
        labelA2_confirmPassword->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p><span style=\" font-weight:700;\">Confirm Password:</span></p></body></html>", nullptr));
        pushA2_register->setText(QCoreApplication::translate("TrustyBankClass", "Register", nullptr));
        trustyBankInterface->setTabText(trustyBankInterface->indexOf(A2Registration), QCoreApplication::translate("TrustyBankClass", "Registration", nullptr));
        labelA1_username->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p><span style=\" font-weight:700;\">Username:</span></p></body></html>", nullptr));
        labelA1_password->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p><span style=\" font-weight:700;\">Password:</span></p></body></html>", nullptr));
        pushA1_login->setText(QCoreApplication::translate("TrustyBankClass", "Login", nullptr));
        pushA1_register->setText(QCoreApplication::translate("TrustyBankClass", "Register", nullptr));
        labelA1_newEmployee->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">New employee?</span></p></body></html>", nullptr));
        trustyBankInterface->setTabText(trustyBankInterface->indexOf(A1Login), QCoreApplication::translate("TrustyBankClass", "Login", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableB1_clients->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("TrustyBankClass", "First Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableB1_clients->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("TrustyBankClass", "Last Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableB1_clients->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("TrustyBankClass", "Phone Number", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableB1_clients->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("TrustyBankClass", "Date of Birth", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableB1_clients->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("TrustyBankClass", "Address", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableB1_clients->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("TrustyBankClass", "SSN", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableB1_clients->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("TrustyBankClass", "Account Number", nullptr));
        pushB1_clientView->setText(QCoreApplication::translate("TrustyBankClass", "Client View", nullptr));
        labelB1_phoneNumber->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p><span style=\" font-weight:700;\">Phone Number:</span></p></body></html>", nullptr));
        labelB1_dateOfBirth->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p><span style=\" font-weight:700;\">Date of Birth:</span></p></body></html>", nullptr));
        labelB1_adress->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p><span style=\" font-weight:700;\">Adress:</span></p></body></html>", nullptr));
        labelB1_sSN->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p><span style=\" font-weight:700;\">SSN:</span></p></body></html>", nullptr));
        labelB1_accountNumber->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p><span style=\" font-weight:700;\">Account Number: </span></p></body></html>", nullptr));
        pushB1_search->setText(QCoreApplication::translate("TrustyBankClass", "Search", nullptr));
        labelB1_advice->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">How to work with client data?</span></p></body></html>", nullptr));
        pushB1_adviceInfo->setText(QCoreApplication::translate("TrustyBankClass", "?", nullptr));
        trustyBankInterface->setTabText(trustyBankInterface->indexOf(B1ListOfClients), QCoreApplication::translate("TrustyBankClass", "List of Clients", nullptr));
        pushB2__1_openAnAccount->setText(QCoreApplication::translate("TrustyBankClass", "Open an Account", nullptr));
        labelB2__1_firstName->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p><span style=\" font-weight:700;\">First Name: </span></p></body></html>", nullptr));
        labelB2__1_lastName->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p><span style=\" font-weight:700;\">Last Name: </span></p></body></html>", nullptr));
        labelB2__1_sSn->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p><span style=\" font-weight:700;\">SSN:</span></p></body></html>", nullptr));
        labelB2__1_isResident->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p><span style=\" font-weight:700;\">Is the prospect a U.S. resident? </span></p></body></html>", nullptr));
        buttonBoxB2__1_yes->setText(QCoreApplication::translate("TrustyBankClass", "Yes", nullptr));
        buttonBoxB2__1_no->setText(QCoreApplication::translate("TrustyBankClass", "No", nullptr));
        pushB2__1_sSNInfo->setText(QCoreApplication::translate("TrustyBankClass", "?", nullptr));
        pushB2__1_prospectInfo->setText(QCoreApplication::translate("TrustyBankClass", "?", nullptr));
        trustyBankInterface->setTabText(trustyBankInterface->indexOf(B2__1NewClient), QCoreApplication::translate("TrustyBankClass", "New Client", nullptr));
        pushB2__2_back->setText(QCoreApplication::translate("TrustyBankClass", "Back", nullptr));
        pushB2__2_openAnAccount->setText(QCoreApplication::translate("TrustyBankClass", "Open an Account", nullptr));
        labelB2__2_phoneNumber->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p><span style=\" font-weight:700;\">Phone Number:</span></p></body></html>", nullptr));
        labelB2__2_dateOfBirth->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p><span style=\" font-weight:700;\">Date of Birth:</span></p></body></html>", nullptr));
        labelB2__2_adress->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p><span style=\" font-weight:700;\">Adress:</span></p></body></html>", nullptr));
        trustyBankInterface->setTabText(trustyBankInterface->indexOf(B2__2NewAccount), QCoreApplication::translate("TrustyBankClass", "New Account", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableB3_bills->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("TrustyBankClass", "Bills", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableB3_bills->verticalHeaderItem(0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("TrustyBankClass", "$1", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableB3_bills->verticalHeaderItem(1);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("TrustyBankClass", "$5", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableB3_bills->verticalHeaderItem(2);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("TrustyBankClass", "$10", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableB3_bills->verticalHeaderItem(3);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("TrustyBankClass", "$20", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableB3_bills->verticalHeaderItem(4);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("TrustyBankClass", "$50", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableB3_bills->verticalHeaderItem(5);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("TrustyBankClass", "$100", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableB3_coins->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("TrustyBankClass", "Coins", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableB3_coins->verticalHeaderItem(0);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("TrustyBankClass", "1\302\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableB3_coins->verticalHeaderItem(1);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("TrustyBankClass", "5\302\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableB3_coins->verticalHeaderItem(2);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("TrustyBankClass", "10\302\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableB3_coins->verticalHeaderItem(3);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("TrustyBankClass", "25\302\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableB3_coins->verticalHeaderItem(4);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("TrustyBankClass", "50\302\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableB3_cashValue->horizontalHeaderItem(0);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("TrustyBankClass", "Total Cash", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableB3_cashValue->verticalHeaderItem(0);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("TrustyBankClass", "Total in coins", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableB3_cashValue->verticalHeaderItem(1);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("TrustyBankClass", "Total in bills", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableB3_cashValue->verticalHeaderItem(2);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("TrustyBankClass", "Total amount", nullptr));
        pushB3_doIt->setText(QCoreApplication::translate("TrustyBankClass", "Do it, treasurer!", nullptr));
        labelB3_receiveFrom->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Receive allowance from the treasurer:</span></p></body></html>", nullptr));
        pushB3_allowanceInfo->setText(QCoreApplication::translate("TrustyBankClass", "?", nullptr));
        labelB3_remitTo->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">Remit the cash to the treasurer:</span></p></body></html>", nullptr));
        pushB3_proceed->setText(QCoreApplication::translate("TrustyBankClass", "Proceed with Remittance", nullptr));
        pushB3_remittanceInfo->setText(QCoreApplication::translate("TrustyBankClass", "?", nullptr));
        trustyBankInterface->setTabText(trustyBankInterface->indexOf(B3TreasuryMenagement), QCoreApplication::translate("TrustyBankClass", "Treasury Management", nullptr));
        pushB3__2_remittance->setText(QCoreApplication::translate("TrustyBankClass", "Complete Remittance", nullptr));
        pushB3__2_back->setText(QCoreApplication::translate("TrustyBankClass", "Back", nullptr));
        labelB3__2_ammount->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p><span style=\" font-weight:700;\">Remitted amount:</span></p></body></html>", nullptr));
        labelB3__2_cent01->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">1\302\242</span></p></body></html>", nullptr));
        labelB3__2_cents05->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">5\302\242</span></p></body></html>", nullptr));
        labelB3__2_cents10->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">10\302\242</span></p></body></html>", nullptr));
        labelB3__2_cents25->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">25\302\242</span></p></body></html>", nullptr));
        labelB3__2_cents50->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">50\302\242</span></p></body></html>", nullptr));
        labelB3__2_dollar001->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">$1</span></p></body></html>", nullptr));
        labelB3__2_dollars005->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">$5</span></p></body></html>", nullptr));
        labelB3__2_dollars010->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">$10</span></p></body></html>", nullptr));
        labelB3__2_dollars020->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">$20</span></p></body></html>", nullptr));
        labelB3__2_dollars050->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">$50</span></p></body></html>", nullptr));
        labelB3__2_dollars100->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">$100</span></p></body></html>", nullptr));
        trustyBankInterface->setTabText(trustyBankInterface->indexOf(B3__2CashRemittance), QCoreApplication::translate("TrustyBankClass", "Cash Remittance", nullptr));
        textB4_goodbye->setHtml(QCoreApplication::translate("TrustyBankClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">If you are finishing for today, we hope the work you accomplished was fruitful. If you are taking a break, thank you for remembering to log out before stepping away from your computer. Ensuring the security of our clients' accounts is important to us.</span></p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; m"
                        "argin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-style:italic;\">He who labors diligently need never despair; for all things are accomplished by diligence and labor.</span> - Menander</p>\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700;\">Have a great day and we look forward to your return!</span></p></body></html>", nullptr));
        pushB4_logout->setText(QCoreApplication::translate("TrustyBankClass", "Logout", nullptr));
        trustyBankInterface->setTabText(trustyBankInterface->indexOf(B4Logout), QCoreApplication::translate("TrustyBankClass", "Logout", nullptr));
        labelB4__2_cent01->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">1\302\242</span></p></body></html>", nullptr));
        labelB4__2_cents05->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">5\302\242</span></p></body></html>", nullptr));
        labelB4__2_cents10->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">10\302\242</span></p></body></html>", nullptr));
        labelB4__2_cents25->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">25\302\242</span></p></body></html>", nullptr));
        labelB4__2_cents50->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">50\302\242</span></p></body></html>", nullptr));
        labelB4__2_dollar001->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">$1</span></p></body></html>", nullptr));
        labelB4__2_dollars005->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">$5</span></p></body></html>", nullptr));
        labelB4__2_dollars010->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\"> $10</span></p></body></html>", nullptr));
        labelB4__2_dollars020->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\"> $20</span></p></body></html>", nullptr));
        labelB4__2_dollars050->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\"> $50</span></p></body></html>", nullptr));
        labelB4__2_dollars100->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">$100</span></p></body></html>", nullptr));
        pushB4__2_reconcile->setText(QCoreApplication::translate("TrustyBankClass", "Reconcile your cash", nullptr));
        trustyBankInterface->setTabText(trustyBankInterface->indexOf(B4__2CashierTally), QCoreApplication::translate("TrustyBankClass", "Reconciliation of the Cash", nullptr));
        pushC1_back->setText(QCoreApplication::translate("TrustyBankClass", "Back", nullptr));
        pushC1_deposit->setText(QCoreApplication::translate("TrustyBankClass", "Deposit", nullptr));
        pushC1_withdrawal->setText(QCoreApplication::translate("TrustyBankClass", "Withdrawal", nullptr));
        pushC1_transfer->setText(QCoreApplication::translate("TrustyBankClass", "Transfer", nullptr));
        pushC1_clientDataEditing->setText(QCoreApplication::translate("TrustyBankClass", "Client Data Editing", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableC1_clientPersonalData->horizontalHeaderItem(0);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("TrustyBankClass", "Personal Data", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableC1_clientPersonalData->verticalHeaderItem(0);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("TrustyBankClass", "First Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableC1_clientPersonalData->verticalHeaderItem(1);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("TrustyBankClass", "Last Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableC1_clientPersonalData->verticalHeaderItem(2);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("TrustyBankClass", "Phone Number", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableC1_clientPersonalData->verticalHeaderItem(3);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("TrustyBankClass", "Date of Birth", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableC1_clientPersonalData->verticalHeaderItem(4);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("TrustyBankClass", "Adress", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableC1_clientPersonalData->verticalHeaderItem(5);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("TrustyBankClass", "SSN", nullptr));

        const bool __sortingEnabled = tableC1_clientPersonalData->isSortingEnabled();
        tableC1_clientPersonalData->setSortingEnabled(false);
        tableC1_clientPersonalData->setSortingEnabled(__sortingEnabled);

        QTableWidgetItem *___qtablewidgetitem31 = tableC1_clientAccountData->horizontalHeaderItem(0);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("TrustyBankClass", "Account Data", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tableC1_clientAccountData->verticalHeaderItem(0);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("TrustyBankClass", "Account Number", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tableC1_clientAccountData->verticalHeaderItem(1);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("TrustyBankClass", "Balance", nullptr));

        const bool __sortingEnabled1 = tableC1_clientAccountData->isSortingEnabled();
        tableC1_clientAccountData->setSortingEnabled(false);
        tableC1_clientAccountData->setSortingEnabled(__sortingEnabled1);

        trustyBankInterface->setTabText(trustyBankInterface->indexOf(C1ClientView), QCoreApplication::translate("TrustyBankClass", "Client view", nullptr));
        pushC2__1_back->setText(QCoreApplication::translate("TrustyBankClass", "Back", nullptr));
        labelC2__1_cent01->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\"> 1\302\242</span></p></body></html>", nullptr));
        labelC2__1_cents05->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\"> 5\302\242</span></p></body></html>", nullptr));
        labelC2__1_cents10->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">10\302\242</span></p></body></html>", nullptr));
        labelC2__1_cents25->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">25\302\242</span></p></body></html>", nullptr));
        labelC2__1_cents50->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">50\302\242</span></p></body></html>", nullptr));
        labelC2__1_dollar001->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">  $1</span></p></body></html>", nullptr));
        labelC2__1_dollars005->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">  $5</span></p></body></html>", nullptr));
        labelC2__1_dollars010->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\"> $10</span></p></body></html>", nullptr));
        labelC2__1_dollars020->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\"> $20</span></p></body></html>", nullptr));
        labelC2__1_dollars050->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\"> $50</span></p></body></html>", nullptr));
        labelC2__1_dollars100->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">$100</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tableC2__1_clientAccountData->horizontalHeaderItem(0);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("TrustyBankClass", "Account Data", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tableC2__1_clientAccountData->verticalHeaderItem(0);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("TrustyBankClass", "Account Number", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = tableC2__1_clientAccountData->verticalHeaderItem(1);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("TrustyBankClass", "Balance", nullptr));

        const bool __sortingEnabled2 = tableC2__1_clientAccountData->isSortingEnabled();
        tableC2__1_clientAccountData->setSortingEnabled(false);
        tableC2__1_clientAccountData->setSortingEnabled(__sortingEnabled2);

        pushC2__1_deposit->setText(QCoreApplication::translate("TrustyBankClass", "Deposit", nullptr));
        labelC2__1_ammount->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p><span style=\" font-weight:700;\">Deposit amount:</span></p></body></html>", nullptr));
        trustyBankInterface->setTabText(trustyBankInterface->indexOf(C2__1Deposit), QCoreApplication::translate("TrustyBankClass", "Deposit", nullptr));
        pushC2__2_back->setText(QCoreApplication::translate("TrustyBankClass", "Back", nullptr));
        labelC2__2_dollar001->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">  $1</span></p></body></html>", nullptr));
        labelC2__2_dollars005->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">  $5</span></p></body></html>", nullptr));
        labelC2__2_dollars010->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\"> $10</span></p></body></html>", nullptr));
        labelC2__2_dollars020->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\"> $20</span></p></body></html>", nullptr));
        labelC2__2_dollars050->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\"> $50</span></p></body></html>", nullptr));
        labelC2__2_dollars100->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">$100</span></p></body></html>", nullptr));
        labelC2__2_cent01->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\"> 1\302\242</span></p></body></html>", nullptr));
        labelC2__2_cents05->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\"> 5\302\242</span></p></body></html>", nullptr));
        labelC2__2_cents10->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">10\302\242</span></p></body></html>", nullptr));
        labelC2__2_cents25->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">25\302\242</span></p></body></html>", nullptr));
        labelC2__2_cents50->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">50\302\242</span></p></body></html>", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = tableC2__2_clientAccountData->horizontalHeaderItem(0);
        ___qtablewidgetitem37->setText(QCoreApplication::translate("TrustyBankClass", "Account Data", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = tableC2__2_clientAccountData->verticalHeaderItem(0);
        ___qtablewidgetitem38->setText(QCoreApplication::translate("TrustyBankClass", "Account Number", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = tableC2__2_clientAccountData->verticalHeaderItem(1);
        ___qtablewidgetitem39->setText(QCoreApplication::translate("TrustyBankClass", "Balance", nullptr));

        const bool __sortingEnabled3 = tableC2__2_clientAccountData->isSortingEnabled();
        tableC2__2_clientAccountData->setSortingEnabled(false);
        tableC2__2_clientAccountData->setSortingEnabled(__sortingEnabled3);

        pushC2__2_withdraw->setText(QCoreApplication::translate("TrustyBankClass", "Withdraw", nullptr));
        labelC2__2_ammount->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p><span style=\" font-weight:700;\">Withdrawal amount:</span></p></body></html>", nullptr));
        trustyBankInterface->setTabText(trustyBankInterface->indexOf(C2__2Withdrawal), QCoreApplication::translate("TrustyBankClass", "Withdrawal", nullptr));
        pushC2__3_back->setText(QCoreApplication::translate("TrustyBankClass", "Back", nullptr));
        labelC2__3_firstName->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"right\"><span style=\" font-weight:700;\">First name:</span></p></body></html>", nullptr));
        labelC2__3_amount->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"right\"><span style=\" font-weight:700;\">Transfer amount:</span></p></body></html>", nullptr));
        labelC2__3_accountNumber->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"right\"><span style=\" font-weight:700;\">Account number:</span></p></body></html>", nullptr));
        labelC2__3_lastName->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"right\"><span style=\" font-weight:700;\">Last name:</span></p></body></html>", nullptr));
        pushC2__3_transfer->setText(QCoreApplication::translate("TrustyBankClass", "Make a transfer", nullptr));
        trustyBankInterface->setTabText(trustyBankInterface->indexOf(C2__3Transfer), QCoreApplication::translate("TrustyBankClass", "Transfer", nullptr));
        pushC2__4_back->setText(QCoreApplication::translate("TrustyBankClass", "Back", nullptr));
        labelC2__4_phoneNumber->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"right\"><span style=\" font-weight:700;\">Phone number:</span></p></body></html>", nullptr));
        labelC2__4_firstName->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"right\"><span style=\" font-weight:700;\">First name:</span></p></body></html>", nullptr));
        labelC2__4_adress->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"right\"><span style=\" font-weight:700;\">Adress:</span></p></body></html>", nullptr));
        labelC2__4_lastName->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"right\"><span style=\" font-weight:700;\">Last name:</span></p></body></html>", nullptr));
        labelC2__4_dateOfBirth->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"right\"><span style=\" font-weight:700;\">Date of Birth:</span></p></body></html>", nullptr));
        pushC2__4_changeTheData->setText(QCoreApplication::translate("TrustyBankClass", "Change client data", nullptr));
        labelC2__4_sSN->setText(QCoreApplication::translate("TrustyBankClass", "<html><head/><body><p align=\"right\"><span style=\" font-weight:700;\">SSN:</span></p></body></html>", nullptr));
        pushC2__4_dateOfBirthInfo->setText(QCoreApplication::translate("TrustyBankClass", "?", nullptr));
        pushC2__4_sSNInfo->setText(QCoreApplication::translate("TrustyBankClass", "?", nullptr));
        trustyBankInterface->setTabText(trustyBankInterface->indexOf(C2__4ClientDataEditing), QCoreApplication::translate("TrustyBankClass", "Client Data Editing", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrustyBankClass: public Ui_TrustyBankClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRUSTYBANK_H
