#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

float course[10];
int totalCourse, i;

void intro();
void input(int,int,int); //taking points per course id
void firstSem();
void secondSem();
void thirdSem();
void fourthSem();
void fifthSem();
void sixthSem();
void seventhSem();
//float eighthSem();

int main()
{
    int semester;
    intro();
    do
    {
        cout<< "Enter Desired Semester (0=exit): ";
        cin>> semester;

        if(semester>=0 && semester<=8)
        {
            switch(semester)
            {
            case 1:
                cout<< endl<<"     _-_-_-_-_-_-_- Enter gradePoint(<=4.00) -_-_-_-_-_-_-_"<<endl;
                firstSem();
                break;
            case 2:
                cout<< endl<<"     _-_-_-_-_-_-_- Enter gradePoint(<=4.00) -_-_-_-_-_-_-_"<<endl;
                secondSem();
                break;
            case 3:
                cout<< endl<<"     _-_-_-_-_-_-_- Enter gradePoint(<=4.00) -_-_-_-_-_-_-_"<<endl;
                thirdSem();
                break;
            case 4:
                cout<< endl<<"     _-_-_-_-_-_-_- Enter gradePoint(<=4.00) -_-_-_-_-_-_-_"<<endl;
                fourthSem();
                break;
            case 5:
                cout<< endl<<"     _-_-_-_-_-_-_- Enter gradePoint(<=4.00) -_-_-_-_-_-_-_"<<endl;
                fifthSem();
                break;
            case 6:
                cout<< endl<<"     _-_-_-_-_-_-_- Enter gradePoint(<=4.00) -_-_-_-_-_-_-_"<<endl;
                sixthSem();
                break;
            case 7:
                cout<< endl<<"     _-_-_-_-_-_-_- Enter gradePoint(<=4.00) -_-_-_-_-_-_-_"<<endl;
                seventhSem();
                break;
            case 8:
                cout<< "Semseter 8 is under Maintaince!! My condolences..:( :( Try another"<<endl;
                break;
            }
        }
        else
            cout<< "SEMESTER DOES NOT EXIST!!! Try Again..."<<endl<<endl;
    }
    while(semester!=0);
    getch();
    return 0;
}

void intro()
{
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
}

void input(int a, int b, int totalCourse){
    for(i=1; i<=totalCourse; i++)
    {
        cout<<a<<b<<i<<": "; //1st sem: a=1, b=1
        cin>> course[i];    // 2nd sem: a=1, b=2 and so on;
        if(course[i]<0 || course[i]>4.00)
        {
            cout<< "Fool u are!! -_- -_- Enter acceptable point (1.00 - 4.00)!!!"<<endl<<endl;
            i--;
        }
    }
}

void firstSem()
{
    int a=1,b=1,totalCourse=6;
    float credit,totalCredit=0;
    input(a,b,totalCourse);
    for(i=1; i<=totalCourse; i++)
    {
        if(i==3)
        {
            credit = 1.5;
            course[i]=credit*course[i];
            totalCredit = totalCredit+credit;
        }

        else
        {
            credit=3.0;
            course[i]=credit*course[i];
            totalCredit=totalCredit+credit;
        }

    }
    //cout<<endl<< "Total Credit: "<<totalCredit<<endl;

    float sum=0;
    for(i=1; i<=totalCourse; i++)
    {
        sum=sum+course[i];
    }
    float avg=sum/totalCredit;
    cout<<endl<<"GPA: "<<avg;
    cout<<endl<< "---------------------------------"<<endl<<endl<<endl;
}

void secondSem()
{
    int a=1, b=2,totalCourse=7;
    float credit,totalCredit=0;
    input(a,b,totalCourse);
    for(i=1; i<=totalCourse; i++)
    {
        if(i==2 || i==4)
        {
            credit = 1.5;
            course[i]=credit*course[i];
            totalCredit = totalCredit+credit;
        }

        else
        {
            credit=3.0;
            course[i]=credit*course[i];
            totalCredit=totalCredit+credit;
        }

    }
    //cout<<endl<< "Total Credit: "<<totalCredit<<endl;

    float sum=0;
    for(i=1; i<=totalCourse; i++)
    {
        sum=sum+course[i];
    }
    float avg=sum/totalCredit;
    cout<<endl<<"GPA: "<<avg;
    cout<<endl<< "---------------------------------"<<endl<<endl<<endl;
}

