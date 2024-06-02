#include<iostream>
using namespace std;
#include<string>
class student
{
    protected:
    string name[6];
    string need;
    int rollno[6],i;
    float per[6];       
};    
class info : public student  
  { 
    public:
     int accept()
    {
      for(i=1;i<6;i++)   //accept data of 5 students
      {
       cout<<"Enter name of student :";
       cin>>name[i];
       cout<<endl<<"Enter roll no :";
       cin>>rollno[i];
       cout<<endl<<"Enter percentage of rollno:"<<rollno[i]<<" = ";
       cin>>per[i];
       cout<<endl;
      }
      return 0;
    }
    int result()
    {
        cout<<endl<<"Enter name of student info you want  = ";
        cin>>need;
        for(i=1;i<6;i++)
        {
          if(need==name[i])
          {
          cout<<"Name : "<<name[i]<<endl;
          cout<<"Roll no :"<<rollno[i]<<endl;
          cout<<"Percentage: "<<per[i]<<endl<<endl;
          }
        }
          
            cout<<"\nName is not in university database  " <<endl;
            
        return 0;
    } 
    int display()
     {
          for(i=1;i<6;i++)
          {
          cout<<"Name : "<<name[i]<<endl;
          cout<<"Roll no :"<<rollno[i]<<endl;
          cout<<"Percentage: "<<per[i]<<endl<<endl;
          
          }   
        return 0;
     }    
     
}; 
int main()
{
   int a,i;  
   class info s;
   while(true)
   { 
   cout<<"University Management System : "<<endl;
   cout<<"1. Add student "<<endl;
   cout<<"2. Display students "<<endl;
   cout<<"3. Search student by name "<<endl;
   cout<<"4. Quit "<<endl;
   cout<<"Enter your choice : ";
   cin>>a; 
  switch(a){
    case 1 : s.accept();
           break;
    case 2 : s.display();
            break;
    case 3 : s.result();
            break;
    case 4 : return 0;
            break;
    default: cout<<"Invalid choice . Please try again "<<endl;
     }
   }  
    return 0;
}
