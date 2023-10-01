#include<iostream>
using namespace std;

int main()
{
	int qty;
	int choice;
	
	int QRooms=0 , QPasta=0 , QBurger=0 , Qnoodles=0 , Qshake=0 , Qchicken=0;    //holds QUANTITY
	
	int SRooms=0 , SPasta=0 , SBurger=0 , Snoodles=0 , Sshake=0 , Schicken=0;   //QUANTITY OF ITMEMS SOLD
	
	int Total_Rooms=0 , Total_Pasta=0 , Total_Burger=0 , Total_noodles=0 , Total_shake=0 , Total_chicken=0;   //TOTAL PRICE OF ITEMS
	
	cout<<"\n\t Quantity of items we have :";
	cout<<"\n\t Rooms Available:";
	cin>> QRooms;
	cout<<"\n Quantity of Pasta:";
	cin>> QPasta;
	cout<<"\n Quantity of Burger:";
	cin>> QBurger;
	cout<<"\n Quantity of Noodles:";
	cin>> Qnoodles;
	cout<<"\n Quantity of Shake:";
	cin>> Qshake;
	cout<<"\n Quantity of Chicken-Roll:";
	cin>> Qchicken;
	
	m:
	cout<<"\n\t\t\t   Please select from the menu options ";
	cout<<"\n\n 1. Rooms";
	cout<<"\n\n 2. Pasta";
	cout<<"\n\n 3. Burger";
	cout<<"\n\n 4. noodles";
	cout<<"\n\n 5. Shake";
	cout<<"\n\n 6. Chicken-Roll";
	cout<<"\n\n 7. Information regarding sales and collection";
	cout<<"\n\n 8. Exit";
	
	
	cout<<"\n \n Please enter your choice!";
	cin>> choice;
	
	switch(choice)
	{ 
	    case 1:
	       cout<<"ENTER THE NO. OF ROOMS YOU WANT: ";
	       cin>>qty;
	       if(QRooms-SRooms >= qty)
	       {
	   	        SRooms = SRooms+qty;
	   	        Total_Rooms = Total_Rooms + (qty * 1200);
	   	        cout<<"\n\n\t\t"<<qty<<"Room/Rooms have been alloted to you!";
	   	
	       }
	       else
	   	        cout<<"\n\t Only "<<QRooms-SRooms<<" rooms remains in the hotel";
	   	        break;
	
	    case 2:
	        cout<<"ENTER PASTA QUANTITY YOU WANT: ";
	        cin>>qty;
	        if(QPasta-SPasta >= qty)
	        {
	   	        SPasta = SPasta+qty;
	   	        Total_Pasta = Total_Pasta + (qty * 250);
	   	        cout<<"\n\n\t\t"<<qty<<"Pasta have been ordered!";
	   	
	        }
	        else
	        	cout<<"\n\t Only "<<QPasta-SPasta<<" pasta remains in the menu";
	        	break;
	        	
	    case 3:
	        cout<<"ENTER BURGER QUANTITY YOU WANT: ";
	        cin>>qty;
	        if(QBurger-SBurger >= qty)
	        {
	   	        SBurger = SBurger + qty;
	   	        Total_Burger = Total_Burger + (qty * 100);
	   	        cout<<"\n\n\t\t"<<qty<<"Burger have been ordered!";
	   	
	        }
	        else
	        	cout<<"\n\t Only "<< QBurger - SBurger<<" Burger remains in the menu";
	        	break;
	        	
	    case 4:
	        cout<<"ENTER NOODLES QUANTITY YOU WANT: ";
	        cin>>qty;
	        if(Qnoodles-Snoodles >= qty)
	        {
	   	        Snoodles = Snoodles+qty;
	   	        Total_noodles = Total_noodles + (qty * 120);
	   	        cout<<"\n\n\t\t"<<qty<<"Noodles have been ordered!";
	   	
	        }
	        else
	        	cout<<"\n\t Only "<<Qnoodles-Snoodles<<" noodles remains in the menu";
	        	break;
	        	
	    case 5:
	        cout<<"ENTER SHAKE QUANTITY YOU WANT: ";
	        cin>>qty;
	        if(Qshake-Sshake >= qty)
	        {
	   	        Sshake = Sshake+qty;
	   	        Total_shake = Total_shake + (qty * 150);
	   	        cout<<"\n\n\t\t"<<qty<<"Shake have been ordered!";
	   	
	        }
	        else
	        	cout<<"\n\t Only "<<Qshake-Sshake<<" Shake remains in the menu";
	        	break;
	   
	    case 6:
	        cout<<"ENTER CHICKEN-ROLL QUANTITY YOU WANT: ";
	        cin>>qty;
	        if(Qchicken-Schicken >= qty)
	        {
	   	        Schicken = Schicken+qty;
	   	        Total_chicken = Total_chicken + (qty * 110);
	   	        cout<<"\n\n\t\t"<<qty<<"chicken-roll have been ordered!";
	   	
	        }
	        else
	        	cout<<"\n\t Only "<<Qchicken-Schicken<<" chicken-roll remains in the menu";
	        	break;
	        	
	    case 7:
	    	cout<<"\n\tDETAILS OF SALES AND COLLECTION";
	    	cout<<"\n\n Number of rooms we had:"<<QRooms;
	    	cout<<"\n\n Number of rooms are booked:"<<SRooms;
	    	cout<<"\n\n Number of unoccupied rooms:"<<QRooms-SRooms;
	    	cout<<"\n\n Sales of total rooms for the day:"<<Total_Rooms;
	    	
	    	
	    	cout<<"\n\n Number of Pastas we had:"<<QPasta;
	    	cout<<"\n\n Number of Pastas sold:"<<SPasta;
	    	cout<<"\n\n Number of remaining Pasta:"<<QPasta-SPasta;
	    	cout<<"\n\n Sales of total Pasta for the day:"<<Total_Pasta;
	    	
	    	cout<<"\n\n Number of Burgers we had:"<<QBurger;
	    	cout<<"\n\n Number of Burgers sold:"<<SBurger;
	    	cout<<"\n\n Number of remaining Burgers:"<< QBurger - SBurger;
	    	cout<<"\n\n Sales of total Burgers for the day:"<<Total_Burger;
	    	
	    	cout<<"\n\n Number of noodles we had:"<<Qnoodles;
	    	cout<<"\n\n Number of noodles sold:"<<Snoodles;
	    	cout<<"\n\n Number of remaining noodles:"<<Qnoodles-Snoodles;
	    	cout<<"\n\n Sales of total noodles for the day:"<<Total_noodles;
	    	
	    	cout<<"\n\n Number of shake we had:"<<Qshake;
	    	cout<<"\n\n Number of shake sold:"<<Sshake;
	    	cout<<"\n\n Number of remaining shake:"<<Qshake-Sshake;
	    	cout<<"\n\n Sales of total shakes for the day:"<<Total_shake;
	    	
	    	cout<<"\n\n Number of chicken-roll we had:"<<Qchicken;
	    	cout<<"\n\n Number of chicken-roll sold:"<<Schicken;
	    	cout<<"\n\n Number of remaining chicken-roll:"<<Qchicken-Schicken;
	    	cout<<"\n\n Sales of total chicken-roll for the day:"<<Total_chicken;
	    	break;
	    	
	    case 8:
	    	exit(0);
	    	
	    	default:
	    		cout<<"\n PLEASE SELECT THE NUMBERS MENTIONED ABOVE!";
	    
	    	
	    	
	}
	goto m;
	
		
	
	
	
	 
}
