#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

float course[10];

void firstSem();
void secondSem();
void thirdSem();
void fourthSem();
void fifthSem();
void sixthSem();
void seventhSem();
//float eighthSem();

int main() {
    cout << "                       ***************"<<endl;
    cout << "                          Team Octa"<<endl;
    cout << "                           DCC CSE"<<endl;
    cout << "                          Batch  17"<<endl;
    cout << "                       ***************"<<endl<<endl;
    cout << "                      Result Calculator"<<endl;
    cout << "################ 1st Semester --- 7th Semester #################"<<endl<<endl<<endl;
	cout << "*** Grades/ Marks ***" << endl<<endl;
	cout << "A+: 4.00/ 80-above	";
	cout << "A : 3.75/ 75-79   	";
	cout << "A-: 3.50/ 70-74" << endl;
	cout << "B+: 3.25/ 65-69		";
	cout << "B : 3.00/ 60-64		";
	cout << "B-: 2.75/ 55-59	" << endl;
	cout << "C+: 2.50/ 50-54		";
	cout << "C : 2.25/ 45-49" << endl;
	cout << "D : 2.00/ 40-44" << endl<<endl<<endl;


	int semester;
	do{
	cout<< "Enter Desired Semester (0=exit): ";
	cin>> semester;

	switch(semester){
	case 1:
	    cout<< endl<<"     _-_-_-_-_-_-_- Enter gradePoint(<=4.00) -_-_-_-_-_-_-_"<<endl<<endl;
		firstSem();
		break;
	case 2:
	    cout<< endl<<"     _-_-_-_-_-_-_- Enter gradePoint(<=4.00) -_-_-_-_-_-_-_"<<endl<<endl;
		secondSem();
		break;
	case 3:
	    cout<< endl<<"     _-_-_-_-_-_-_- Enter gradePoint(<=4.00) -_-_-_-_-_-_-_"<<endl<<endl;
		thirdSem();
		break;
	case 4:
	    cout<< endl<<"     _-_-_-_-_-_-_- Enter gradePoint(<=4.00) -_-_-_-_-_-_-_"<<endl<<endl;
		fourthSem();
		break;
	case 5:
	    cout<< endl<<"     _-_-_-_-_-_-_- Enter gradePoint(<=4.00) -_-_-_-_-_-_-_"<<endl<<endl;
		fifthSem();
		break;
	case 6:
	    cout<< endl<<"     _-_-_-_-_-_-_- Enter gradePoint(<=4.00) -_-_-_-_-_-_-_"<<endl<<endl;
		sixthSem();
		break;
	case 7:
	    cout<< endl<<"     _-_-_-_-_-_-_- Enter gradePoint(<=4.00) -_-_-_-_-_-_-_"<<endl<<endl;
		seventhSem();
		break;
	/*case 8:
		eighthSem();
		break;*/

	//default:
		//cout<< ">>ENTER RIGHT SEMESTER!<<";
	}}while(semester!=0);

getch();
return 0;
}

void firstSem(){
	int i,totalCourse=6;
	for(i=1;i<=totalCourse;i++){
			cout<<"1"<<"1"<<i<<": ";
			cin>> course[i];
		}

		float credit,totalCredit=0;
		for(i=1;i<=totalCourse;i++){
			if(i==3){
				credit = 1.5;
				course[i]=credit*course[i];
				totalCredit = totalCredit+credit;
			}

			else{
				credit=3.0;
				course[i]=credit*course[i];
				totalCredit=totalCredit+credit;
			}

		}
		//cout<<endl<< "Total Credit: "<<totalCredit<<endl;

		float sum=0;
		for(i=1;i<=totalCourse;i++){
			sum=sum+course[i];
		}
		float avg=sum/totalCredit;
		cout<<endl<<"GPA: "<<avg;
		cout<<endl<< "---------------------------------"<<endl<<endl<<endl;
}

void secondSem(){
	int i,totalCourse=7;
	for(i=1;i<=totalCourse;i++){
			cout<<"1"<<"2"<<i<<": ";
			cin>> course[i];
		}

		float credit,totalCredit=0;
		for(i=1;i<=totalCourse;i++){
			if(i==2 || i==4){
				credit = 1.5;
				course[i]=credit*course[i];
				totalCredit = totalCredit+credit;
			}

			else{
				credit=3.0;
				course[i]=credit*course[i];
				totalCredit=totalCredit+credit;
			}

		}
		//cout<<endl<< "Total Credit: "<<totalCredit<<endl;

		float sum=0;
		for(i=1;i<=totalCourse;i++){
			sum=sum+course[i];
		}
		float avg=sum/totalCredit;
		cout<<endl<<"GPA: "<<avg;
		cout<<endl<< "---------------------------------"<<endl<<endl<<endl;
}

