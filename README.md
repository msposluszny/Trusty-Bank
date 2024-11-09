# Trusty-Bank
TrustyBank is a program designed to simulate, sometimes very realistically and sometimes less so, a real banking system in which a banker might work. Depending on the specific functionality – and there are quite a few – the program addresses various challenges that one might actually encounter when building a real banking system.

This README focuses on the TrustyBank class, as I wanted to keep the documentation concise. The Client class is straightforward, so I didn’t find it necessary to include it in detail. I hope my descriptions help convey a clear picture of how the program works, and to make this process as smooth as possible, I have also recorded a YouTube video where I demonstrate the program in action: <link>


^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

CLASS TrustyBank

^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

LIST OF MOST IMPORTANT FUNCTIONS:
1. Constructor
2. validateInput(const QString& input, const QString& type)
3. loadUsers()
4. setupTabs(const QString& level)
5. validatePassword(const QString& password)
6. generateClients()
7. on_pushA1_login_clicked()
8. on_pushA1_register_clicked()
9. on_pushA2_register_clicked()
10. saveUser(const QString& username, const QString& password, const QMap<QString, int>& cash)
11. loadClientData(const Client& client)
12. showClients()
13. on_pushB1_clientView_clicked()
14. on_pushB1_search_clicked()
15. on_pushB2__1_openAnAccount_clicked()
16. on_pushB2__2_openAnAccount_clicked()
17. updateCoinTable() & updateBillTable() & updateCashValueTable()
18. on_pushB3_doIt_clicked()
19. on_pushB3__2_remittance_clicked()
20. checkCashReconciliation()
21. on_pushB4__2_reconcile_clicked()
22. validateDepositAmount()
23. on_pushC2__1_deposit_clicked()
24. on_pushC2__2_withdraw_clicked()
25. on_pushC2__3_transfer_clicked()
26. on_pushC2__4_changeTheData_clicked()




*****************************************************************************************************************
Constructor 
*****************************************************************************************************************

The TrustyBank class constructor initializes several standard components, including the `clientsGenerated` bool variable, set to false initially. This variable controls whether the `generateClients()` function should generate new clients.

On the first run of `generateClients()`, the `clientsGenerated` variable is set to true, effectively preventing multiple generations of clients within a single program session. This ensures that exactly 100 clients with random data are created according to the initial requirements. Additional clients can only be added manually by the user. The `clientsGenerated` variable enforces this rule, ensuring the application functions as intended.



*****************************************************************************************************************
validateInput(const QString& input, const QString& type)
*****************************************************************************************************************

A key function in the bank simulation, responsible for validating the accuracy of user input data. If data does not match the pattern, the function returns false.

Parameters:

1. QString input - the value entered by the user in QLineEdit. It’s recommended to convert the value to QString and then pass it as the first argument;
2. QString type - the type of data to be validated. Supported types include: "firstName", "lastName", "lastNameWithHyphen", "ssn", "phoneNumber", "dob" (date of birth), "address", "accountNumber", and "amount". The type determines which pattern will be used to validate the input. For example, the requirement for a first name is an initial uppercase letter, while an account number must consist of 12 digits.

Usage in the Project:
The validateInput function is used in essential operations such as user registration, making transfers, opening a new account, and editing existing client data.


*****************************************************************************************************************
loadUsers()
*****************************************************************************************************************

The `loadUsers()` function plays a key role in my application, as it is responsible for loading cashier login information, passwords, and cash denominations from a JSON file. This function is called in the TrustyBank class constructor and reads JSON data into appropriate structures within the C++ code.

How it works in JSON?

The JSON file contains three primary elements for each cashier:
1. username – the cashier’s username (e.g., "mateusz_posluszny");
2. password – the cashier’s password;
3. cash – a nested structure storing different cash denominations (e.g., "$1": 0, "$5": 0).
How it works in C++:

In C++, I use two QMap structures?

1. The `users` map stores the cashier’s login and password:

cpp:
users["mateusz_posluszny"] = "JustCheckingPattern123$";

2. The `userCash` map stores the cashier’s login and cash denominations:

cpp:
userCash["mateusz_posluszny"] = {{"$1", 0}, {"$5", 0}, {"$10", 0}};


This structure allows for quick access to each cashier’s data using their login as a key, making it easy to retrieve and manage user data throughout my banking application.



*****************************************************************************************************************
setupTabs(const QString& level)
*****************************************************************************************************************

