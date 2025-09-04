#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int k=1, i=1;
class hospital
{
   public:
   int HID;
   char Hname[20];
    char ContactNumber[10];
    char Rhe;
    char type;
         void h_reg()
         {
            HID=k;
            cout<<"\nEnter Hospital ID: ";
            cin>>HID;
            
            cout<<"\nEnter Contact Number: ";
            cin>>ContactNumber;
           
           
                        
         }
         void h_display()
         {
            cout<<"\nHospital ID: "<<HID;
            cout<<"\nContact Number: "<<ContactNumber;
            
         }
         void payment()
         {
            int amt;
            cout<<"\nEnter the amount to be paid: ";
            cin>>amt;
            cout<<"\nAmount of Rs."<<amt<<" paid successfully!";
         }

         void payment_check()
         {
            int amt;
            cout<<"\nEnter the amount to be checked: ";
            cin>>amt;
            if(amt>0)
            {
               cout<<"\nAmount of Rs."<<amt<<" is valid!";
            }
            else
            {
               cout<<"\nAmount of Rs."<<amt<<" is not valid!";
            }
         }}

         class donor
         {
            public:
            int DID;
            char Dname[20];
            char DContactNumber[10];
            char DBloodGroup[5];
            char fitness;
            

                 void d_reg()
                 {
                    DID=i;
                    cout<<"\nEnter Donor ID: ";
                    cin>>DID;
                    
                    cout<<"\nEnter Donor Name: ";
                    cin>>Dname;
                    
                    cout<<"\nEnter Donor Contact Number: ";
                    cin>>DContactNumber;
                    
                    cout<<"\nEnter Donor Blood Group: ";
                    cin>>DBloodGroup;
                    
                    cout<<"\nEnter fitness (Y/N): ";
                    if yes
                    {
                       cout<<"\nDonor is fit to donate blood.";
                    }
                    else
                    {
                       cout<<"\nDonor is not fit to donate blood.";
                    }
                    blood group check
                    if(strcmp(DBloodGroup,"A+")==0 || strcmp(DBloodGroup,"A-")==0 || strcmp(DBloodGroup,"B+")==0 || strcmp(DBloodGroup,"B-")==0 || strcmp(DBloodGroup,"AB+")==0 || strcmp(DBloodGroup,"AB-")==0 || strcmp(DBloodGroup,"O+")==0 || strcmp(DBloodGroup,"O-")==0)
                    {
                       cout<<"\nValid Blood Group.";
                    }
                    else
                    {
                       cout<<"\nInvalid Blood Group.";
                    }}}

class bloodbank
{
   public:
   int BBID;
   char BBname[20];
   char BBContactNumber[10];
   char BBloodGroup[5];
   int units;

        void bb_reg()
        {
           BBID=k;
           cout<<"\nEnter Blood Bank ID: ";
           cin>>BBID;
           
           cout<<"\nEnter Blood Bank Name: ";
           cin>>BBname;
           
           cout<<"\nEnter Blood Bank Contact Number: ";
           cin>>BBContactNumber;
           
           cout<<"\nEnter Blood Group: ";
           cin>>BBloodGroup;
           
           cout<<"\nEnter number of units available: ";
           cin>>units;
           
           blood group check
           if(strcmp(BBloodGroup,"A+")==0 || strcmp(BBloodGroup,"A-")==0 || strcmp(BBloodGroup,"B+")==0 || strcmp(BBloodGroup,"B-")==0 || strcmp(BBloodGroup,"AB+")==0 || strcmp(BBloodGroup,"AB-")==0 || strcmp(BBloodGroup,"O+")==0 || strcmp(BBloodGroup,"O-")==0)
           {
              cout<<"\nValid Blood Group.";
           }
           else
           {
              cout<<"\nInvalid Blood Group.";
           }}}
           class bloodpackets
           {
              public:
              int BPID;
              char BPBloodGroup[5];
              int BPUnits;
              char ExpiryDate[10];
              
                   void bp_reg()
                   {
                      BPID=i;
                      cout<<"\nEnter Blood Packet ID: ";
                      cin>>BPID;
                      
                      cout<<"\nEnter Blood Group: ";
                      cin>>BPBloodGroup;
                      
                      cout<<"\nEnter number of units: ";
                      cin>>BPUnits;
                      
                      cout<<"\nEnter Expiry Date (DD/MM/YYYY): ";
                      cin>>ExpiryDate;
                      
                      blood group check
                      if(strcmp(BPBloodGroup,"A+")==0 || strcmp(BPBloodGroup,"A-")==0 || strcmp(BPBloodGroup,"B+")==0 || strcmp(BPBloodGroup,"B-")==0 || strcmp(BPBloodGroup,"AB+")==0 || strcmp(BPBloodGroup,"AB-")==0 || strcmp(BPBloodGroup,"O+")==0 || strcmp(BPBloodGroup,"O-")==0)
                      {
                         cout<<"\nValid Blood Group.";
                      }
                      else
                      {
                         cout<<"\nInvalid Blood Group.";
                      }
                      
                      expiry date check
                      if(strlen(ExpiryDate)==10 && ExpiryDate[2]=='/' && ExpiryDate[5]=='/')
                      {
                         cout<<"\nValid Expiry Date.";
                      }
                      else
                      {
                         cout<<"\nInvalid Expiry Date.";
                      }}};

                      void main()
                      {
                         hospital h;
                         donor d;
                         bloodbank bb;
                         bloodpackets bp;
                         int choice;
                         char cont;
                         do
                         {
                            cout<<"\n1. Hospital Registration";
                            cout<<"\n2. Donor Registration";
                            cout<<"\n3. Blood Bank Registration";
                            cout<<"\n4. Blood Packet Registration";
                            cout<<"\n5. Hospital Payment";
                            cout<<"\n6. Check Payment Validity";
                            cout<<"\nEnter your choice: ";
                            cin>>choice;
                            switch(choice)
                            {
                               case 1:
                               h.h_reg();
                               h.h_display();
                               k++;
                               break;
                               
                               case 2:
                               d.d_reg();
                               i++;
                               break;
                               
                               case 3:
                               bb.bb_reg();
                               k++;
                               break;
                               
                               case 4:
                               bp.bp_reg();
                               i++;
                               break;
                               
                               case 5:
                               h.payment();
                               break;
                               
                               case 6:
                               h.payment_check();
                               break;
                               
                               default:
                               cout<<"\nInvalid Choice!";
                            }
                            cout<<"\nDo you want to continue? (Y/N): ";
                            cin>>cont;
                         }while(cont=='Y' || cont=='y');
                      }