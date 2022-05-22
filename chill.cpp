#include<iostream>
#include<fstream>
#include<string>
using namespace std;

     // Global variables are declared outside the main function so that they can be called in every case
	double performa_WEIGHT =0.0; 
    double report_WEIGHT = 0.00; 
    double Cep_WEIGHT = 0.0; 
    double MIDTERM_WEIGHT = 0.0;
    double FINAL_WEIGHT = 0.0;
void classes(){
	cout<<" Press 1 for BEME II-B\n";
  	cout<<" Press 2 for MTS II-A\n";
  	cout<<" Press 3 for BEEP II-A\n";
  	cout<<" Press 4 for BEBME-A\n";
}
void assesment(){
        	cout<<" press 1 for lab performance\n";
		    cout<<" Press 2 for lab reports\n";
		    cout<<" Press 3 for Mid term exam\n";
		    cout<<" Press 4 for CEA\n";
		    cout<<" Press 5 for Final Exam\n";
}

void weightage(){

					cout<<" Assign weightage to each assessment type\n";
					cout<<"                                          \n";
					cout<<" For dailly Lab Performance\n";
					cin>>performa_WEIGHT;
					cout<<" For weekly Lab Reports\n";
					cin>>report_WEIGHT;
					cout<<" For Mid term Exam\n";
					cin>>MIDTERM_WEIGHT;
					cout<<" For Complex Engineering Activity\n";
					cin>>Cep_WEIGHT;
					cout<<" For Final Term Exam\n";
					cin>>FINAL_WEIGHT;
}