The `setupTabs()` function manages the layout and navigation across the main sections of the TrustyBank application. It dynamically loads different tabs based on the provided level parameter, keeping the interface clean and intuitive.

How it works?

Each level corresponds to a specific state of the interface, clearing previous tabs and loading only those relevant to the given context. Here are some examples:

1. "Login" – displays the login tab only, to keep focus on authentication;
2. "Registration" – shows the registration form when creating a new account.
3. "Main" – loads core tabs when you're logged in: List of Clients, New Client, Treasury Management, and Logout.
4. "New Account" – displays fields needed to create a new account.
5. "Client View" – shows details of a selected client with actions like Deposit, Withdrawal, Transfer, and Client Data Editing.


*****************************************************************************************************************
validatePassword(const QString& password)
*****************************************************************************************************************

This is another simple function, similar to `validateInput()`, but this time it takes only a QString parameter containing the password the user attempted to set for their account. The password must be at least 8 characters long and include at least one special character, one uppercase letter, and one lowercase letter. If the password does not match this pattern, the function returns false.



*****************************************************************************************************************
generateClients()
*****************************************************************************************************************

The `generateClients()` function creates 100 instances of the Client class, which are stored in the `m_clients` structure. Each instance represents a unique bank client, with details that include:

1. First Name – Randomly selected from a list of the 100 most popular male and female names in the U.S., maintaining a 50/50 gender split.
2. Last Name – Randomly chosen from a list of the 100 most common surnames in the U.S.
3. Phone Number – Randomly generated with a fixed prefix, “+1 213.”
4. Date of Birth – Random date between January 1, 1924, and December 31, 2006, ensuring client ages range from 18 to 100 years.
5. Address – Randomly assigned house number and one of the 100 most popular street names in Los Angeles.
6. SSN – A randomly generated number in the format “XXX-XX-XXXX.”
7. Account Number – Unique identifier, with the last three digits reflecting the client’s ID.
8. Account Balance:
	95% of clients have balances between $1 and $100,000.
	5% of clients have balances between $100,000 and $30,000,000.

The function ensures that each client’s data is unique and realistically formatted to meet banking standards.


*****************************************************************************************************************
on_pushA1_login_clicked()
*****************************************************************************************************************

The function checks the validity of the username and password entered by the user. After the data is entered, the function searches the `users` map to verify if there is a user with the provided username and if the entered password is correct. The currently logged-in user is stored in the `currentLoggedInUser` variable, which is assigned the username string after login. `setupTabs()`, one the other hand, will take us to the 4 main tabs of the program.


*****************************************************************************************************************
on_pushA1_register_clicked()
*****************************************************************************************************************

A simple function that navigates to the registration tab (A2) using setupTabs. This function calls resetLogin to clear all input fields in the login tab (A1), ensuring the user starts with empty fields when beginning registration.


*****************************************************************************************************************
on_pushA2_register_clicked()
*****************************************************************************************************************

This function handles the registration of a new user. It retrieves the user-entered data (first name, last name, password, and password confirmation) and converts it into QString format. It then verifies the correctness of the data using the `validateInput()` function (for the first and last name) and `validatePassword()` (for the password), and also ensures the password and confirmation match.

Additional functionality:

1. Generates the user’s username by joining their lowercase first and last names, separated by an underscore.
2. Initializes the user’s cash denomination structure in the `userCash` map, where each denomination is set to 0.
3. Finally, the `saveUser()` function saves all user data – username, password, and cash denomination structure – to the users.json file.


*****************************************************************************************************************
saveUser(const QString& username, const QString& password, const QMap<QString, int>& cash)
*****************************************************************************************************************

The saveUser function saves user information, including the username, password, and cash denominations, to the users.json file.

Parameters:

1. username – The user's name.
2. password – The user's password.
3. cash – A map (QMap) containing the user’s cash denominations, e.g., {"$1": 5, "$5": 3}.

Function Operation:

