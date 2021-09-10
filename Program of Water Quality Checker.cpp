
#include<iostream>
#include<fstream>
using namespace std;

float deviate1(float n);
float deviate2(float n);
float deviate3(float n);
float deviate4(float n);
float deviate5(float n);
void write();
void display();
void delete_file();

class Water_Quality_Checker
{  float tur,bod,tds,ph,nitrate,sulphate,carbonate,phosphate,val1,val2,val3,val4,val5,val6,val7,val8,val9;
	int choice;
	
public:
	
   void Welcome()
	{
		cout<<"*************************************************************"<<endl;
		cout<<"WELCOME TO WATER QUALITY CHECKER "<<endl;
		cout<<"*************************************************************"<<endl<<endl;
	}
	


    void Turbidity()
	{ cout<<"ENTER THE VALUE OF TURBIDITY IN NTU  "<<endl;
	  cin>>tur;
	   val1=deviate1(tur);
	  // cout<<val1<<endl;

	  val2= (val1*100)/10;
	  //cout<<val2<<endl;
	 if(val2==0)
	 {
	 	cout<<"EXCELLENT "<<endl<<endl;
	 }
	 else
	 if((val2>0)&&(val2<25))
	 {
	 	cout<<"VERY GOOD "<<endl<<endl;
	 	
	 }
	 else 
	 if((val2>=25)&&(val2<50))
	 {
	 	cout<<" GOOD "<<endl<<endl;
	 }
	 else 
	 if((val2>=50)&&(val2<75))
	 {
	 	cout<<" BAD "<<endl<<endl;
	 }
	 else 
	 if((val2>=75)&&(val2<=100))
	 {
	 	cout<<" POOR "<<endl<<endl;
	 }
	 else
	 {
	 	cout<<"CANNOT BE CATEGORISED"<<endl<<endl;
	 }
	  
}
	
	
	
      void BOD()
	{
		cout<<"ENTER THE VALUE OF BOD IN PPM"<<endl;
		cin>>bod;
		if((bod>=0.75)&&(bod<=1.5))
		{
			cout<<"EXCELLENT "<<endl<<endl;
		}
		else 
		if((bod>1.5)&&(bod<=2.0))
		{
			cout<<"VERY GOOD "<<endl<<endl;
		}
		else 
		if((bod>2)&&(bod<=3.0))
		{
			cout<<"G00D"<<endl<<endl;
		}
		else
		{ 
		cout<<"POOR"<<endl<<endl;
		}
	}
	
	void TDS()
	{
	cout<<"ENTER THE VALUE OF TOTAL DISSOLVED SOLIDS "<<endl;
	cin>>tds;
	
	if((tds>=0)&&(tds<70))
	    { 
	 	cout<<"VERY SOFT "<<endl<<endl;
	    }
		else
		if((tds>=70)&&(tds<140))
		{
			cout<<"SOFT "<<endl<<endl;
		}
		else 
		if((tds>=140)&&(tds<210))
		{
			cout<<"SLIGHTLY HARD "<<endl<<endl;
		}
		else 
		if((tds>=210)&&(tds<320))
		{
			cout<<"MODERATELY HARD "<<endl<<endl;
		}
		else 
		if((tds>=320)&&(tds<530))
		{
			cout<<"HARD "<<endl<<endl;
		}
		else
	    { 
	       cout<<"VERY HARD "<<endl<<endl;
		}
	}
	
	void pH()
	{
		cout<<"ENTER THE VALUE pH OF WATER "<<endl<<endl;
		cin>>ph;
		if((ph>=0)&&(ph<6.5))
		{
			cout<<"IT IS ACIDIC IN NATURE HENCE, NOT SUITABLE FOR DRINKING "<<endl<<endl;
		}
		else 
		if((ph>=6.5)&&(ph<8.5))
		{
			cout<<"IT IS NEUTRAL IN NATURE HENCE, SUITABLE FOR DRINKING "<<endl<<endl;
		}
		else
		if((ph>=8.5)&&(ph<=14))
		{
			cout<<"IT IS BASIC IN NATURE HENCE, NOT SUITABLE FOR DRINKING "<<endl<<endl;
		}
		else
		{  
		   cout<<"CANNOT BE CTEGORISED OR ENTERED WRONG VALUE "<<endl<<endl;
		}
	}
	