void thirdSem()
{
    int a=2, b=1,totalCourse=9;
    float credit,totalCredit=0;
    input(a,b,totalCourse);
    for(i=1; i<=totalCourse; i++)
    {
        if(i==2 || i==5 || i==8)
        {
            credit = 1.5;
            course[i]=credit*course[i];
            totalCredit = totalCredit+credit;
        }

        else
        {
            credit=3.0;
            course[i]=credit*course[i];
            totalCredit=totalCredit+credit;
        }

    }
    //cout<<endl<< "Total Credit: "<<totalCredit;

    float sum=0;
    for(i=1; i<=totalCourse; i++)
    {
        sum=sum+course[i];
    }
    float avg=sum/totalCredit;
    cout<<endl<<"GPA: "<<avg;
    cout<<endl<< "---------------------------------"<<endl<<endl<<endl;
}

void fourthSem()
{
    int a=2, b=2,totalCourse=7;
    float credit,totalCredit=0;
    input(a,b,totalCourse);
    for(i=1; i<=totalCourse; i++)
    {
        if(i==2 && i==4)
        {
            credit = 1.5;
            course[i]=credit*course[i];
            totalCredit = totalCredit+credit;
        }

        else
        {
            credit=3.0;
            course[i]=credit*course[i];
            totalCredit=totalCredit+credit;
        }

    }
    //cout<<endl<< "Total Credit: "<<totalCredit;

    float sum=0;
    for(i=1; i<=totalCourse; i++)
    {
        sum=sum+course[i];
    }
    float avg=sum/totalCredit;
    cout<<endl<<"GPA: "<<avg;
    cout<<endl<< "---------------------------------"<<endl<<endl<<endl;
}

void fifthSem()
{
    int a=3, b=1,totalCourse=6;
    float credit,totalCredit=0;
    input(a,b,totalCourse);
    for(i=1; i<=totalCourse; i++)
    {
        if(i==3)
        {
            credit = 1.5;
            course[i]=credit*course[i];
            totalCredit = totalCredit+credit;
        }

        else
        {
            credit=3.0;
            course[i]=credit*course[i];
            totalCredit=totalCredit+credit;
        }

    }
    //cout<<endl<< "Total Credit: "<<totalCredit;

    float sum=0;
    for(i=1; i<=totalCourse; i++)
    {
        sum=sum+course[i];
    }
    float avg=sum/totalCredit;
    cout<<endl<<"GPA: "<<avg;
    cout<<endl<< "---------------------------------"<<endl<<endl<<endl;
}

void sixthSem()
{
    int a=3, b=2,totalCourse=8;
    float credit,totalCredit=0;
    input(a,b,totalCourse);
    for(i=1; i<=totalCourse; i++)
    {
        if(i==2 || i==5 || i==7)
        {
            credit = 1.5;
            course[i]=credit*course[i];
            totalCredit = totalCredit+credit;
        }

        else
        {
            credit=3.0;
            course[i]=credit*course[i];
            totalCredit=totalCredit+credit;
        }

    }
    //cout<<endl<< "Total Credit: "<<totalCredit;

    float sum=0;
    for(i=1; i<=totalCourse; i++)
    {
        sum=sum+course[i];
    }
    float avg=sum/totalCredit;
    cout<<endl<<"GPA: "<<avg;
    cout<<endl<< "---------------------------------"<<endl<<endl<<endl;
}

void seventhSem()
{
    int a=4, b=1,totalCourse=7;
    float credit,totalCredit=0;
    input(a,b,totalCourse);
    for(i=1; i<=totalCourse; i++)
    {
        if(i==2 || i==6)
        {
            credit = 1.5;
            course[i]=credit*course[i];
            totalCredit = totalCredit+credit;
        }

        else
        {
            credit=3.0;
            course[i]=credit*course[i];
            totalCredit=totalCredit+credit;
        }

    }
    //cout<<endl<< "Total Credit: "<<totalCredit;

    float sum=0;
    for(i=1; i<=totalCourse; i++)
    {
        sum=sum+course[i];
    }
    float avg=sum/totalCredit;
    cout<<endl<<"GPA: "<<avg;
    cout<<endl<< "---------------------------------"<<endl<<endl<<endl;
}
