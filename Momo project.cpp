#include <iostream>
using namespace std;

int main() {

	int defaultpin=0000;
	float defaultbalance=1000;
	int pin;
	int count=0;
	int option;
	int tel_num;
	int receiver_pin;
	float amount;
	string confirm;
	int conf_PIN, counter=0;

	while(true){
		    cout << "Welcome to My momo app\n";
		    cout << "\n\n";
		    cout << "Enter your pin: ";
		    cin >> defaultpin;
	 if(defaultpin == 0000){
	 	    cout <<"Authentication successfully!\n";
	while(true){
		    cout << "Yello Welcome to Mymomo app\n";
		    cout << "------------------------------\n";
		    cout << "Select an option" << endl;
		    cout << "1.Check balance" << endl;
		    cout << "2.Send Money" << endl;
		    cout << "3.Reset/change pin" << endl;
		    cout << "4.Exit" << endl;
		    cin >> option;
	switch(option) {
		case 1:


			while(counter<3){
				cout<<"Please Enter your MoMo Pin to confirm Transaction."<<endl;
				cin>>conf_PIN;
				if(conf_PIN == defaultpin){
					cout << "Your balance is: " << defaultbalance << endl;
					break;
				}
				else{
					cout<<"Wrong Pin"<<endl;
					counter++;
				}

			}
		 break;
		case 2:
			cout << "Enter receiver's telephone number: ";
			cin >> tel_num;
			cout << "Enter receiver's pin: ";
			cin >> receiver_pin;
			 if( receiver_pin == defaultpin) {
			 	    cout << "Valid receiver's pin!\n";
			 	 break;
			 }
			        cout << "Enter amount you want to send: ";
			        cin >> amount;
			 if( amount > defaultbalance){
			 	    cout << "Insufficient balance!\n";
			 	 break;
			 }
			        cout << "Do you want to send " << amount  << " to " << receiver_pin << " ?(yes/no)";
			        cin >> confirm;
			 if(confirm == "yes") {
			 	  defaultbalance = defaultbalance - amount;
			 	    cout << "sent "<< amount << " to " << receiver_pin << " successfully!\n";
			 	    cout << "Your current balance is: " << defaultbalance << endl;
			 }
			 else{
			 	    cout << "Transaction failed!\n";
			 }
	     break;
	    case 3:
		    cout << "Enter previous pin: ";
			cin >> defaultpin;
	 if(defaultpin != 0000){
	 	    cout << "Invalid pincode!\n";
	 	 break;
	 }
	        cout << "Enter new pin: ";
	        cin >> pin;
	        cout << "Pincode resetted successfully!\n";
	     break;
		case 4:
		    cout << "Thanks for using Mymomo app.\n";
		  return 0;
		default:
		    cout << "Invalid option choosed,try again!\n";
		 break;
	}
  }
}
    else{
    	count++;
     if(count == 3){
     	    cout << "Authentication failed!,Try later.\n";
     	  return 0;
	 }
	else{
		    cout << "Invalid Pin,try again\n";
	}
  }
}


	return 0;
}