int main(){
	int choice=1;
	
	
	
	while(choice==1){
	
	/* Concept of File Handling
	First I created the files.
	Secondly I wrote the names of students with Roll No in each file*/
	
		fstream myFile;
	myFile.open("BEME II B.txt",ios::out);
	if(myFile.is_open()){
		myFile<<" Usman         210532\n";
		myFile<<" Atif Jameel   210538\n";
		myFile<<" Abdul Waseh   210588\n";
		myFile<<" Arslan Yousaf 210550\n";
		myFile<<" Kamran Ali    210588\n ";
		myFile.close();
	}
		myFile.open("MTS II.txt",ios::out);
	if(myFile.is_open()){
		myFile<<" Haider       210533\n";
		myFile<<" Atif Ali     210537\n";
		myFile<<" Abdul Ahad   210587\n";
		myFile<<" Arslan Khan  210551\n";
		myFile<<" Kamran Ali   210589\n ";
		myFile.close();
	}
		myFile.open("BEEP II.txt",ios::out);
	if(myFile.is_open()){
		myFile<<" Muizz        210202\n";
		myFile<<" Amna Ali     210204\n";
		myFile<<" Naveera      210206\n";
		myFile<<" Ambreen      210208\n";
		myFile<<" Nidah        210210\n ";
		myFile.close();
	}
		myFile.open("BEBME.txt",ios::out);
	if(myFile.is_open()){
		myFile<<" Aimen       200553\n";
		myFile<<" Atif Khan   200555\n";
		myFile<<" Abdullah    210557\n";
		myFile<<" Aleeza      210559\n";
		myFile<<" Taila       210561\n ";
		myFile.close();
	}
	

  int section=0;
  
  	classes();
  	
  	cin>>section;
  
  // I used the switch statement to switch between the 4 classes
  
  	switch(section)
  {	case 1:
  	    // Here I read the file which I created first
  	    
  		myFile.open("BEME II B.txt",ios::in);
  		if(myFile.is_open()){
  		string line1;
  			while(getline(myFile,line1)){
  				cout<<line1<<endl;
			  }
			  myFile.close();
	
	
	// I have assigned each assesment with total marks using concept of Constant Variables	    
	const double Lab_performa = 50.0;
    const double Lab_reports=50.0;
    const double Cep=100.0;
	const double MIDTERM_MAX = 50.0;
	const double FINAL_MAX = 100.0;
double coursePercentage;
int task1=0;
char ch='y';

           
			while(ch=='y' || ch=='Y'){
			
		    assesment();
		    
		    cin>>task1;

		            
				 // I assumed only 5 labs per semester
				 // I assumed the overall marks entering of Lab performance and report 	 
		    		int arr1[5];                              
					cout<<" Enter the marks of 5 students of daily lab performance\n"; 
		    		
		    	
		    		for(int i=0;i<5;i++){
		    			
						
		    			cin>>arr1[i];
					}
					
					cout<<"The entered marks of each student : \n";
					for(int i=0;i<5;i++){
					
							cout<<arr1[i]<<" "<<endl;
						}
				cout<<"<------------------------------------------------------------>"<<endl;

				   // as per lab, only 5 lab reports
				    int arr2[5];                               
					cout<<" Enter the marks of 5 students of weekly lab report\n"; 
		    		
		    	
		    		for(int i=0;i<5;i++){
		    			
						
		    			cin>>arr2[i];
					}
					
					cout<<"The entered marks of each student : \n";
					for(int i=0;i<5;i++){
					
							cout<<arr2[i]<<" "<<endl;
						}
				    
				 cout<<"<---------------------------------------------------->"<<endl;
				  
				   
				   
					int arr3[5];                               
					cout<<" Enter the marks of 5 students of Mid Term Exam\n"; 
		    		
		    		// using for loop for entery
		    		for(int i=0;i<5;i++){
		    			
						
		    			cin>>arr3[i];
					}
					
					cout<<"The entered marks of each student : \n";
					for(int i=0;i<5;i++){
					
							cout<<arr3[i]<<" "<<endl;
						}
						
						
					cout<<"<---------------------------------------------->"<<endl;	
			         int arr4[5];      
					cout<<" Enter the marks of 5 students of Complex Engineering Activity\n"; 
		    		
		    		// using for loop for entery
		    		for(int i=0;i<5;i++){
		    			
						
		    			cin>>arr4[i];
					}
					
					cout<<"The entered marks of each student : \n";
					for(int i=0;i<5;i++){
					
							cout<<arr4[i]<<" "<<endl;
						}
	            	cout<<"<------------------------------------------------->"<<endl;
					int arr5[5];                               
					cout<<" Enter the marks of 5 students of Final Exam \n"; 
		    		
		    		// using for loop for entery
		    		for(int i=0;i<5;i++){
		    			
						
		    			cin>>arr5[i];
					}
					
					cout<<"The entered marks of each student : \n";
					for(int i=0;i<5;i++){
					
							cout<<arr5[i]<<" "<<endl;
						}
					
					cout<<"<-------------------------------------------->"<<endl;
					
				   weightage();
				   
				   // I used If Else condition to detect error so that the weightage entered by user does not exceed 100%
				   
				   	if((performa_WEIGHT+report_WEIGHT+MIDTERM_WEIGHT+Cep_WEIGHT+FINAL_WEIGHT)<=100){
					cout<<" The percentage of each student is :";
					for(int i=0;i<5;i++){
				coursePercentage = ((arr1[i] /Lab_performa) * (performa_WEIGHT/100))+((arr2[i] /Lab_reports) * (report_WEIGHT/100)) +((arr3[i] /Cep) * (Cep_WEIGHT/100))+((arr4[i] /MIDTERM_MAX) * (MIDTERM_WEIGHT/100))+((arr5[i] /FINAL_MAX) * (FINAL_WEIGHT/100))
+ 0.0;
coursePercentage = coursePercentage * 100;
				cout<<coursePercentage<<endl;	
							}
					cout<<"--------------------------------------------------"<<endl;
			
			// I just assumed the Grade Distribution. Not relates to Air University Grading System
			
			
			cout<<" The Grade distribution of students is\n"<<endl;	
			for(int i=0;i<5;i++){
			if(coursePercentage>=85 && coursePercentage<100){
				cout<<" A+"<<endl;
			}
			
			else if(coursePercentage>=75 && coursePercentage<=85){
				cout<<" B+"<<endl;
			}
			
			else if(coursePercentage>=65 && coursePercentage<=75){
				cout<<" C+"<<endl;
			}
			else if(coursePercentage>=45 && coursePercentage<=65){
				cout<<" D+"<<endl;
			}
			else
			 cout<<" fail"<<endl;	}}
			 else if((performa_WEIGHT+report_WEIGHT+MIDTERM_WEIGHT+Cep_WEIGHT+FINAL_WEIGHT)>100){
			 	cout<<" Entered weightage exceeded 100%\n";
			 }
			 
			 // Now I saved the percentage of each student in a file according to instructions
			 
			 myFile.open("class 1.txt",ios::out);
			   if(myFile.is_open()){
			   	myFile<<coursePercentage<<endl;
			   	myFile.close();
			   }
			
			cout<<"Do you want to continue? "<<endl;
			cout<<" Press y to continue, n for exit"<<endl;
			cin>>ch;	
			}        // for while loop
			}	   
		  
  		break;
  		
  	case 2:
  		
	   	myFile.open("MTS II.txt",ios::in);
  		if(myFile.is_open()){
  		string line2;
  			while(getline(myFile,line2)){
  				cout<<line2<<endl;
			  }
			  myFile.close();
			 const double Lab_performa = 50.0;
const double Lab_reports=50.0;
const double Cep=100.0;
const double MIDTERM_MAX = 50.0;
const double FINAL_MAX = 100.0;
double performa_WEIGHT =0.0; 
 double report_WEIGHT = 0.00; 
  double Cep_WEIGHT = 0.0; 
 double MIDTERM_WEIGHT = 0.0;
 double FINAL_WEIGHT = 0.0;
double coursePercentage=0.0;
int task1=0;
char ch='y';

            
			while(ch=='y'){
			
		   cout<<" press 1 for lab performance\n";
		    cout<<" Press 2 for lab reports\n";
		    cout<<" Press 3 for Mid term exam\n";
		    cout<<" Press 4 for CEA\n";
		    cout<<" Press 5 for Final Exam\n";  
		    
		    
		    
		    cin>>task1;

		            
					 
		    		int arr1[5];                               // I assumed only 5 labs per semester
					cout<<" Enter the marks of 5 students of daily lab performance\n"; 
		    		
		    	
		    		for(int i=0;i<5;i++){
		    			
						
		    			cin>>arr1[i];
					}
					
					cout<<"The entered marks of each student : \n";
					for(int i=0;i<5;i++){
					
							cout<<arr1[i]<<" "<<endl;
						}
				cout<<"<------------------------------------------------------------>"<<endl;

				   
				    int arr2[5];                               // as per lab, only 5 lab reports
					cout<<" Enter the marks of 5 students of weekly lab report\n"; 
		    		
		    	
		    		for(int i=0;i<5;i++){
		    			
						
		    			cin>>arr2[i];
					}
					
					cout<<"The entered marks of each student : \n";
					for(int i=0;i<5;i++){
					
							cout<<arr2[i]<<" "<<endl;
						}
				    
				 cout<<"<---------------------------------------------------->"<<endl;
				  
				   
				   
					int arr3[5];                               
					cout<<" Enter the marks of 5 students of Mid Term Exam\n"; 
		    		
		    		// using for loop for entery
		    		for(int i=0;i<5;i++){
		    			
						
		    			cin>>arr3[i];
					}
					
					cout<<"The entered marks of each student : \n";
					for(int i=0;i<5;i++){
					
							cout<<arr3[i]<<" "<<endl;
						}
						
						
					cout<<"<---------------------------------------------->"<<endl;	
			         int arr4[5];      
					cout<<" Enter the marks of 5 students of Complex Engineering Activity\n"; 
		    		
		    		// using for loop for entery
		    		for(int i=0;i<5;i++){
		    			
						
		    			cin>>arr4[i];
					}
					
					cout<<"The entered marks of each student : \n";
					for(int i=0;i<5;i++){
					
							cout<<arr4[i]<<" "<<endl;
						}
	            	cout<<"<------------------------------------------------->"<<endl;
					int arr5[5];                               
					cout<<" Enter the marks of 5 students of Final Exam \n"; 
		    		
		    		// using for loop for entery
		    		for(int i=0;i<5;i++){
		    			
						
		    			cin>>arr5[i];
					}
					
					cout<<"The entered marks of each student : \n";
					for(int i=0;i<5;i++){
					
							cout<<arr5[i]<<" "<<endl;
						}
					// break;
					cout<<"<-------------------------------------------->"<<endl;
				
					cout<<" Assign weightage to each assessment type\n";
					cout<<"                                          \n";
					cout<<" For dailly Lab Performance\n";
					cin>>performa_WEIGHT;
					cout<<" For weekly Lab Reports\n";
					cin>>report_WEIGHT;
					cout<<" For Mid term Exam\n";
					cin>>MIDTERM_WEIGHT;
					cout<<" For Complex Engineering Activity\n";
					cin>>Cep_WEIGHT;
					cout<<" For Final Term Exam\n";
					cin>>FINAL_WEIGHT;
					
					if((performa_WEIGHT+report_WEIGHT+MIDTERM_WEIGHT+Cep_WEIGHT+FINAL_WEIGHT)<=100){
					
					
					
					
					
					cout<<" The percentage of each student is :";
					for(int i=0;i<5;i++){
				coursePercentage = ((arr1[i] /Lab_performa) * (performa_WEIGHT/100))+((arr2[i] /Lab_reports) * (report_WEIGHT/100)) +((arr3[i] /Cep) * (Cep_WEIGHT/100))+((arr4[i] /MIDTERM_MAX) * (MIDTERM_WEIGHT/100))+((arr5[i] /FINAL_MAX) * (FINAL_WEIGHT/100))
+ 0.0;
coursePercentage = coursePercentage * 100;
				cout<<coursePercentage<<endl;	
							}
					cout<<"--------------------------------------------------"<<endl;
			
			cout<<" The Grade distribution of students is\n"<<endl;	
			for(int i=0;i<5;i++){
			if(coursePercentage>=85 && coursePercentage<100){
				cout<<" A+"<<endl;
			}
			
			else if(coursePercentage>=75 && coursePercentage<=85){
				cout<<" B+"<<endl;
			}
			
			else if(coursePercentage>=65 && coursePercentage<=75){
				cout<<" C+"<<endl;
			}
			else if(coursePercentage>=45 && coursePercentage<=65){
				cout<<" D+"<<endl;
			}
			else
			 cout<<" fail"<<endl;	}}
			 else if ((performa_WEIGHT+report_WEIGHT+MIDTERM_WEIGHT+Cep_WEIGHT+FINAL_WEIGHT)>100)
			 {cout<<" Entered weightage is not acceptable\n";
			 }
			 myFile.open("class 2.txt",ios::out);
			   if(myFile.is_open()){
			   	myFile<<coursePercentage<<endl;
			   	myFile.close();
			   }
			
			cout<<"Do you want to continue "<<endl;
			cout<<" Press n for exit"<<endl;
			cin>>ch;	
			}        // for while loop
			}
			 
			  
			  
		
	    break;
	case 3:
		
	    myFile.open("BEEP II.txt",ios::in);
  		if(myFile.is_open()){
  		string line3;
  			while(getline(myFile,line3)){
  				cout<<line3<<endl;
			  }
			  myFile.close();
			  
		const double Lab_performa = 50.0;
const double Lab_reports=50.0;
const double Cep=100.0;
const double MIDTERM_MAX = 50.0;
const double FINAL_MAX = 100.0;
double coursePercentage=0.0;
int task1=0;
char ch='y';

            
			while(ch=='y' || ch=='Y'){
			
		  cout<<" press 1 for lab performance\n";
		    cout<<" Press 2 for lab reports\n";
		    cout<<" Press 3 for Mid term exam\n";
		    cout<<" Press 4 for CEA\n";
		    cout<<" Press 5 for Final Exam\n";  
		    
		    
		    cin>>task1;

		            
					 
		    		int arr1[5];                               // I assumed only 5 labs per semester
					cout<<" Enter the marks of 5 students of daily lab performance\n"; 
		    		
		    	
		    		for(int i=0;i<5;i++){
		    			
						
		    			cin>>arr1[i];
					}
					
					cout<<"The entered marks of each student : \n";
					for(int i=0;i<5;i++){
					
							cout<<arr1[i]<<" "<<endl;
						}
				cout<<"<------------------------------------------------------------>"<<endl;

				   
				    int arr2[5];                               // as per lab, only 5 lab reports
					cout<<" Enter the marks of 5 students of weekly lab report\n"; 
		    		
		    	
		    		for(int i=0;i<5;i++){
		    			
						
		    			cin>>arr2[i];
					}
					
					cout<<"The entered marks of each student : \n";
					for(int i=0;i<5;i++){
					
							cout<<arr2[i]<<" "<<endl;
						}
				    
				 cout<<"<---------------------------------------------------->"<<endl;
				  
				   
				   
					int arr3[5];                               
					cout<<" Enter the marks of 5 students of Mid Term Exam\n"; 
		    		
		    		// using for loop for entery
		    		for(int i=0;i<5;i++){
		    			
						
		    			cin>>arr3[i];
					}
					
					cout<<"The entered marks of each student : \n";
					for(int i=0;i<5;i++){
					
							cout<<arr3[i]<<" "<<endl;
						}
						
						
					cout<<"<---------------------------------------------->"<<endl;	
			         int arr4[5];      
					cout<<" Enter the marks of 5 students of Complex Engineering Activity\n"; 
		    		
		    		// using for loop for entery
		    		for(int i=0;i<5;i++){
		    			
						
		    			cin>>arr4[i];
					}
					
					cout<<"The entered marks of each student : \n";
					for(int i=0;i<5;i++){
					
							cout<<arr4[i]<<" "<<endl;
						}
	            	cout<<"<------------------------------------------------->"<<endl;
					int arr5[5];                               
					cout<<" Enter the marks of 5 students of Final Exam \n"; 
		    		
		    		// using for loop for entery
		    		for(int i=0;i<5;i++){
		    			
						
		    			cin>>arr5[i];
					}
					
					cout<<"The entered marks of each student : \n";
					for(int i=0;i<5;i++){
					
							cout<<arr5[i]<<" "<<endl;
						}
					// break;
					cout<<"<-------------------------------------------->"<<endl;
					
					cout<<" Assign weightage to each assessment type\n";
					cout<<"                                          \n";
					cout<<" For dailly Lab Performance\n";
					cin>>performa_WEIGHT;
					cout<<" For weekly Lab Reports\n";
					cin>>report_WEIGHT;
					cout<<" For Mid term Exam\n";
					cin>>MIDTERM_WEIGHT;
					cout<<" For Complex Engineering Activity\n";
					cin>>Cep_WEIGHT;
					cout<<" For Final Term Exam\n";
					cin>>FINAL_WEIGHT;
						if((performa_WEIGHT+report_WEIGHT+MIDTERM_WEIGHT+Cep_WEIGHT+FINAL_WEIGHT)<=100){
						
				
				
					cout<<" The percentage of each student is :";
					for(int i=0;i<5;i++){
				coursePercentage = ((arr1[i] /Lab_performa) * (performa_WEIGHT/100))+((arr2[i] /Lab_reports) * (report_WEIGHT/100)) +((arr3[i] /Cep) * (Cep_WEIGHT/100))+((arr4[i] /MIDTERM_MAX) * (MIDTERM_WEIGHT/100))+((arr5[i] /FINAL_MAX) * (FINAL_WEIGHT/100))
+ 0.0;
coursePercentage = coursePercentage * 100;
				cout<<coursePercentage<<endl;	
							}
					cout<<"--------------------------------------------------"<<endl;
			
			cout<<" The Grade distribution of students is\n"<<endl;	
			for(int i=0;i<5;i++){
			if(coursePercentage>=85 && coursePercentage<100){
				cout<<" A+"<<endl;
			}
			
			else if(coursePercentage>=75 && coursePercentage<=85){
				cout<<" B+"<<endl;
			}
			
			else if(coursePercentage>=65 && coursePercentage<=75){
				cout<<" C+"<<endl;
			}
			else if(coursePercentage>=45 && coursePercentage<=65){
				cout<<" D+"<<endl;
			}
			else
			 cout<<" fail"<<endl;	}}
			 else if((performa_WEIGHT+report_WEIGHT+MIDTERM_WEIGHT+Cep_WEIGHT+FINAL_WEIGHT)>100){
			 	cout<<" Weightage value exceedes 100 %\n";
			 }
			 
			 myFile.open("class 3.txt",ios::out);
			   if(myFile.is_open()){
			   	myFile<<coursePercentage<<endl;
			   	myFile.close();
			   }
			
			cout<<"Do you want to continue "<<endl;
			cout<<" Press n for exit"<<endl;
			cin>>ch;	
			}        // for while loop
			}
		break;
	case 4:
	      myFile.open("BEBME.txt",ios::in);
  		if(myFile.is_open()){
  		string line4;
  			while(getline(myFile,line4)){
  				cout<<line4<<endl;
			  }
			  myFile.close();
		const double Lab_performa = 50.0;
const double Lab_reports=50.0;
const double Cep=100.0;
const double MIDTERM_MAX = 50.0;
const double FINAL_MAX = 100.0;
double coursePercentage=0.0;
int task1=0;
char ch='y';

            
			while(ch=='y' || ch=='Y'){
			
		    cout<<" press 1 for lab performance\n";
		    cout<<" Press 2 for lab reports\n";
		    cout<<" Press 3 for Mid term exam\n";
		    cout<<" Press 4 for CEA\n";
		    cout<<" Press 5 for Final Exam\n";
		    
		    
		    
		    cin>>task1;

		            
					 
		    		int arr1[5];                               // I assumed only 5 labs per semester
					cout<<" Enter the marks of 5 students of daily lab performance\n"; 
		    		
		    	
		    		for(int i=0;i<5;i++){
		    			
						
		    			cin>>arr1[i];
					}
					
					cout<<"The entered marks of each student : \n";
					for(int i=0;i<5;i++){
					
							cout<<arr1[i]<<" "<<endl;
						}
				cout<<"<------------------------------------------------------------>"<<endl;

				   
				    int arr2[5];                               // as per lab, only 5 lab reports
					cout<<" Enter the marks of 5 students of weekly lab report\n"; 
		    		
		    	
		    		for(int i=0;i<5;i++){
		    			
						
		    			cin>>arr2[i];
					}
					
					cout<<"The entered marks of each student : \n";
					for(int i=0;i<5;i++){
					
							cout<<arr2[i]<<" "<<endl;
						}
				    
				 cout<<"<---------------------------------------------------->"<<endl;
				  
				   
				   
					int arr3[5];                               
					cout<<" Enter the marks of 5 students of Mid Term Exam\n"; 
		    		
		    		// using for loop for entery
		    		for(int i=0;i<5;i++){
		    			
						
		    			cin>>arr3[i];
					}
					
					cout<<"The entered marks of each student : \n";
					for(int i=0;i<5;i++){
					
							cout<<arr3[i]<<" "<<endl;
						}
						
						
					cout<<"<---------------------------------------------->"<<endl;	
			         int arr4[5];      
					cout<<" Enter the marks of 5 students of Complex Engineering Activity\n"; 
		    		
		    		// using for loop for entery
		    		for(int i=0;i<5;i++){
		    			
						
		    			cin>>arr4[i];
					}
					
					cout<<"The entered marks of each student : \n";
					for(int i=0;i<5;i++){
					
							cout<<arr4[i]<<" "<<endl;
						}
	            	cout<<"<------------------------------------------------->"<<endl;
					int arr5[5];                               
					cout<<" Enter the marks of 5 students of Final Exam \n"; 
		    		
		    		// using for loop for entery
		    		for(int i=0;i<5;i++){
		    			
						
		    			cin>>arr5[i];
					}
					
					cout<<"The entered marks of each student : \n";
					for(int i=0;i<5;i++){
					
							cout<<arr5[i]<<" "<<endl;
						}
					// break;
					cout<<"<-------------------------------------------->"<<endl;
					
					cout<<" Assign weightage to each assessment type\n";
					cout<<"                                          \n";
					cout<<" For dailly Lab Performance\n";
					cin>>performa_WEIGHT;
					cout<<" For weekly Lab Reports\n";
					cin>>report_WEIGHT;
					cout<<" For Mid term Exam\n";
					cin>>MIDTERM_WEIGHT;
					cout<<" For Complex Engineering Activity\n";
					cin>>Cep_WEIGHT;
					cout<<" For Final Term Exam\n";
					cin>>FINAL_WEIGHT;
						if((performa_WEIGHT+report_WEIGHT+MIDTERM_WEIGHT+Cep_WEIGHT+FINAL_WEIGHT)<=100){
						
				
				
					cout<<" The percentage of each student is :";
					for(int i=0;i<5;i++){
				coursePercentage = ((arr1[i] /Lab_performa) * (performa_WEIGHT/100))+((arr2[i] /Lab_reports) * (report_WEIGHT/100)) +((arr3[i] /Cep) * (Cep_WEIGHT/100))+((arr4[i] /MIDTERM_MAX) * (MIDTERM_WEIGHT/100))+((arr5[i] /FINAL_MAX) * (FINAL_WEIGHT/100))
+ 0.0;
coursePercentage = coursePercentage * 100;
				cout<<coursePercentage<<endl;	
							}
					cout<<"--------------------------------------------------"<<endl;
			
			cout<<" The Grade distribution of students is\n"<<endl;	
			for(int i=0;i<5;i++){
			if(coursePercentage>=85 && coursePercentage<100){
				cout<<" A+"<<endl;
			}
			
			else if(coursePercentage>=75 && coursePercentage<=85){
				cout<<" B+"<<endl;
			}
			
			else if(coursePercentage>=65 && coursePercentage<=75){
				cout<<" C+"<<endl;
			}
			else if(coursePercentage>=45 && coursePercentage<=65){
				cout<<" D+"<<endl;
			}
			else
			 cout<<" fail"<<endl;	}}
			 else if((performa_WEIGHT+report_WEIGHT+MIDTERM_WEIGHT+Cep_WEIGHT+FINAL_WEIGHT)>100){
		        cout<<" Weightage exceeds 100 %\n"; }
		        
		        myFile.open("class 4.txt",ios::out);
			   if(myFile.is_open()){
			   	myFile<<coursePercentage<<endl;
			   	myFile.close();
			   }
			
			cout<<"Do you want to continue "<<endl;
			cout<<" Press n for exit"<<endl;
			cin>>ch;	
			}        // for while loop
			}
		break;
	default:
	    cout<<" ERROR\n ";
	    cout<<"<------------------------------------------->\n";
		break;
		}
		
		// Below are the conditions for While Loop to continue or Exit
		cout<<"													\n";
		cout<<"                                                  \n";
		cout<<"	Do you want to continue or exit the programme\n";
		cout<<"                                               \n";
		cout<<"	Press 1 to continue           Press 0 for exit\n";
		cin>>choice;
	    }
		return 0;

}

