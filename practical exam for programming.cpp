#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	 string input = "";
	 char letter = ' ';
	 string input2 = "";
	 string username;
 	 string password;
	 double deposit = 0;
 	 double withdrawal = 0;
	 double balance = 0;
	
	 do {
	
		cout << "Hi welcome to Mr. Senny's ATM Machine!" << endl;
	    cout << "Please select an option from the menu below: " << endl;
		cout << "l > login " << endl;
	    cout << "c > create new account " << endl;
	    cout << "q > quit " << endl;
	    cin >> letter;
	
	   switch (letter){
		case 'l':
			cout << "Please enter your user name: " << endl;
			cin >> input;
			cout << "Please enter your password: " << endl;
			cin >> input2;
		 if (username == input && password == input2){
			cout << "Access Granted! " << endl;
			do {
				cout << "d > deposit money " << endl;
	            cout << "w > withdraw money " << endl;
	            cout << "r > request balance " << endl;
	            cin >> letter;
	    
		 switch (letter){
			case 'd':
			cout << "amount of deposit: $";
			cin >> deposit;
			balance = balance + deposit; 
			
		 break;	 
		 case 'w':
			cout << "amount of withdrawal: $";
			cin >> withdrawal;
			if (withdrawal > balance){
				
			cout << "Not enough balance! " << endl;	
			}
			else {
				balance = balance - withdrawal;
				
			}
		 break;	
		 case 'r':
			cout << "your balance is: $";
			cout << balance << endl;
		 break;
		 case 'q':
		 break;	
	
	  	} 
		
			
		
		           
	            
			} while (letter != 'q');
		} 
		 else {
			cout << "Log in failed! " << endl; 
		}
		 break;
		 case 'c':
		    cout << "Please enter your user name: " << endl;
			cin >> username;
			cout << "Please enter your password: " << endl;
			cin >> password;
			cout << "Your account has been created! " << endl;
		 break;	
		 case 'q':
		 break;
		
	}
	
	  
	
	
    }   while (letter != 'q');
		cout << "Thanks for stopping by! ";

	  

	}