	void Nitrate()
	{
		cout<<"ENTER THE VALUE OF NITRATE IN PPM "<<endl;
		cin>>nitrate;
		 val3=deviate2(nitrate);
		 //cout<<val3<<endl;
	 val4= (val3*100)/10;
	 // cout<<val4<<endl;
	  if(val4==0)
	 {
	 	cout<<"EXCELLENT "<<endl<<endl;
	 }
	 else
	 if((val4>0)&&(val4<25))
	 {
	 	cout<<"VERY GOOD "<<endl<<endl;
	 	
	 }
	 else 
	 if((val4>=25)&&(val4<50))
	 {
	 	cout<<" GOOD "<<endl<<endl;
	 }
	 else 
	 if((val4>=50)&&(val4<75))
	 {
	 	cout<<" BAD "<<endl<<endl;
	 }
	 else 
	 if((val4>=75)&&(val4<=100))
	 {
	 	cout<<" POOR "<<endl<<endl;
	 }
	 else
	 {
	 	cout<<"CANNOT BE CATEGORISED"<<endl<<endl;
	 }
		
   }
   
   
   	void Carbonates()
	{
		cout<<"ENTER THE VALUE OF CARBONATES IN PPM "<<endl;
		cin>>carbonate;
		 val8=deviate3(carbonate);
		// cout<<val8<<endl;
	  val9= (val8*100)/100;
	 // cout<<val9<<endl;
	  if(val9==0)
	 {
	 	cout<<"EXCELLENT "<<endl<<endl;
	 }
	 else
	 if((val9>0)&&(val9<25))
	 {
	 	cout<<"VERY GOOD "<<endl<<endl;
	 	
	 }
	 else 
	 if((val9>=25)&&(val9<50))
	 {
	 	cout<<" GOOD "<<endl<<endl;
	 }
	 else 
	 if((val9>=50)&&(val9<75))
	 {
	 	cout<<" BAD "<<endl<<endl;
	 }
	 else 
	 if((val9>=75)&&(val9<=100))
	 {
	 	cout<<" POOR "<<endl<<endl;
	 }
	 else
	 {
	 	cout<<"CANNOT BE CATEGORISED"<<endl<<endl;
	 }
		
   }
   

   
   void Sulphate()
   {
   	cout<<"ENTER THE VALUE OF SULPHATE IN PPM "<<endl;
		cin>>sulphate;
     	val4=deviate4(sulphate);
	//	cout<<val4<<endl;
 val5= (val4*100)/100;
	// cout<<val5<<endl;
	  if(val5==0)
	 {
	 	cout<<"EXCELLENT "<<endl<<endl;
	 }
	 else
	 if((val5>0)&&(val5<25))
	 {
	 	cout<<"VERY GOOD "<<endl<<endl;
	 	
	 }
	 else 
	 if((val5>=25)&&(val5<50))
	 {
	 	cout<<" GOOD "<<endl<<endl;
	 }
	 else 
	 if((val5>=50)&&(val5<75))
	 {
	 	cout<<" BAD "<<endl<<endl;
	 }
	 else 
	 if((val5>=75)&&(val5<=100))
	 {
	 	cout<<" POOR "<<endl<<endl;
	 }
	 else
	 {
	 	cout<<"CANNOT BE CATEGORISED"<<endl<<endl;
	 }
	 
   }
   
   void Phosphate()
   {
   	cout<<"ENTER THE VALUE OF PHOSPHATE IN PPM "<<endl;
		cin>>phosphate;
		 val6=deviate5(phosphate);
		 //cout<<val6<<endl;
	  val7= (val6*100)/10;
	 // cout<<val7<<endl;
	  if(val7==0)
	 {
	 	cout<<"EXCELLENT "<<endl<<endl;
	 }
	 else
	 if((val7>0)&&(val7<25))
	 {
	 	cout<<"VERY GOOD "<<endl<<endl;
	 	
	 }
	 else 
	 if((val7>=25)&&(val7<50))
	 {
	 	cout<<" GOOD "<<endl<<endl;
	 }
	 else 
	 if((val7>=50)&&(val7<75))
	 {
	 	cout<<" BAD "<<endl<<endl;
	 }
	 else 
	 if((val7>=75)&&(val7<=100))
	 {
	 	cout<<" POOR "<<endl<<endl;
	 }
	 else
	 {
	 	cout<<"CANNOT BE CATEGORISED"<<endl<<endl;
	 }
	 
   }
   
