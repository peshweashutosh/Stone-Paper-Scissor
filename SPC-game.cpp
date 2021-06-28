#include<iostream>
#include<stdlib.h>
#include<cstdlib>				//liberary for srand function
using namespace std;

int main() {
	srand(NULL);				//it initialises random number generators
	
	int computer = rand() % 3 + 1;		
	
	int you=0;
	int i, n;
	int c_count = 0;		//these are two counter c_count for points scored by computer and y_count for user's score
	int y_count = 0;
	
	string sto = "1<= Stone\n";
	string ppr = "2<= Paper\n";
	string sci = "3<= Scissor\n";
	
	cout<<"\t\t\t\t\t====================================================\n";
	cout<<"\t\t\t\t\t                Stone Paper Scissor!!!\n";
	cout<<"\t\t\t\t\t====================================================\n";
	cout<<"==NEW GAME==\n\n";
	cout<<"Enter score limit: ";		//we are taking final score limit and also defining till when the loop will work
	cin>>n;
	
	cout<<sto;
	cout<<ppr;
	cout<<sci;
	

	
	for(i=0; i<n; i++) {
	
	
	cout << "\tChoose: ";			//here we ask user to insert 1,2 or 3 which represent stone, paper and scissor
	cin >> you;
	
	cout<<"\tYou chooose==>";		//switch case is used to display what user has chosen 
	switch(you) {
		case 1: cout<< sto;
			break;
		case 2: cout<< ppr;
			break;
		case 3: cout<<sci;
			break;
		default :
			cout<<"Invalid selection\n"; // in case user enters numbers other than 1,2 and 3 this will be displayed
	}
	
		
	cout<<"\tComputer chooose==>";		//this block will display what number is generated after calculation 
	switch(computer) {
		case 1: cout<< sto;
			break;
		case 2: cout<< ppr;
			break;
		case 3: cout<<sci;
			break;
		default :
			cout<<"Invalid selection\n"; 
	}
	//below code compares the numbers and according to that counters are incremented
	
	if(you == computer){			//we all know if both player have same play it's a tie
    cout << "\tDraw Game\n";
  }
  else if(you == 1 && computer == 3){
    cout << "\tYou Win\n";
    	y_count++;
  }
  else if(you == 3 && computer == 2){
    cout << "\tYou Win\n";
    	y_count++;
  }
  else if(you == 2 && computer == 1){
    cout << "\tYou Win\n";
    	y_count++;
  }
  else{
    cout << "Computer Wins!\n";
    	c_count++;
  }
  	cout<<"*********************************************"<<endl;
	cout<<"Your score: "<<y_count<<endl;
	cout<<"Computer score: "<<c_count<<endl;
	cout<<"*********************************************"<<endl;
  
}
	cout<<"===FINAL SCORE==="<<endl;		//in the end both the countrs are compared using comparison operator and if else to decide the winner
	if(c_count>y_count) {
  		cout<<"Computer Won!!";
	  }	
	else
		cout<<"You won";
}