1. Adds or updates entries in the `users` map (username and password) and `userCash` map (user's cash denominations).
2. Creates an array, userArray, where it stores data for each user. For each user, generates a QJsonObject containing the username, password, and cash denominations.
3. Creates a QJsonDocument from the userArray, writes it to the users.json file, and then closes the file.


*****************************************************************************************************************
loadClientData(const Client& client)
*****************************************************************************************************************

The `loadClientData` function takes a `Client` object as a parameter and populates the client data in the relevant tables located in the `C1` (Client View), `C2__1` (Deposit), and `C2__2` (Withdrawal) tabs.

Functionality:

1. At the beginning, the class variable `temp_client` is updated to store the data of the currently selected client.
2. This approach allows `loadClientData` to be called with `temp_client` as a parameter, enabling a quick refresh of the tables after an operation, e.g. after withdrawal.


*****************************************************************************************************************
showClients()
*****************************************************************************************************************

The `showClients()` function is straightforward: it iterates through the `m_clients` map and populates the main table in the B1 (List of Clients) tab with data for each client. It is called, for example, after a user edits client data or upon login.


*****************************************************************************************************************
on_pushB1_clientView_clicked()
*****************************************************************************************************************

If a client is selected in the B1 table, this function will locate the client in the `m_clients` map and pass them as a parameter to the `loadClientData()` function so that their data is loaded into the tables in the C1 (Client View), C2__1 (Deposit), and C2__2 (Withdrawal) tabs. The `setupTabs()` function then navigates to the C1 tab.



*****************************************************************************************************************
on_pushB1_search_clicked()
*****************************************************************************************************************

In brief, if the user enters specific client information in the input fields on tab B1 and clicks the pushB1_search button, the table will display only the client matching the entered information, if such a client exists.


*****************************************************************************************************************
on_pushB2__1_openAnAccount_clicked()
*****************************************************************************************************************

In this function, if the user has filled in the preliminary client information, the `validateInput()` function has returned true (validating this data), and there are no other issues such as non-resident status or a duplicate SSN matching an existing client, then the data is saved in the `temporaryClientData` map. The user is then redirected to the 'B2__2' (NewAccount) tab, where they can complete the account creation process for the new client. Once finalized, the client is added as an object of the Client class to the `m_clients` map.


*****************************************************************************************************************
on_pushB2__2_openAnAccount_clicked()
*****************************************************************************************************************

In this function, the user completes the account opening process. The client's age is validated to ensure it is between 18 and 100 years, and `validateInput()` checks the overall correctness of the entered data. Before adding the client to `m_clients`, an account number is generated where, for instance, the last three digits would be 100 if this is the first account opened in the current session. Finally, if account creation is successful, the user is redirected to the main program tabs: B1-B4.


*****************************************************************************************************************
updateCoinTable() & updateBillTable() & updateCashValueTable()
*****************************************************************************************************************

These three functions do exactly what their names suggest: they update the three tables on tab 'B3' (Treasury Management). The first, `updateCoinTable()`, displays the quantity of each coin denomination the user has. The second, `updateBillTable()`, shows the number of each banknote denomination. Finally, `updateCashValueTable()` calculates and displays the total monetary value of all coins, bills, and overall cash that the user possesses.


*****************************************************************************************************************
on_pushB3_doIt_clicked()
*****************************************************************************************************************

When the user clicks `pushB3_doIt()` a fictional treasurer grants them exactly $50,000 in predefined denominations, with the largest bills being most common but including a bit of every denomination. The condition is simple: the cashier’s multivault cannot exceed $100,000, as this is the maximum amount covered by insurance in the fictional Trusty Bank in case of a robbery. The "treasurer" checks if the allowance can be granted under this limit. The `userCash` map is updated after the allowance, as is the JSON file. The cash management tables on tab B3 are also refreshed.


*****************************************************************************************************************
on_pushB3__2_remittance_clicked()
*****************************************************************************************************************

Upon clicking pushB3__2_remittance, the user is redirected to the 'B3__2' (Cash Remittance) tab. Here, they enter the amount remitted to our fictional friend, the "treasurer", in the designated input fields, along with the breakdown by denomination. After completing the remittance, the `userCash` map and the JSON file are updated, and the cash management tables on the B3 tab are refreshed.


*****************************************************************************************************************
checkCashReconciliation()
*****************************************************************************************************************

After clicking pushB4_logout, we are taken to the 'B4__2' (Cashier Tally) tab, where, at the end of the workday, the cashier should verify the cash denominations. In a real bank, this would require physically counting the cash. Here, however, if you wish to fully test this functionality, I recommend taking a screenshot of the Treasury Management tables beforehand.

In this section, there’s no need to enter the total cash amount, as real cashiers also are not required to know it. Edit lines are only used to enter the correct denominations, while the program calculates the totals.

The `checkCashReconciliation()` function returns true if everything is accurate, and false if there are any discrepancies. Possible issues include:

1. The actual cash value does not match the expected amount the cashier should have.
2. The cash value is correct, but the denominations do not match (for example, `userCash` tells us that the cashier should have two $50 bills for a $100 total, but instead has one $100 bill – this results in a denomination mismatch).


*****************************************************************************************************************
on_pushB4__2_reconcile_clicked()
*****************************************************************************************************************

If the previous function, `checkCashReconciliation()`, returns true, this function will complete immediately, informing the user of a successful reconciliation. However, if the previous function returns false, the variable `discrepancyCount` becomes crucial. On the first attempt, this variable increments to 1; if it exceeds this value, the current function will start analyzing the specific discrepancy by comparing the user-declared amounts with actual values in the `userCash` map.

The user will be informed of one of the following:

1. The shortage amount;
2. The surplus amount;
3. If neither shortage nor surplus is found, it indicates a discrepancy in denominations. However, as in a real bank, the user will not be informed of the exact denomination causing the issue.

At the end, if the reconciliation cannot be completed accurately, the user will be notified of the requirement to fill out a mock report for a mock director, and the `setupTabs()` function will redirect the user to the Login tab.


*****************************************************************************************************************
validateDepositAmount()
*****************************************************************************************************************

This function returns true if the actual total amount derived from the denominations declared by the user when making a client deposit matches the total amount entered by the user. This function is used in `on_pushC2__1_deposit_clicked()`, and if the returned value is false, the _clicked function will notify the user that something is incorrect.

*****************************************************************************************************************
on_pushC2__1_deposit_clicked()
*****************************************************************************************************************

If the `validateDepositAmount()` function returns true, the denominations declared by the user during the deposit will be added to their denomination structure in the `userCash` map, and the client’s balance will be increased by the deposited amount. The function is long, but this one sentence effectively summarizes its purpose without unnecessary details.


*****************************************************************************************************************
on_pushC2__2_withdraw_clicked()
*****************************************************************************************************************

For withdrawals, I didn’t create a separate validation function like `validateDepositAmount()`; instead, all checks are handled within this single function. Withdrawals generally require a bit more code than deposits because we need to verify that the client has enough funds in their account to complete the withdrawal and that the cashier has sufficient cash on hand. This function performs those checks by ensuring that the declared amount matches the actual amount and then verifies both the client’s and cashier’s funds. If all checks pass, the `userCash` map is updated by deducting the specified denominations, updating their total values, and reducing the client’s balance by the withdrawn amount. Finally, all changes are saved to the JSON file based on the updated `userCash`.


*****************************************************************************************************************
on_pushC2__3_transfer_clicked()
*****************************************************************************************************************

From a coding perspective, executing a transfer is simpler than a withdrawal or deposit. First, the details of one of the clients in `m_clients` are filled in, and the data is validated using `validateInput()`. The function searches for the beneficiary client in `m_clients` and performs basic checks, such as verifying that the sending client has sufficient funds and is not attempting to transfer money to their own account. If all conditions are met, the sender’s account is debited, and the beneficiary’s account is credited.


*****************************************************************************************************************
on_pushC2__4_changeTheData_clicked()
*****************************************************************************************************************

This function allows us to edit the data of existing clients. There are six different fields that can be edited. I recognize that allowing edits to two of these fields, namely Date of Birth and SSN, might seem controversial, so I'll briefly explain why I allowed this in the client data editing feature. The reason is simple: bank tellers occasionally make mistakes when opening accounts, such as entering the wrong birth year. For example, a teller might mistakenly enter 1987 instead of 1997. In a real banking application, not allowing corrections for such data could lead to significant issues, so I have provided the option to edit these fields in this simulation.

Now, for a bit of technical detail on how this function works: the key variable here is bool isValid. If an edit line isn’t empty (since, in tab C2__4, `users` can choose to fill only the fields they wish to edit), but `validateInput()` does not return true, it means there’s an error. In that case, isValid is set to false, and at the end of the function, the user will be informed that the entered data was incorrect. However, if everything is correct, we use pointers to objects in the `m_clients` map to apply the changes directly to the client data. The updates are applied immediately by calling the appropriate setter function from the Client class on this object, which instantly updates the specific client’s data in `m_clients` (this same pointer-based approach is also used in deposit, withdrawal, and transfer functions).



!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!! THANK YOU FOR READING THIS !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

I realize there are many more details that could be discussed about this program (and yes, I’m fully aware that I could have created more than just the Client and TrustyBank classes, haha), but I wanted to keep this README shorter than the program itself. I also sincerely hope we’ll get a chance to discuss this project in person during an interview. See you soon! :)