   void display_details()
   {
   	cout<<"QUALITY OF WATER IN TERMS OF TURBIDITY : "<<endl;
   	if(val2==0)
	 {
	 	cout<<"EXCELLENT "<<endl<<endl;
	 }
	 else
	 if((val2>0)&&(val2<25))
	 {
	 	cout<<"VERY GOOD "<<endl<<endl;
	 	
	 }
	 else 
	 if((val2>=25)&&(val2<50))
	 {
	 	cout<<" GOOD "<<endl<<endl;
	 }
	 else 
	 if((val2>=50)&&(val2<75))
	 {
	 	cout<<" BAD "<<endl<<endl;
	 }
	 else 
	 if((val2>=75)&&(val2<=100))
	 {
	 	cout<<" POOR "<<endl<<endl;
	 }
	 else
	 {
	 	cout<<"CANNOT BE CATEGORISED"<<endl<<endl;
	 }
	 
	 cout<<"QUALITY OF WATER IN TERMS OF BOD : "<<endl;
	 
	 if((bod>=0.75)&&(bod<=1.5))
		{
			cout<<"EXCELLENT "<<endl<<endl;
		}
		else 
		if((bod>1.5)&&(bod<=2.0))
		{
			cout<<"VERY GOOD "<<endl<<endl;
		}
		else 
		if((bod>2)&&(bod<=3.0))
		{
			cout<<"G00D"<<endl<<endl;
		}
		else
		{ 
		cout<<"POOR"<<endl<<endl;
		}
		
		cout<<"QUALITY OF WATER IN TERMS OF TDS : "<<endl;
		
		if((tds>=0)&&(tds<70))
	    { 
	 	cout<<"VERY SOFT "<<endl<<endl;
	    }
		else
		if((tds>=70)&&(tds<140))
		{
			cout<<"SOFT "<<endl<<endl;
		}
		else 
		if((tds>=140)&&(tds<210))
		{
			cout<<"SLIGHTLY HARD "<<endl<<endl;
		}
		else 
		if((tds>=210)&&(tds<320))
		{
			cout<<"MODERATELY HARD "<<endl<<endl;
		}
		else 
		if((tds>=320)&&(tds<530))
		{
			cout<<"HARD "<<endl<<endl;
		}
		else
	    { 
	       cout<<"VERY HARD "<<endl<<endl;
		}
   
      cout<<"QUALITY OF WATER IN TERMS OF pH : "<<endl;
      if((ph>=0)&&(ph<6.5))
		{
			cout<<"IT IS ACIDIC IN NATURE HENCE, NOT SUITABLE FOR DRINKING "<<endl<<endl;
		}
		else 
		if((ph>=6.5)&&(ph<8.5))
		{
			cout<<"IT IS NEUTRAL IN NATURE HENCE, SUITABLE FOR DRINKING "<<endl<<endl;
		}
		else
		if((ph>=8.5)&&(ph<=14))
		{
			cout<<"IT IS BASIC IN NATURE HENCE, NOT SUITABLE FOR DRINKING "<<endl<<endl;
		}
		else
		{  
		   cout<<"CANNOT BE CTEGORISED OR ENTERED WRONG VALUE "<<endl<<endl;
		}
      
      cout<<"QUALITY OF WATER ACCORDING TO THE CONCENTRATION OF NITRATES : "<<endl;
      if(val4==0)
	 {
	 	cout<<"EXCELLENT "<<endl<<endl;
	 }
	 else
	 if((val4>0)&&(val4<25))
	 {
	 	cout<<"VERY GOOD "<<endl<<endl;
	 	
	 }
	 else 
	 if((val4>=25)&&(val4<50))
	 {
	 	cout<<" GOOD "<<endl<<endl;
	 }
	 else 
	 if((val4>=50)&&(val4<75))
	 {
	 	cout<<" BAD "<<endl<<endl;
	 }
	 else 
	 if((val4>=75)&&(val4<=100))
	 {
	 	cout<<" POOR "<<endl<<endl;
	 }
	 else
	 {
	 	cout<<"CANNOT BE CATEGORISED"<<endl<<endl;
	 }
      
      cout<<"QUALITY OF WATER ACCORDING TO THE CONCENTRATION OF CARBONATES : "<<endl;
      if(val9==0)
	 {
	 	cout<<"EXCELLENT "<<endl<<endl;
	 }
	 else
	 if((val9>0)&&(val9<25))
	 {
	 	cout<<"VERY GOOD "<<endl<<endl;
	 	
	 }
	 else 
	 if((val9>=25)&&(val9<50))
	 {
	 	cout<<" GOOD "<<endl<<endl;
	 }
	 else 
	 if((val9>=50)&&(val9<75))
	 {
	 	cout<<" BAD "<<endl<<endl;
	 }
	 else 
	 if((val9>=75)&&(val9<=100))
	 {
	 	cout<<" POOR "<<endl<<endl;
	 }
	 else
	 {
	 	cout<<"CANNOT BE CATEGORISED"<<endl<<endl;
	 }
      
   cout<<"QUALITY OF WATER ACCORDING TO THE CONCENTRATION OF SULPHATE : "<<endl;
   if(val5==0)
	 {
	 	cout<<"EXCELLENT "<<endl<<endl;
	 }
	 else
	 if((val5>0)&&(val5<25))
	 {
	 	cout<<"VERY GOOD "<<endl<<endl;
	 	
	 }
	 else 
	 if((val5>=25)&&(val5<50))
	 {
	 	cout<<" GOOD "<<endl<<endl;
	 }
	 else 
	 if((val5>=50)&&(val5<75))
	 {
	 	cout<<" BAD "<<endl<<endl;
	 }
	 else 
	 if((val5>=75)&&(val5<=100))
	 {
	 	cout<<" POOR "<<endl<<endl;
	 }
	 else
	 {
	 	cout<<"CANNOT BE CATEGORISED"<<endl<<endl;
	 }
   cout<<"QUALITY OF WATER ACCORDING TO THE CONCENTRATION OF PHOSPHATES : "<<endl;
   if(val7==0)
	 {
	 	cout<<"EXCELLENT "<<endl<<endl;
	 }
	 else
	 if((val7>0)&&(val7<25))
	 {
	 	cout<<"VERY GOOD "<<endl<<endl;
	 	
	 }
	 else 
	 if((val7>=25)&&(val7<50))
	 {
	 	cout<<" GOOD "<<endl<<endl;
	 }
	 else 
	 if((val7>=50)&&(val7<75))
	 {
	 	cout<<" BAD "<<endl<<endl;
	 }
	 else 
	 if((val7>=75)&&(val7<=100))
	 {
	 	cout<<" POOR "<<endl<<endl;
	 }
	 else
	 {
	 	cout<<"CANNOT BE CATEGORISED"<<endl<<endl;
	 }
   
   }
   
};