void thirdSem(){
	int i,totalCourse=9;
	for(i=1;i<=totalCourse;i++){
			cout<<"2"<<"1"<<i<<": ";
			cin>> course[i];
		}

		float credit,totalCredit=0;
		for(i=1;i<=totalCourse;i++){
			if(i==2 || i==5 || i==8){
				credit = 1.5;
				course[i]=credit*course[i];
				totalCredit = totalCredit+credit;
			}

			else{
				credit=3.0;
				course[i]=credit*course[i];
				totalCredit=totalCredit+credit;
			}

		}
		//cout<<endl<< "Total Credit: "<<totalCredit;

		float sum=0;
		for(i=1;i<=totalCourse;i++){
			sum=sum+course[i];
		}
		float avg=sum/totalCredit;
		cout<<endl<<"GPA: "<<avg;
		cout<<endl<< "---------------------------------"<<endl<<endl<<endl;
}

void fourthSem(){
	int i,totalCourse=7;
	for(i=1;i<=totalCourse;i++){
			cout<<"2"<<"2"<<i<<": ";
			cin>> course[i];
		}

		float credit,totalCredit=0;
		for(i=1;i<=totalCourse;i++){
			if(i==2 && i==4){
				credit = 1.5;
				course[i]=credit*course[i];
				totalCredit = totalCredit+credit;
			}

			else{
				credit=3.0;
				course[i]=credit*course[i];
				totalCredit=totalCredit+credit;
			}

		}
		//cout<<endl<< "Total Credit: "<<totalCredit;

		float sum=0;
		for(i=1;i<=totalCourse;i++){
			sum=sum+course[i];
		}
		float avg=sum/totalCredit;
		cout<<endl<<"GPA: "<<avg;
		cout<<endl<< "---------------------------------"<<endl<<endl<<endl;
}

void fifthSem(){
	int i,totalCourse=6;
	for(i=1;i<=totalCourse;i++){
			cout<<"3"<<"1"<<i<<": ";
			cin>> course[i];
		}

		float credit,totalCredit=0;
		for(i=1;i<=totalCourse;i++){
			if(i==3){
				credit = 1.5;
				course[i]=credit*course[i];
				totalCredit = totalCredit+credit;
			}

			else{
				credit=3.0;
				course[i]=credit*course[i];
				totalCredit=totalCredit+credit;
			}

		}
		//cout<<endl<< "Total Credit: "<<totalCredit;

		float sum=0;
		for(i=1;i<=totalCourse;i++){
			sum=sum+course[i];
		}
		float avg=sum/totalCredit;
		cout<<endl<<"GPA: "<<avg;
		cout<<endl<< "---------------------------------"<<endl<<endl<<endl;
}

void sixthSem(){
	int i,totalCourse=8;
	for(i=1;i<=totalCourse;i++){
			cout<<"3"<<"2"<<i<<": ";
			cin>> course[i];
		}

		float credit,totalCredit=0;
		for(i=1;i<=totalCourse;i++){
			if(i==2 || i==5 || i==7){
				credit = 1.5;
				course[i]=credit*course[i];
				totalCredit = totalCredit+credit;
			}

			else{
				credit=3.0;
				course[i]=credit*course[i];
				totalCredit=totalCredit+credit;
			}

		}
		//cout<<endl<< "Total Credit: "<<totalCredit;

		float sum=0;
		for(i=1;i<=totalCourse;i++){
			sum=sum+course[i];
		}
		float avg=sum/totalCredit;
		cout<<endl<<"GPA: "<<avg;
		cout<<endl<< "---------------------------------"<<endl<<endl<<endl;
}

void seventhSem(){
	int i,totalCourse=7;
	for(i=1;i<=totalCourse;i++){
			cout<<"4"<<"1"<<i<<": ";
			cin>> course[i];
		}

		float credit,totalCredit=0;
		for(i=1;i<=totalCourse;i++){
			if(i==2 || i==6){
				credit = 1.5;
				course[i]=credit*course[i];
				totalCredit = totalCredit+credit;
			}

			else{
				credit=3.0;
				course[i]=credit*course[i];
				totalCredit=totalCredit+credit;
			}

		}
		//cout<<endl<< "Total Credit: "<<totalCredit;

		float sum=0;
		for(i=1;i<=totalCourse;i++){
			sum=sum+course[i];
		}
		float avg=sum/totalCredit;
		cout<<endl<<"GPA: "<<avg;
		cout<<endl<< "---------------------------------"<<endl<<endl<<endl;
}