float deviate1(float n)
{  float p;
      if(n<0.1)  
	  { p=(n-0.1);
	   p=-p;
      }
      else{ p=(n-0.1);
	  }
	return p;
}

float deviate2(float n)
{    float p;
    if(n<10)
    {
    	p=(n-10);
    	p=-p;
	}
	else
	
	{
		p=(n-10);
	}
      return p;  
	
}

float deviate3(float n)
{    float p;
     if(n<100)
    {
    	p=(n-100);
    	p=-p;
	}
	else
	
	{
		p=(n-100);
	}
      return p;  
	
}

float deviate4(float n)
{
	float p;
	if(n<250)
    {
    	p=(n-250);
    	p=-p;
	}
	else
	
	{
		p=(n-250);
	}
	return p;
}

float deviate5(float n)
{
	float p;
	if(n<0.03)
    {
    	p=(n-0.03);
    	p=-p;
	}
	else
	
	{
		p=(n-0.03);
	}
	return p;
}






int main()
{   Water_Quality_Checker a;
    a.Welcome();
    
   
    int choice,ch; 
   char ans='y';
   
   while(ans=='y')
    {
     cout<<"WHICH OPERATION YOU WANT TO PERFORM"<<endl<<endl;
    cout<<"PRESS 1 - WRITE DATA IN FILE"<<endl;
    cout<<"PRESS 2 - READ DATA FROM FILE"<<endl;
    cout<<"PRESS 3 - TO DELETE ENTIRE FILE"<<endl;
    cout<<"PRESS 4 - TO EXIT "<<endl<<endl;
    cin>>ch;
    switch(ch)
    {
    	case 1:cout<<"WRITE DATA IN FILE "<<endl;
    	        
    	        write();
    	        break;
    	case 2:cout<<"READ DATA FROM FILE"<<endl;
		        display();
				break;
		case 3:cout<<"TO DELETE ENTIRE FILE"<<endl;
		         delete_file();
				 break;
				 		
		case 4:cout<<"To EXIT"<<endl;
		       exit(0);
			   break;		 
		default:cout<<"ENTERED WRONG VALUE "<<endl<<endl;		        
                break;	
	}
    cout<<"WANT TO EXECUTE AGAIN "<<endl;
    cin>>ans;
    
  } 


	return 0;
}




void write()
{
	Water_Quality_Checker a;
    
	ofstream Z;
    Z.open("DATABASE.TXT",ios::out|ios::app|ios::binary);
    
	
	a.Turbidity();
    a.BOD();
    a.TDS();
    a.pH();
    a.Nitrate();
    a.Carbonates();
    a.Sulphate();
    a.Phosphate();
			  Z.write(reinterpret_cast<char*>(&a), sizeof(a));
			  Z.close();
	
	
}

void display()
{
	 Water_Quality_Checker a;
	ifstream z;
	z.open("DATABASE.TXT",ios::in|ios::binary);
	if(z.fail())
	   cout<<"can't open file "<<endl<<endl;
	   else
	   {
	   	while(z.read(reinterpret_cast<char*>(&a), sizeof(a)))
	    a.display_details();	    
	   }
	 z.close(); 
}

void delete_file()                                  // FUNCTION TO DELETE THE EXISTING FILE
{
	ofstream a;
	cout<<"FILE HAS BEEN DELETED "<<endl<<endl;
	a.open("DATABASE.TXT",ios::trunc);
	a.close();
}